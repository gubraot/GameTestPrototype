#include "CharacterCreateSeane.h"
#include "CharacterNameInput.h"
#include "FaceSelectWindow.h"
#include "ListRequestWindow.h"
#include "MessageWindow.h"
#include "resource1.h"

extern HINSTANCE hInst;
char   copystring[50];

//キャラ名設定ダイアログプロシージャ
BOOL CALLBACK NameEdit(HWND hDlg, UINT Msg, WPARAM wParam, LPARAM lParam){

	char string[14];

    switch(Msg)
    {
    case WM_COMMAND:
        switch(LOWORD(wParam))
        {
        case IDOK:
			GetDlgItemText(hDlg, IDC_EDIT1, string, 14);
            EndDialog(hDlg, 0);
			strcpy_s( copystring, string );
            return TRUE;
        }
        break;

    case WM_CLOSE:
        EndDialog(hDlg, 0);
        return TRUE;
    }

    return FALSE;
}

CharacterCreateSeane::CharacterCreateSeane(void):Seane(){

}

CharacterCreateSeane::~CharacterCreateSeane(void){
}

void CharacterCreateSeane::calc(void){
	childCalc();
	inputCalc();
	if( this->inputName.size() == 0 ){
		inputCharacterName();
	}else if( getHierarchicalNum() < 10 ){
		switch( getHierarchical() ){
			case INIT:
				switch( getHierarchicalNum() ){
					case 0:
						setInputObject( new FaceSelectWindow() );
						addChild( new MessageWindow( 200, 300, 240, "上下で変更、Zキーで決定。") );
						break;

					case 1:
						setInputObject( new ListRequestWindow( 0, 0, 200, 10, CTYPE ) );
						break;

					case 2:
					case 3:
					case 4:
					case 5:
					case 6:
						setInputObject( new ListRequestWindow( 0, 0, 200, 10, CELEMENT ) );
						break;

					case 7:
						//この人作っていいですかYESNO
						break;
				}
				setHierarchical( SELECT );
				break;

			case SELECT:
				setHierarchical( window->getInputResult() );
				if( getHierarchicalNum() == 0 ){
				}
				if( getHierarchical() >= 0 ){
					addHierarchical();
					deleteChild();
					if( getHerarchicalNum() == 7 ){
						//キャラクターデータ生成
						
					}
				}
				break;

			case CANSEL:
				deleteHierarchical();
				break;

			default:
				break;
		}
	}
}

void CharacterCreateSeane::draw(void){
	this->childDraw();
	inputDraw();
	DrawFormatString( 100, 100, GetColor(255,255,255), "%s", inputName.c_str() );
}

void CharacterCreateSeane::inputCharacterName(void){
	SetMouseDispFlag( TRUE );
	SetUseIMEFlag( TRUE );
INPUT_RETRY:
	DialogBox(hInst, MAKEINTRESOURCE(IDD_DIALOG1), NULL, NameEdit);
	if(strcmp(copystring,"") == 0 ) goto INPUT_RETRY;
	this->inputName = copystring;
	SetMouseDispFlag( FALSE );
	SetUseIMEFlag( FALSE );
}