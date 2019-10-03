/*
	Created by Megan Achurra 9/29/19
*/

#include "Jet.h"

//Seed Random Number Generator
	srand((unsigned int)time(0));

/*Constructors and Destructor*/

	//Default
	Jet::Jet()
	{
		setBrand("Custom");
		setModel("Custom");
		numberOfEngines = 1;
	}
	
	//Explicit Constructors
	Jet::Jet(string brand, string model, string fuel, int numEngines)
	{
		myBrand = brand;
		myModel = model;
		fuelType = fuel;
		numberOfEngines = numEngines;
	}
	
/*Destructor*/

	Jet::~Jet() = default;
	
/*Print to Screen*/

	string Jet::toString()
	{
		return "-> Jet\n" + PowerVehicle::toString + 
					"\n\t Number of Engines: " + getnumberOfEngines();
	}
	
/*Mileage*/

	double Jet::mileageEstimate(double time)
	{
		double mileage;
		mileage = rand % 60 + 40; 	//random number generation between 
									//40 and 100
		if(numberOfEngines > 2 && fuelType == "Rocket")
		{
			double boost = .055 * numberOfEngines;
			mileage *= boost;
		}
		
		mileage *= time;
		
		return mileage;
	}
	
/*Set Number of Engines*/

	void Jet::setnumberOfEngines(string numEngines)
	{
		numberOfEngines = numEngines;
	}
	
/*Get Number of Engines*/

	int Jet::getnumberOfEngines()
	{
		return numberOfEngines;
	}