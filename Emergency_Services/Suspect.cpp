#include "Suspect.hpp"

Suspect::Suspect(const std::string &name) : Civilian(name) {
	//TODO Implement

	this->isCaughted = false;
	this->caughtAmount = 0;

}

bool Suspect::isCaught(){
	//TODO Implement
	return this->isCaughted;
}

int Suspect::getCaughtByAmount(){
	//TODO Implement
	return this->caughtAmount;
}

//methods added here
void Suspect::setCaught(){
	//TODO Implement
	this->isCaughted = true;
}
void Suspect::addCaughtAmount(){
	this->caughtAmount = this->caughtAmount + 1;
}

Suspect::~Suspect() {
	// TODO Auto-generated destructor stub
}

