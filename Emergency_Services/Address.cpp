 #include "Address.hpp"

Address::Address(int number, std::string street, std::string suburb, std::string postcode){
	//TODO IMPLEMENT
    this->changeAddressTo( number, street, suburb, postcode );

}

void Address::changeAddressTo(int number, std::string street, std::string suburb, std::string postcode){
	//TODO IMPLEMENT
		this->number = 10; //default number 10 is assigned
		if( (getNumDigit(number) == 2) || (getNumDigit(number) == 3)  ){
			this->number = number;
		}

		this->street = street;
		this->suburb = suburb;

		this->postcode = "1111"; //default value is assigned first but the value will update below if all checks are okay
		if( getNumDigit( std::stoi(postcode) ) == 4 ){
			//inclusive check
			if( checkInclusive( postcode.at(0)-48, 1, 4 ) && checkInclusive( postcode.at(1)-48, 1, 4  ) ){ //first and second digit check
				if( checkInclusive( postcode.at(2)-48, 0, 9  ) && checkInclusive( postcode.at(3)-48, 0, 9  ) ){ //third and forth digit check
					//all checks are okay
					this->postcode = postcode;
				}
			}
		}
}

int Address::getNumber() {
	//TODO IMPLEMENT
	//return -1;
	return this->number;
}
//private method to get digits from the given number
int Address::getNumDigit(int number){
	int digits = 0;
	while (number) {
        number /= 10;
        digits++;
	}
	return digits;
}
//private method to check
bool Address::checkInclusive(int number, int min, int max){
	if(number >= min && number <= max){
		return true;
	}else{
		return false;
	}
}


std::string Address::getPostcode() {
	//TODO IMPLEMENT
	return this->postcode;
}

std::string Address::getStreet() {
	//TODO IMPLEMENT
	return this->street;
}

std::string Address::getSuburb() {
	//TODO IMPLEMENT
	return this->suburb;
}

Address::~Address() {
	// TODO Auto-generated destructor stub
}

