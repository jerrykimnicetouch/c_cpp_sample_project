#include "Staff.hpp"

Staff::Staff(const std::string &name) : Human(name) {
	//TODO Implement
	this->isAssign = false;
    this->isJobCompleted = false;
}

void Staff::performJob(){
	//TODO Implement
	this->isJobCompleted = true;
}

void Staff::setAssigned(bool assigned){
	//TODO Implement
	this->isAssign = assigned;
}

bool Staff::isAssigned(){
	//TODO Implement
	return this->isAssign;
}

bool Staff::isJobComplete(){
	//TODO Implement
	return this->isJobCompleted;
}

int Staff::getID(){
	//TODO Implement
	return this->staffID;
}
//method added
void Staff::setID(int id){
	//TODO Implement
	this->staffID = id;
}

Staff::~Staff() {
	// TODO Auto-generated destructor stub
}

