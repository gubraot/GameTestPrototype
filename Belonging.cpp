#include "Belonging.h"

Belonging::Belonging( int baseNumber ){
	this->baseItemNumber = baseNumber;
	this->takeStatus = -1;
}

Belonging::Belonging( const std::vector<std::string>& cash ){
}

Belonging::~Belonging(void){
}
