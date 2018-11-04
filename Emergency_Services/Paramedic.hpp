#include "Staff.hpp"
#include "Victim.hpp"
#ifndef PARAMEDIC_HPP_
#define PARAMEDIC_HPP_

class Paramedic : public Staff{
//TODO Add members as needed
private:

    	Paramedic& operator=(const Paramedic& other);
    	Paramedic(const Paramedic& other);

    	Victim* victim;
public:
	Paramedic(const std::string &name);
	void assignVictim(Victim* victim);
	Victim* getAssignedVictim();
	~Paramedic();

	//perform job overriding
	void performJob();
};

#endif /* PARAMEDIC_HPP_ */
