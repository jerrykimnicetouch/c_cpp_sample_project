#include "Staff.hpp"
#include "Suspect.hpp"
#ifndef POLICEOFFICER_HPP_
#define POLICEOFFICER_HPP_

class PoliceOfficer : public Staff {
// TODO add members as needed
private:
	PoliceOfficer& operator=(const PoliceOfficer& other);
        PoliceOfficer(const PoliceOfficer& other);

        Suspect* suspect;
public:
	PoliceOfficer(const std::string &name);
	void assignSuspect(Suspect* suspect);
	Suspect* getAssignedSuspect();

	virtual ~PoliceOfficer();

	//perform job overriding
	void performJob();
};

#endif /* POLICEOFFICER_HPP_ */
