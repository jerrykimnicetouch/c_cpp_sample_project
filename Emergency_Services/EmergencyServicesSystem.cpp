#include "EmergencyServicesSystem.hpp"
#include <iostream>
#include <vector>

EmergencyServicesSystem::EmergencyServicesSystem() {

}

std::string EmergencyServicesSystem::author(){
	//TODO Implement
	//UPI return
	return "abcd123";
}

// TODO implement all the other methods and destructor for EmergencyServicesSystem

EmergencyServicesSystem::~EmergencyServicesSystem(){
	//TODO Implement destructor
	/*delete this->emergencies;
	delete this->policeofficers;
	delete this->paramedics;
	delete this->firefighters;
	delete this->vehicles;*/ //<-- delete is not required unless vector was created by new instantiation
}

void EmergencyServicesSystem::hirePoliceOfficer(PoliceOfficer* policeOfficer){
	this->policeofficers.push_back(policeOfficer);

}
void EmergencyServicesSystem::hireParamedic(Paramedic* paramedic){
	this->paramedics.push_back(paramedic);

}
void EmergencyServicesSystem::hireFireFighter(FireFighter* fireFighter){
	this->firefighters.push_back(fireFighter);

}
bool EmergencyServicesSystem::addEmergency(Emergency* emergency){

	for(unsigned i = 0; i < this->emergencies.size(); i++){
		Emergency* emergencyExisiting = this->emergencies[i];
				if( emergencyExisiting->getAddress()->getNumber() == emergency->getAddress()->getNumber() &&
						emergencyExisiting->getAddress()->getStreet() == emergency->getAddress()->getStreet() &&
						emergencyExisiting->getAddress()->getPostcode() == emergency->getAddress()->getPostcode() &&
						emergencyExisiting->getSuspect()->getName() == emergency->getSuspect()->getName() &&
						emergencyExisiting->getVictim()->getName() == emergency->getVictim()->getName()

						){

								return false;

				}

	}

	this->emergencies.push_back(emergency);
	return true;

}
void EmergencyServicesSystem::buyVehicle(Vehicle* vehicle){
	this->vehicles.push_back(vehicle);
	//return true;

}
bool EmergencyServicesSystem::assignStaffToEmergency(Address* address, int numPoliceOfficers, int numParamedics, int numFireFighters){

	//get addresses from emergencies list
	for(unsigned m = 0 ; m < this->emergencies.size(); m++){
		Emergency* emergency = this->emergencies[m];
		if( emergency->getAddress()->getNumber() == address->getNumber() &&
				emergency->getAddress()->getStreet() == address->getStreet() &&
					emergency->getAddress()->getPostcode() == address->getPostcode() ){

						//count not-assigned staffs here
						int countPolice = 0;
						for(unsigned i = 0; i < this->policeofficers.size(); i++){
							PoliceOfficer* police = this->policeofficers[i];
							if( !police->isAssigned() ) countPolice = countPolice +1;

						}

						if( countPolice < numPoliceOfficers ) return false;

						int countParamedics = 0;
						for(unsigned i = 0; i < this->paramedics.size(); i++){
							Paramedic* para = this->paramedics[i];
							if( !para->isAssigned() ) countParamedics = countParamedics +1;

						}

						if( countParamedics < numParamedics ) return false;


						int countFireF = 0;
						for(unsigned i = 0; i < this->firefighters.size(); i++){
							FireFighter* firef = this->firefighters[i];
							if( !firef->isAssigned() ) countFireF = countFireF +1;

						}

						if( countFireF < numFireFighters ) return false;


						//Assign staffs to the emergency here
						countPolice = 0;
						for(unsigned i = 0; i < this->policeofficers.size(); i++){
								PoliceOfficer* police = this->policeofficers[i];
								if( !police->isAssigned() && countPolice < numPoliceOfficers ) {
									emergency->assignStaff(police);
									countPolice = countPolice + 1;
								}
						}

						countParamedics = 0;
						for(unsigned i = 0; i < this->paramedics.size(); i++){
								Paramedic* para = this->paramedics[i];
								if( !para->isAssigned() && countParamedics < numParamedics ){
									emergency->assignStaff(para);
									countParamedics = countParamedics +1;
								}
						}

						countFireF = 0;
						for(unsigned i = 0; i < this->firefighters.size(); i++){
								FireFighter* firef = this->firefighters[i];
								if( !firef->isAssigned() && countFireF < numFireFighters ){
									emergency->assignStaff(firef);
									countFireF = countFireF +1;
								}

						}
						return true;



		}
	}
	return false;


}


bool EmergencyServicesSystem::transportStaff(Address* address){

	//get addresses from emergencies list
		for(unsigned m = 0 ; m < this->emergencies.size(); m++){
			Emergency* emergency = this->emergencies[m];
			if( emergency->getAddress()->getNumber() == address->getNumber() &&
					emergency->getAddress()->getStreet() == address->getStreet() &&
						emergency->getAddress()->getPostcode() == address->getPostcode() ){

							int numberOfStaffs = emergency->getAssignedStaff().size();
							if( numberOfStaffs <= 0 ){
								return false;
							}else{
								//int capacity = this->vehicles.size();
								
								int capacity = 0;
								for(unsigned o = 0; o < this->vehicles.size(); o++ ){
									Vehicle* vehicle = this->vehicles[o];
									capacity = capacity + vehicle->getCapacity();
								}
								
								if(capacity < numberOfStaffs ){
									return false;
								}else{
									emergency->setStatus(TRANSPORTED);
									return true;
								}
							}

			}
		}
		return false;


}
bool EmergencyServicesSystem::resolveEmergency(Address* address){

	//get addresses from emergencies list
			for(unsigned m = 0 ; m < this->emergencies.size(); m++){
				Emergency* emergency = this->emergencies[m];
				if( emergency->getAddress()->getNumber() == address->getNumber() &&
						emergency->getAddress()->getStreet() == address->getStreet() &&
							emergency->getAddress()->getPostcode() == address->getPostcode() ){

							if( emergency->getStatus() != TRANSPORTED ){
								return false;

							}else{
								if( emergency->resolve() ) {
									return true;
								}else{
									return false;
								}

							}


				}
			}
			return false;
}
int EmergencyServicesSystem::getStaffCount(){

	//count all staffs hired in the emergency system here
	int countAllStaffHired = 0;
	countAllStaffHired = this->policeofficers.size() + this->paramedics.size() + this->firefighters.size();
	
	return countAllStaffHired;
	
}

