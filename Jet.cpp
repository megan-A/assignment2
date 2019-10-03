/*
	Created by Megan Achurra 9/29/19
*/

#include "Jet.h"

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
		setBrand(brand);
		setModel(model);
		setFuelType(fuel);
		numberOfEngines = numEngines;
	}
	
/*Destructor*/

	Jet::~Jet() = default;
	
/*Print to Screen*/

	string Jet::toString()
	{
		return "-> Jet\n" + PoweredVehicle::toString() + 
					"\n\tNumber of Engines: " + to_string(numberOfEngines);
	}
	
/*Mileage*/

	double Jet::mileageEstimate(double time)
	{
		double mileage;
		mileage = rand() % 60 + 40; 	//random number generation between 
									//40 and 100
		if(numberOfEngines > 2 && fuelType == "Rocket")
		{
			double boost = .055 * numberOfEngines;
			boost++;
			mileage *= boost;
		}
		
		mileage *= time;
		
		return mileage;
	}
	
/*Set Number of Engines*/

	void Jet::setnumberOfEngines(int numEngines)
	{
		numberOfEngines = numEngines;
	}
	
/*Get Number of Engines*/

	int Jet::getnumberOfEngines()
	{
		return numberOfEngines;
	}