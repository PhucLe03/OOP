#include <iostream>

using namespace std;

class Singleton {
    static Singleton *instance;
    int data;

    // Private constructor
    Singleton() {
        data = 0;
    }

public:
    static Singleton *getInstance();

    int getData() {
        return this->data;
    }

    void setData(int data) {
        this->data = data;
    }
};

Singleton * Singleton::getInstance() {
    if (!instance) {
        instance = new Singleton;
        cout << "Create new instance\n";
    }
    else cout << "Instance has been created already\n";
    return instance;
}

//Initialize pointer to zero so that it can be initialized in first call to getInstance
Singleton *Singleton::instance = 0;

int main() {
    Singleton *s = s->getInstance();
    cout << s->getData() << endl;
    s->setData(100);
    cout << s->getData() << endl;
    Singleton *s1 = s1->getInstance();
    cout << s1->getData() << endl;
    return 0;
}