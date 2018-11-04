#include "FireFighter.hpp"

FireFighter::FireFighter(const std::string &name) : Staff(name) {
	//Constructed using parent

}

FireFighter::~FireFighter() {

}

//fire fighter perform job overriding
void FireFighter::performJob(){
	//TODO Implement
	this->isJobCompleted = true; //following assignment instruction 2.3

}

