#include "Vehicle.hpp"

Vehicle::Vehicle(const std::string &name, int capacity) {
	//TODO Implement

	this->name = name;
	this->capacity = capacity;
}

int Vehicle::getCapacity(){
	//TODO Implement
	return this->capacity;
	//return -1;
}

std::string Vehicle::getName(){
	//TODO Implement
	return this->name;
	//return "";
}

Vehicle::~Vehicle() {
	// TODO Auto-generated destructor stub
}

