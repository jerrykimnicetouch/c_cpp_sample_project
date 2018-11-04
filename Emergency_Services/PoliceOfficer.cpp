#include "PoliceOfficer.hpp"
//TODO Implement the PoliceOfficer class


PoliceOfficer::PoliceOfficer(const std::string &name) : Staff(name) {
	//TODO Implement
	this->suspect = 0;
}

PoliceOfficer::~PoliceOfficer() {
	delete this->suspect;
}

//police perform job overriding
void PoliceOfficer::performJob(){
	//TODO Implement
	this->isJobCompleted = true;
	if(this->suspect){
		this->suspect->setCaught();
		this->suspect->addCaughtAmount();
	}

}



void PoliceOfficer::assignSuspect(Suspect* suspect){
	//TODO Implement
	this->suspect = suspect;

}

Suspect* PoliceOfficer::getAssignedSuspect(){
	//TODO Implement

	return this->suspect;
}
