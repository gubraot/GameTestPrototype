#include "FpsControl.h"

void FpsControl::calcFps(void){
	if(calcCount == 0){
		time[0] = GetNowCount();
	}
	if(calcCount == 30){
		time[1] = GetNowCount();
		paramater = 1000.0f / ((time[1] - time[0]) / 30.0f);
		calcCount = 0;
	}else{
		calcCount++;
	}
}