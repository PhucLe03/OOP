#include <iostream>
#include <string>

using namespace std;

class PaymentMethod
{
public:
    virtual void pay(int amount) = 0;
};

class Visa : public PaymentMethod
{
public:
    Visa(string cardNumber, string expDate, string cvv) {
        this->cardNumber = cardNumber;
        this->expDate = expDate;
        this->cvv = cvv;
    }
    void pay(int amount) {
        cout << "Paid an amount of " << amount << " with Visa card " << cardNumber << endl;
    }
private:
    string cardNumber;
    string expDate;
    string cvv;
};

class Momo : public PaymentMethod
{
public:
    Momo(string phoneNumber) {this->phoneNumber = phoneNumber;}
    void pay(int amount) {
        cout << "Paid an amount of " << amount << " with Momo account " << phoneNumber << endl;
    }
private:
    string phoneNumber;
};

class Product
{
public:
    void choosePaymentMethod(PaymentMethod * paymentMethod) {this->paymentMethod = paymentMethod;}
    void buy() {paymentMethod->pay(price);}
protected:
    PaymentMethod * paymentMethod;
    int price;
};

class Game : public Product
{
public:
    Game(int price) {this->price = price;}
};

int main()
{
    Visa * visa = new Visa("1234.5678.xxx","03/05","123");
    Momo * momo = new Momo("0944681103");

    Game * skyrim = new Game(1000);
    skyrim->choosePaymentMethod(visa);
    skyrim->buy();

    Game * callofduty = new Game(2000);
    callofduty->choosePaymentMethod(momo);
    callofduty->buy();

    delete visa;
    delete momo;
    delete skyrim;
    delete callofduty;

    return 0;
}