#include <iostream>
#include <string>
using namespace std;

class Character
{
public:
    Character(string name, int year)
    {
        this->name = name;
        this->year = year;
    }
    string toString()
    {
        return (name + ", " + to_string(year));
    }

private:
    string name;
    int year;
};
#include <list>

template <typename Container>
class Iterator
{
public:
    Iterator(Container *_containerData)
    {
        containerData = _containerData;
        iter = containerData->charList.begin();
    }
    bool hasNext()
    {
        return (iter != containerData->charList.end());
    }
    list<Character>::iterator next()
    {
        return iter++;
    }

private:
    Container *containerData;
    list<Character>::iterator iter;
};

class Chronicle
{
public:
    void addCharacter(Character a)
    {
        charList.push_back(a);
    }
    Iterator<Chronicle> *createIterator()
    {
        return new Iterator<Chronicle>(this);
    }
    friend class Iterator<Chronicle>;

private:
    list<Character> charList;
};

int main()
{
    Chronicle chronicle;

    chronicle.addCharacter(Character("LeHoangPhuc", 2003));
    chronicle.addCharacter(Character("PhucHoangLe", 2003));
    chronicle.addCharacter(Character("HoangPhucLe", 2003));
    chronicle.addCharacter(Character("PhucLeHoang", 2003));

    Iterator<Chronicle> *it = chronicle.createIterator();

    while (it->hasNext())
    {
        cout << it->next()->toString() << endl;
    }
    return 0;
}
