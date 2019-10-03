/*
	Created by Megan Achurra 9/29/19
*/

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle
{
public:

	Jet();						//Default Constructor
	explicit Jet(string brand, string model, string fuel, int numEngines = 1); 
	virtual ~Jet(); 			//Destructor
	virtual string toString(); 	//Print Jet Info
    virtual double mileageEstimate(double time) = 0;
	void setnumberOfEngines(int numEngines);
	int getnumberOfEngines();
	
private:

	int numberOfEngines;  
};

#endif //DRIVINGSIMULATOR_JET_H