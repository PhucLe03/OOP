#include <iostream>
#include <vector>

using namespace std;

class Inventory
{
public:
    vector<string> items;
    void addItem(string item)
    {
        items.push_back(item);
    }
    string getString()
    {
        string s = "";
        int count = 0;
        for (size_t i=0; i<items.size(); i++)
        {
            s += items[i] + ", ";
            count++;
        }
        if (count>0)
        {
            s.pop_back();
            s.pop_back();
        }
        return s;
    }
};

class Position
{
public:
    int x_pos;
    int y_pos;
    Position()
    {
        x_pos = 0; y_pos = 0;
    }
    Position(int x, int y)
    {
        x_pos = x; y_pos = y;
    }
};

class State
{
public:
    State()
    {
        level = 1;
        health = 100;
    }
    void printState()
    {
        cout << "Character's state:\n";
        cout << "Level: " << level << ", Health: " << health
        << ", Location: (" << pos.x_pos << ", " << pos.y_pos << ")\n"
        << "Inventory: {" << inventory.getString() << "}\n";
    }
    void getDamage(int damage)
    {
        health -= damage;
    }
    void addItem(string item)
    {
        inventory.addItem(item);
    }
    void moveToPos(Position newPos)
    {
        pos = newPos;
    }
private:
    int level;
    int health;
    Position pos;
    Inventory inventory;
};

class Memento
{
public:
    Memento(State _state) : state(_state) {}
    State getState()
    {
        return state;
    }
private:
    State state;
};

class GameCharacter
{
public:
    void printState()
    {
        state.printState();
    }
    void takeDamage(int damage)
    {
        state.getDamage(damage);
    }
    void addItem(string item)
    {
        state.addItem(item);
    }
    void moveToPos(Position newPos)
    {
        state.moveToPos(newPos);
    }
    Memento saveState()
    {
        return Memento(state);
    }
    void restore(Memento memento)
    {
        state = memento.getState();
    }
private:
    State state;
};

class CareTaker
{
public:
    CareTaker(GameCharacter * _character) : character(_character) {}
    void saveState()
    {
        cout << "Saving state...\n";
        Memento memento = character->saveState();
        history.push_back(memento);
    }
    void undo()
    {
        cout << "Undoing state...\n";
        Memento memento = history.back();
        history.pop_back();
        character->restore(memento);
    }
private:
    GameCharacter * character;
    vector<Memento> history;
};


int main()
{
    GameCharacter * gc = new GameCharacter;
    CareTaker * carer = new CareTaker(gc);

    gc->printState();
    
    gc->takeDamage(25);
    gc->addItem("Sword");
    gc->moveToPos(Position(3, 4));
    gc->printState();

    carer->saveState();
    
    gc->takeDamage(15);
    gc->addItem("Shield");
    gc->moveToPos(Position(9, 2));
    gc->printState();
    
    carer->undo();
    
    gc->printState();
    
    return 0;
}
