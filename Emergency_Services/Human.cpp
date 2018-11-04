#include "Human.hpp"
#include <string>

Human::Human(const std::string &name) {
	//TODO Implement
	this->name = name;
}

std::string Human::getName(){
	//TODO Implement
	return this->name;
}

Human::~Human() {

}

