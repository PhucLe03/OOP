#include <iostream>

using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

class Rectangle : public Shape {
public:
    void draw() {cout << "Rectangle::Draw()\n";}
};

class Circle : public Shape {
public:
    void draw() {cout << "Circle::Draw()\n";}
};

class Triangle : public Shape {
public:
    void draw() {cout << "Triangle::Draw()\n";}
};

class ShapeMaker {
public:
    ShapeMaker() {
        rectangle = new Rectangle;
        circle = new Circle;
        triangle = new Triangle;
    }
    void drawRectangle() {rectangle->draw();}
    void drawCircle() {circle->draw();}
    void drawTriangle() {triangle->draw();}
    ~ShapeMaker() {
        delete rectangle;
        delete circle;
        delete triangle;
    }
private:
    Shape * rectangle;
    Shape * circle;
    Shape * triangle;
};

int main() {
    ShapeMaker * shapeMaker = new ShapeMaker;
    shapeMaker->drawRectangle();
    shapeMaker->drawCircle();
    shapeMaker->drawTriangle();

    delete shapeMaker;
    return 0;
}

