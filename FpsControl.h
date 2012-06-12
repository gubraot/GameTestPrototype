#pragma once
#include <Dxlib.h>

class FpsControl
{
public:

	FpsControl(void){
		calcCount = 0;
	}

	~FpsControl(void){
	}
	
	void calcFps(void);
	inline void drawFps(void){
		if(paramater >= 55.0 ){
			DrawFormatString( 550, 460, GetColor( 255, 255 ,255 ), "fps:%.1f", paramater );
		}else if( paramater != 0 ){
			DrawFormatString( 550, 460, GetColor( 255, 255, 0 ), "fps:%.1f", paramater );
		}	
	};

private:
	int		time[2];
	int 	calcCount;
	float	paramater;
};
