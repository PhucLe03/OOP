// Factory method design pattern
#include <iostream>
using namespace std;

enum VehicleType {
	Truck, Bus, Cab, Bike, Plane
};

// Library classes
class Vehicle {
public:
	virtual void printVehicle() = 0;
	static Vehicle* Create(VehicleType type);
	virtual ~Vehicle(){}
};
class _Truck : public Vehicle {
public:
	void printVehicle() {
		cout << "Truck incoming" << endl;
	}
};
class _Bus : public Vehicle {
public:
	void printVehicle() {
		cout << "Bus incoming" << endl;
	}
};
class _Cab : public Vehicle {
	public:
	void printVehicle() {
		cout << "Cab incoming" << endl;
	}
};
class _Bike : public Vehicle {
	public:
	void printVehicle() {
		cout << "Bike incoming" << endl;
	}
};
class _Plane : public Vehicle {
	public:
	void printVehicle() {
		cout << "Plane incoming" << endl;
	}
};

// Factory method to create objects of different types.
// Change is required only in this function to create a new object type
Vehicle* Vehicle::Create(VehicleType type) {
	if (type == Truck)
		return new _Truck();
	else if (type == Bus)
		return new _Bus();
	else if (type == Cab)
		return new _Cab();
    else if (type == Bike)
		return new _Bike();
    else if (type == Plane)
		return new _Plane();
	else return NULL;
}

// Client class
class Client {
public:

	// Client doesn't explicitly create objects
	// but passes type to factory method "Create()"
	Client(VehicleType type)
	{
		pVehicle = Vehicle::Create(type);
	}
	~Client() {
		if (pVehicle) {
			delete pVehicle;
			pVehicle = NULL;
		}
	}
	Vehicle* getVehicle() {
		return pVehicle;
	}

private:
	Vehicle *pVehicle;
};

// Driver program
int main() {
	Client *pClient = new Client(Plane);
	Vehicle * pVehicle = pClient->getVehicle();
	pVehicle->printVehicle();
	delete pClient;
	return 0;
}