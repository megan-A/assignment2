/*
	Created by Megan Achurra 9/29/19
*/

#include "Boat.h"

/*Constructors and Destructor*/

	//Default
	Boat::Boat()
	{
		setBrand("Custom");
		setModel("Custom");
		numberOfMotors = 1;
	}
	
	//Explicit Constructors
	Boat::Boat(string brand, string model, string fuel, int numMotors)
	{
		setBrand(brand);
		setModel(model);
		setFuelType(fuel);
		numberOfMotors = numMotors;
	}
	
/*Destructor*/

	Boat::~Boat() = default;
	
/*Print to Screen*/

	string Boat::toString()
	{
		return "-> Boat\n" + PoweredVehicle::toString() + 
					"\n\tNumber of Motors: " + to_string(numberOfMotors);
	}
	
/*Mileage*/

	double Boat::mileageEstimate(double time)
	{
		double mileage = 20;
		double boost = 1;
		
		for(int i = 0; i < numberOfMotors; i++)
		{
			boost += .15;
		}
		
		if(fuelType == "Premium")
		{
			mileage += 10;
		}
		
		mileage *= boost;
		
		return mileage;
	}
	
/*Set Number of Motors*/

	void Boat::setnumberOfMotors(int numMotors)
	{
		numberOfMotors = numMotors;
	}
	
/*Get Number of Motors*/

	int Boat::getnumberOfMotors()
	{
		return numberOfMotors;
	}