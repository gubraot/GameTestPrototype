 #include "Window.h"

Window::Window(int x1, int x2, int y1, int y2) : DrawObject( x1, y1 ){
	LoadDivGraph( "grf/sys/window.png", 9, 3, 3, 6, 6, windowParts );
	LoadDivGraph( "grf/sys/selectwaku.png", 9, 3, 3, 6, 6, windowSelectParts );
	xPosition2 = x2;
	yPosition2 = y2;
	drawCount = 0;
}

Window::~Window(void){
	for( int i = 0; i < 9; i++ ){
		DeleteGraph( windowParts[i] );
		DeleteGraph( windowSelectParts[i] );
	}
}

int Window::getxPosition2(void){
	return xPosition2;
}

int Window::getyPosition2(void){
	return yPosition2;
}

void Window::tileImageDraw( int x1, int y1, int x2, int y2, int image ){

	//�摜�T�C�Y�i�[�ꏊ
	int w, h;

	SetDrawArea( x1, y1, x2, y2 );
	GetGraphSize( image, &w, &h );
	//�~���l�ߕ`��
	for( int i = 0; i * h < y2 - y1; i++ ){
		for( int j = 0; j * w < x2 - x1; j++ ){
			DrawGraph( x1 + (j * w), y1 + (i * h), image, TRUE );
		}
	}
	SetDrawArea( 0, 0, 640, 480 );
}

void Window::windowDraw(void){
	
	//�ϐ���`
	int draw_point_x[4][4]; //�p�[�c�`��ɕK�v�ȍ���x���W16�_
	int draw_point_y[4][4]; //�p�[�c�`��ɕK�v�ȍ���y���W16�_
	int parts_number = 0;

	//�`��|�C���g�̎Z�o
	for( int i = 0; i < 4; i++ ){
		draw_point_x[i][0] = xPosition;
		draw_point_y[0][i] = yPosition;
		draw_point_x[i][1] = xPosition + 6;
		draw_point_y[1][i] = yPosition + 6;
		draw_point_x[i][2] = xPosition2 - 6;
		draw_point_y[2][i] = yPosition2 - 6;
		draw_point_x[i][3] = xPosition2;
		draw_point_y[3][i] = yPosition2;
	}

	//�`��{��
	for( int i = 0; i < 3; i++ ){
		for( int j = 0; j < 3; j++ ){
			if( i != 1 && j != 1 ){
				DrawGraph( draw_point_x[i][j], draw_point_y[i][j], windowParts[parts_number], TRUE );
			}else{
				tileImageDraw( draw_point_x[i][j], draw_point_y[i][j], draw_point_x[i + 1][j + 1], draw_point_y[i + 1][j + 1], windowParts[parts_number] );
			}
			parts_number++;
		}
	}

	//�`��J�E���g�̉��Z
	drawCount++;
}

void Window::Draw_select( int x1, int x2, int y1, int y2 ){
	
	//�ϐ���`
	int draw_point_x[4][4]; //�p�[�c�`��ɕK�v�ȍ���x���W16�_
	int draw_point_y[4][4]; //�p�[�c�`��ɕK�v�ȍ���y���W16�_
	int parts_number = 0;
	int alpha;

	//�`��|�C���g�̎Z�o
	for( int i = 0; i < 4; i++ ){
		draw_point_x[i][0] = x1;
		draw_point_y[0][i] = y1;
		draw_point_x[i][1] = x1 + 6;
		draw_point_y[1][i] = y1 + 6;
		draw_point_x[i][2] = x2 - 6;
		draw_point_y[2][i] = y2 - 6;
		draw_point_x[i][3] = x2;
		draw_point_y[3][i] = y2;
	}

	//�O���f�[�V�����l�̌v�Z
	alpha = abs((( drawCount % 64 ) * 4 )  - 128 ) + 128;

	//�`��{��
	SetDrawBlendMode( DX_BLENDMODE_ALPHA, alpha );
	for( int i = 0; i < 3; i++ ){
		for( int j = 0; j < 3; j++ ){
			if( i != 1 && j != 1 ){
				DrawGraph( draw_point_x[i][j], draw_point_y[i][j], windowSelectParts[parts_number], TRUE );
			}else{
				tileImageDraw( draw_point_x[i][j], draw_point_y[i][j], draw_point_x[i + 1][j + 1], draw_point_y[i + 1][j + 1], windowSelectParts[parts_number] );
			}
			parts_number++;
		}
	}
	SetDrawBlendMode( DX_BLENDMODE_NOBLEND, 0 );
}

void Window::draw(void){
	windowDraw();
}