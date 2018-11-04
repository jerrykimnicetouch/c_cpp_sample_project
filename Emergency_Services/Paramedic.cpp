#include "Paramedic.hpp"
//TODO Implement Paramedic Class


Paramedic::Paramedic(const std::string &name) : Staff(name) {
	//Constructed using parent
	this->victim = 0;
}

Paramedic::~Paramedic() {
	delete this->victim;

}

void Paramedic::assignVictim(Victim* victim){

	this->victim = victim;

}
Victim* Paramedic::getAssignedVictim(){
	return this->victim;
}

// Paramedic perform job overriding
void Paramedic::performJob(){
	//TODO Implement

	this->isJobCompleted = true;
	if(this->victim){
		this->victim->setTreat();
		this->victim->addTreatAmount();
	}
}
