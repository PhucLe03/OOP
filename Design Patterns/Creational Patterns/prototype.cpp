#include <iostream>

using namespace std;

class Character {
protected:
    string name;
    string title;

public:
    virtual void sayHello() = 0;
    virtual Character* clone() = 0;
    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
    void setTitle(string t) {
        title = t;
    }
    string getTitle() {
        return title;
    }
};

class TaoNguy : public Character {
public:
    TaoNguy(string n = "Unknown", string m = "Unknown") {
        name = n; title = m;
    }
    void sayHello() {
        cout << "Ta la " << name << ", " << title << " cua Nguy quoc, ta se san bang Thuc Han va Dong Ngo!" << endl;
    }
    Character* clone() {
        return new TaoNguy(*this);
    }
};

class ThucHan : public Character {
public:
    ThucHan(string n = "Unknown", string m = "Unknown") {
        name = n; title = m;
    }
    void sayHello() {
        cout << "Ta la " << name << ", " << title << " cua nuoc Thuc, ta tuan menh Thuc Vuong thao phat nghich tac, trung hung Dai Han!" << endl;
    }
    Character* clone() {
        return new ThucHan(*this);
    }
};
class DongNgo : public Character {
public:
    DongNgo(string n = "Unknown", string m = "Unknown") {
        name = n; title = m;
    }
    void sayHello() {
        cout << "Ta la " << name << ", " << title << " cua Dong Ngo, ta the chet bao ve lanh tho nuoc Ngo!" << endl;
    }
    Character* clone() {
        return new DongNgo(*this);
    }
};

int main() {
    TaoNguy* nguy = new TaoNguy();
    ThucHan* thuc = new ThucHan();
    DongNgo* ngo = new DongNgo();

    Character* TaoPhi = nguy->clone();
    TaoPhi->setName("Tao Phi");
    TaoPhi->setTitle("Vuong");

    Character* GiaCatLuong = thuc->clone();
    GiaCatLuong->setName("Gia Cat Luong");
    GiaCatLuong->setTitle("Thua Tuong");

    Character* TonQuyen = ngo->clone();
    TonQuyen->setName("Ton Quyen");
    TonQuyen->setTitle("Vuong");

    Character* TuMaY = nguy->clone();
    TuMaY->setName("Tu Ma Y");
    TuMaY->setTitle("Dai Do Doc");

    TaoPhi->sayHello();
    GiaCatLuong->sayHello();
    TonQuyen->sayHello();
    TuMaY->sayHello();

    delete thuc;
    delete GiaCatLuong;

    delete ngo;
    delete TonQuyen;

    delete nguy;
    delete TaoPhi;
    delete TuMaY;

    return 0;
}