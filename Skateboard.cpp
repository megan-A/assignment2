/*
  Created by Megan Achurra on 10/3/19
*/

#include "Skateboard.h"

//seed random number generator
	srand((unsigned int)time(0));

/*Constructor and Destructor*/

	Skateboard::Skateboard(string brand, string model)
	{
		myBrand = brand;
		myModel = model;
	}
	
    Skateboard::~Skateboard() = default;
	
/*Print*/
    
    string Skateboard::toString()
	{
		return "-> Skateboard\n" + Vehicle::toString;
	}
	
/*Mileage*/

	virtual double mileageEstimate(double time)
	{
		double mileage = rand % .6;
		
		if( time > 25 && time < 250)
		{
			double range = time/3;
			double add = rand % range;
			mileage += add;
		}
		
		mileage *= time;
		
		return mileage;
	}