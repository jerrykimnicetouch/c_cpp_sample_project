#include "Human.hpp"
#include "Address.hpp"
#include "Civilian.hpp"

#ifndef STAFF_HPP_
#define STAFF_HPP_

class Staff : public Human {
//TODO Implement Human class
private:

	Staff& operator=(const Staff& other);
    	Staff(const Staff& other);

    	int staffID;
    	bool isAssign;

protected:
    	bool isJobCompleted;
public:
	Staff(const std::string &name);
	virtual void performJob();
	void setAssigned(bool assigned);
	bool isAssigned();
	bool isJobComplete();
	int getID();
	void setID(int id);
	virtual ~Staff();
};

#endif /* STAFF_HPP_ */
