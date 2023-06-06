#include <iostream>
#include <vector>
using namespace std;

class SortStrategy {
public:
    virtual void sort(vector<int> list) = 0;
};

class QuickSort : public SortStrategy {
public:
    void sort(vector<int> list) {
        cout << "Quick sort\n";
        // Quick sort algorithm....
    }
};

class HeapSort : public SortStrategy {
public:
    void sort(vector<int> list) {
        cout << "Heap sort\n";
        // Heap sort algorithm....
    }
};

class SelectionSort : public SortStrategy {
public:
    void sort(vector<int> list) {
        cout << "Selection sort\n";
        // Selection sort algorithm....
    }
};

class MergeSort : public SortStrategy {
public:
    void sort(vector<int> list) {
        cout << "Merge sort\n";
        // Merge sort algorithm....
    }
};

class SortList {
public:
    void setStrategy(SortStrategy * s) {
        this->strategy = s;
    }
    void addElement(int element) {
        this->items.push_back(element);
    }
    void sort() {
        this->strategy->sort(items);
    }
private:
    vector<int> items;
    SortStrategy * strategy;
};

int main() {
    SortList danhsach, danhsach1;
    danhsach.addElement(1);
    danhsach.addElement(2);
    danhsach.addElement(3);
    danhsach.setStrategy(new QuickSort());

    danhsach1.addElement(215);
    danhsach1.addElement(22);
    danhsach1.addElement(39);
    danhsach1.setStrategy(new MergeSort());

    danhsach.sort();
    danhsach1.sort();
    return 0;
}