#include "Civilian.hpp"


Civilian::Civilian(const std::string &name) : Human(name) {
	//TODO Implement
	this->debt = 0;
}

int Civilian::getDebt(){
	//TODO Implement
	//return -1;
	return this->debt;
}

void Civilian::increaseDebt(int debt){
	//TODO Implement

	this->debt = this->debt + debt;

}

void Civilian::decreaseDebt(int debt){
	//TODO Implement
	if( this->debt >= 0){
		 this->debt = this->debt - debt;
		 if( this->debt < 0 )
			  	  this->debt = 0;
	}else{
		this->debt = 0;
	}

}


