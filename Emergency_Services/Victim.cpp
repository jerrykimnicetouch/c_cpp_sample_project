#include "Victim.hpp"

Victim::Victim(const std::string &name) : Civilian(name) {
	//TODO Implement
	this->isTreat = false;
	this->treatAmount = 0;
}

bool Victim::isTreated(){
	//TODO Implement
	return this->isTreat;
}

int Victim::getTreatedByAmount(){
	//TODO Implement
	return this->treatAmount;
}

//the below methods added
void Victim::addTreatAmount(){
	this->treatAmount = this->treatAmount + 1;
}

void Victim::setTreat(){
	this->isTreat = true;
}

Victim::~Victim() {
	// TODO Auto-generated destructor stub
}

