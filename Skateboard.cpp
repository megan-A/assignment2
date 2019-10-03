/*
  Created by Megan Achurra on 10/3/19
*/

#include "Skateboard.h"

/*Constructor and Destructor*/

	Skateboard::Skateboard(string brand, string model)
	{
		setBrand(brand);
		setModel(model);
	}
	
    Skateboard::~Skateboard() = default;
	
/*Print*/
    
    string Skateboard::toString()
	{
		return "-> Skateboard\n" + Vehicle::toString();
	}
	
/*Mileage*/

	double mileageEstimate(double time)
	{
		double mileage = rand() % 5 + 1;
		mileage /= 10;
		
		mileage *= time;
		
		if(time > 25 && time < 250)
		{
			int range = (static_cast<int>(time))/3;
			int add = rand() % range + 1;
			mileage += add;
		}
			
		return mileage;
	}