#include <iostream>

using namespace std;

class DoUong
{
public:
    virtual string getDesc() = 0;
    virtual float getCost() = 0;
};

class TraSua : public DoUong
{
public:
    string getDesc()  {return "Tra sua";}
    float getCost() {return 15.0;}
};

class Topping : public DoUong
{
public:
    Topping(DoUong * doUong) : nuoc(doUong) {}
    string getDesc() {return nuoc->getDesc();}
    float getCost() {return nuoc->getCost();}
private:
    DoUong * nuoc;
};

class TranChau : public Topping
{
public:
    TranChau(DoUong * doUong) : Topping(doUong) {}
    string getDesc() {
        return Topping::getDesc() + ", tran chau";
    }
    float getCost() {
        return Topping::getCost() + 3.0;
    }
};

class Thach : public Topping
{
public:
    Thach(DoUong * doUong) : Topping(doUong) {}
    string getDesc() {
        return Topping::getDesc() + ", thach";
    }
    float getCost() {
        return Topping::getCost() + 5.0;
    }
};

class Pudding : public Topping
{
public:
    Pudding(DoUong * doUong) : Topping(doUong) {}
    string getDesc() {
        return Topping::getDesc() + ", pudding";
    }
    float getCost() {
        return Topping::getCost() + 4.0;
    }
};

void xuathoadon(DoUong * nuoc) {
    cout << nuoc->getDesc() << " | Tong cong: " << nuoc->getCost() << endl;
}

int main()
{
    cout << "Order 1\n";
    DoUong * tatua = new TraSua();
    xuathoadon(tatua);

    cout << "Order 2\n";
    DoUong * tatua1 = new TraSua();
    tatua1 = new TranChau(tatua1);
    xuathoadon(tatua1);

    cout << "Order 3\n";
    DoUong * tatua2 = new TraSua();
    tatua2 = new TranChau(tatua2);
    tatua2 = new Thach(tatua2);
    xuathoadon(tatua2);

    cout << "Order 4\n";
    DoUong * tatua3 = new TraSua();
    tatua3 = new TranChau(tatua3);
    tatua3 = new Thach(tatua3);
    tatua3 = new Pudding(tatua3);
    xuathoadon(tatua3);

    delete tatua;
    delete tatua1;
    delete tatua2;
    delete tatua3;
    return 0;
}