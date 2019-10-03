#include <iostream>
#include <cstdlib> // for random number generation
#include <ctime> // use time to seed generator
#include "Car.h"
#include "Bicycle.h"
#include "Jet.h"
#include "Skateboard.h"
#include "Boat.h"

void printVehiclesRoster(Vehicle **vehicles, int size);

int main() {
	
	srand((unsigned int)time(0)); //seed rand num generator
	
    std::cout << "Driving simulator" << std::endl;
    int size = 12;
    int capacity = 14;
    Vehicle **vehiclesArray = new Vehicle *[capacity];

    vehiclesArray[0] = new Car();
    vehiclesArray[1] = new Bicycle("eTAP", "P5X");
    vehiclesArray[2] = new Bicycle("R&A", "Dogma F8", 5);
    vehiclesArray[3] = new Car("Tesla", "T2", "electricity", "large");
    vehiclesArray[4] = new Bicycle("Mizuno", "Wave", 10);
    vehiclesArray[5] = new Car("BMW", "X5", "diesel", "grande");
	vehiclesArray[6] = new Jet();
	vehiclesArray[7] = new Jet("Cessna", "Citation Mustang", "Rocket", 2);
	vehiclesArray[8] = new Skateboard("Ripstik", "Carving Casterboard");
	vehiclesArray[9] = new Skateboard("Penny", "Nickel");
	vehiclesArray[10] = new Boat();
	vehiclesArray[11] = new Boat("Steel Ray", "SPX 190", "Premium", 3);


    printVehiclesRoster(vehiclesArray, size);

    if (vehiclesArray != 0) { // If it is not a null pointer
        // do not use nullptr. It is not supported on linprog
        for (int i = 0; i < size; i++) {
            delete vehiclesArray[i];
        }
        delete[] vehiclesArray;
    }
    return 0;
}

void printVehiclesRoster(Vehicle **vehicles, int size) {
    double simulatedDistance = 130;
    for (int i = 0; i < size; i++) {
        cout << i << " " << vehicles[i]->toString() << endl;
        cout << "\tWould travel: "
             << vehicles[i]->mileageEstimate(simulatedDistance) << " miles in "
             << simulatedDistance << " minutes" << endl;
    }
}
