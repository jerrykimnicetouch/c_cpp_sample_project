#include "Civilian.hpp"
#ifndef SUSPECT_HPP_
#define SUSPECT_HPP_

class Suspect : public Civilian{
//TODO Add members as needed
private:

    	Suspect& operator=(const Suspect& other);
    	Suspect(const Suspect& other);

    	bool isCaughted;
    	int caughtAmount;
public:
	Suspect(const std::string &name);
	bool isCaught();
	int getCaughtByAmount();
	virtual ~Suspect();
	
	void setCaught();
	void addCaughtAmount();
};

#endif /* SUSPECT_HPP_ */
