#include <vector>
#include <iostream>
#include "PoliceOfficer.hpp"
#include "FireFighter.hpp"
#include "Paramedic.hpp"
#include "Emergency.hpp"
#include "Vehicle.hpp"

#ifndef EMERGENCYSERVICESSYSTEM_HPP_
#define EMERGENCYSERVICESSYSTEM_HPP_

class EmergencyServicesSystem {
	//TODO Add members as needed
private:
	std::vector<Emergency*> emergencies;
	std::vector<PoliceOfficer*> policeofficers;
	std::vector<Paramedic*> paramedics;
	std::vector<FireFighter*> firefighters;

	std::vector<Vehicle*> vehicles;

public:
	EmergencyServicesSystem();
	static std::string author();
	void hirePoliceOfficer(PoliceOfficer* policeOfficer);
	void hireParamedic(Paramedic* paramedic);
	void hireFireFighter(FireFighter* fireFighter);
	bool addEmergency(Emergency* emergency);
	void buyVehicle(Vehicle* vehicle);

	bool assignStaffToEmergency(Address* address, int numPoliceOfficers, int numParamedics, int numFireFighters);
	bool transportStaff(Address* address);
	bool resolveEmergency(Address* address);

	int getStaffCount();


	virtual ~EmergencyServicesSystem();
};

#endif /* EMERGENCYSERVICESSYSTEM_HPP_ */
