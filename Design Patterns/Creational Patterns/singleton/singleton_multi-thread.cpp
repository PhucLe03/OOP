#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

#define MAX_THREADS 10
#define MAX_LOOPS 100000000

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

mutex instance_mtx;
Singleton * Singleton::getInstance() {
    instance_mtx.lock();
    if (!instance) {
        instance = new Singleton;
        cout << "Create new instance\n";
    }
    else cout << "Instance has been created already\n";
    instance_mtx.unlock();
    return instance;
}

//Initialize pointer to zero so that it can be initialized in first call to getInstance
Singleton *Singleton::instance = 0;

mutex worker_mtx;
void worker(int times) {
    worker_mtx.lock();
    // cout << "Worker() " << times << endl;
    Singleton * s = s->getInstance();
    for (int i=0 ; i<times; i++) s->setData(s->getData()+1);
    cout << "Worker() added " << times << ", singleton's data became " << s->getData() << endl;
    worker_mtx.unlock();
}

int main() {
    thread * t[MAX_THREADS];
    for (int i=0; i<MAX_THREADS; i++) t[i] = new thread(worker, MAX_LOOPS);
    for (int i=0; i<MAX_THREADS; i++) t[i]->join();

    Singleton * s = s->getInstance();
    cout << "Final singleton's data: " << s->getData() << endl;
    for (int i=0; i<MAX_THREADS; i++) delete t[i];
    return 0;
}