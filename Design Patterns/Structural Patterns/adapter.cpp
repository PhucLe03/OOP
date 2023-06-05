#include <iostream>
#include <string>

using namespace std;

class GlobalSocketInterface
{
public:
    virtual int voltage() = 0;
};

class VNSocketInterface : public GlobalSocketInterface
{
public:
    int voltage() {return 220;}

    virtual int daynong() {return 1;}
    virtual int daynguoi() {return -1;}
};

class USSocketInterface : public GlobalSocketInterface
{
public:
    int voltage() {return 120;}

    virtual int daynong() {return 1;}
    virtual int daynguoi() {return -1;}
    virtual int daythuba() {return 0;}
};


class Adapter : public USSocketInterface
{
public:
    void plugin(VNSocketInterface * outlet) {this->socket = outlet;}
    int voltage() {return 110;}
    int daynong() {return socket->daynong();}
    int daynguoi() {return socket->daynguoi();}
    int daythuba() {return 0;}
private:
    VNSocketInterface * socket;
};

class USLaptop
{
public:
    void plugin(USSocketInterface * powersupply) {this->powersource = powersupply;}    
    void run() {
        if (powersource->voltage()>120) {
            cout << "Boom!\n"; return;
        }
        else if (powersource->daynong()==1 && powersource->daynguoi()==-1 && powersource->daythuba()==0)
        {
            cout << "Chay tot, khong van de gi!\n"; return;
        }
    }
private:
    USSocketInterface * powersource;
};


int main()
{
    VNSocketInterface* dienVN = new VNSocketInterface;
    USSocketInterface* dienUS = new USSocketInterface;
    USLaptop* laptop = new USLaptop;

    cout << "----Ket noi laptop voi nguon dien cua US----\n";
    laptop->plugin(dienUS);
    laptop->run();
    cout << "----Ket noi laptop voi nguon dien cua VN su dung Adapter----\n";
    Adapter* adapter = new Adapter;
    adapter->plugin(dienVN);
    laptop->plugin(adapter);
    laptop->run();

    delete dienVN;
    delete adapter;
    delete dienUS;
    delete laptop;

    return 0;
}
