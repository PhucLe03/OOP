#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee
{
public:
    string getDestination() {return destination;}
    virtual void printEmployeeDetails() {
        cout << "Name: " << name << ", ID: " << ID << ", destination: " << destination << endl;
    }
protected:
    string name;
    int ID;
    string destination;
};

class Manager: public Employee
{
public:
    Manager(string name, int ID) {
        this->name = name;
        this->ID = ID;
        this->destination = "Manager";
    }

};

class Developer: public Employee
{
public:
    Developer(string name, int ID) {
        this->name = name;
        this->ID = ID;
        this->destination = "Developer";
    }
};

class Directory : public Employee
{
public:
    Directory() = default;
    void addEmployee(Employee* employee) {
        if (employee->getDestination() == "Manager") {
            bossList.push_back(employee);
        }
        else employeeList.push_back(employee);
    }
    void printEmployeeDetails() {
        for (size_t i=0; i<bossList.size(); i++)
            bossList[i]->printEmployeeDetails();
        for (size_t i=0; i<employeeList.size(); i++)
            employeeList[i]->printEmployeeDetails();
    }
private:
    vector<Employee*> employeeList;
    vector<Employee*> bossList;
};

class Department : public Directory
{
public:
    Department(string n) {name = n;}
    void printName() {
        cout << "Department name: " << name << endl;
    }
};

int main()
{
    Employee * lhp = new Developer("Le Hoang Phuc", 1);
    Employee * hpl = new Developer("Hoang Phuc Le", 2);
    Employee * plh = new Developer("Phuc Le Hoang", 3);

    Employee * boss = new Manager("Boss", 0);

    Department * hailua03 = new Department("HaiLua03");
    hailua03->addEmployee(lhp);
    hailua03->addEmployee(hpl);
    hailua03->addEmployee(plh);
    hailua03->addEmployee(boss);

    hailua03->printEmployeeDetails();

    delete hailua03;
    delete lhp;
    delete hpl;
    delete plh;
    delete boss;

    return 0;
}