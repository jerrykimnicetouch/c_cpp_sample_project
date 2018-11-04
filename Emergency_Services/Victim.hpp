#include "Civilian.hpp"
#ifndef VICTIM_HPP_
#define VICTIM_HPP_

class Victim : public Civilian {
//TODO add members as needed
private:

    	Victim& operator=(const Victim& other);
    	Victim(const Victim& other);

    	bool isTreat;
    	int treatAmount;
public:
	Victim(const std::string &name);
	bool isTreated();
	int getTreatedByAmount();
	virtual ~Victim();

	//method added
	void addTreatAmount();
	void setTreat();
};

#endif /* VICTIM_HPP_ */
