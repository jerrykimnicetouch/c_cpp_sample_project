#include "Emergency.hpp"

Emergency::Emergency(Address* address, Victim* victim, Suspect* suspect ) {
	//TODO Implement
	this->address = address;
	this->victim = victim;
	this->suspect = suspect;
	this->status = CRITICAL;
}

Address* Emergency::getAddress(){
	//TODO Implement
	return this->address;
}

Suspect* Emergency::getSuspect(){
	//TODO Implement
	return this->suspect;
}

Victim* Emergency::getVictim(){
	//TODO Implement
	return this->victim;
}

Status Emergency::getStatus(){
	//TODO Implement
	return this->status;
}

void Emergency::setStatus(Status status){
	//TODO Implement
	this->status = status;
}

std::vector<Staff*> Emergency::getAssignedStaff(){
	return this->assignedStaff;
}

void Emergency::assignStaff(Staff *staff){
	//TODO Implement
	if( this->status != TRANSPORTED && this->status != COMPLETED ){
		staff->setAssigned(true);
		//maybe set staff ID here?
		int id = this->assignedStaff.size()+1;
		staff->setID(id);
		this->assignedStaff.push_back(staff);

		this->status = ASSIGNED;
	}

}

bool Emergency::resolve(){
	//TODO Implement
	if(this->status == COMPLETED){
		return true;
	}else{
		if(this->assignedStaff.empty()){
			return false;
		}else{
			//all staff should perform their job
			for(unsigned i = 0; i < this->assignedStaff.size() ; i++ ){
				Staff* staff = this->assignedStaff[i];
				staff->performJob();

			}
			this->status = COMPLETED;
			return true;
		}
	}
	//return true;
}

Emergency::~Emergency() {
	// TODO Auto-generated destructor stub
	delete this->address;
	delete this->suspect;
	delete this->victim;

}

