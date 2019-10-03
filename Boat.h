/*
	Created by Megan Achurra 10/3/19
*/

#ifndef DRIVINGSIMULATOR_BOAT_H
#define DRIVINGSIMULATOR_BOAT_H

#include "PoweredVehicle.h"

class Boat : public PoweredVehicle
{
public:

	Boat();						//Default Constructor
	explicit Boat(string brand, string model, string fuel, int numMotors = 1); 
	virtual ~Boat(); 			//Destructor
	virtual string toString(); 	//Print Boat Info
    virtual double mileageEstimate(double time) = 0;
	void setnumberOfMotors(int numMotors);
	int getnumberOfMotors();
	
private:

	int numberOfMotors;  
};

#endif //DRIVINGSIMULATOR_BOAT_H