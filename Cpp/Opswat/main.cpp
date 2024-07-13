#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void draw() {
        cout << "Drawing shape..." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    // Override draw function
    void draw() override {
        cout << "Drawing circle..." << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    // Override draw function
    void draw() override {
        cout << "Drawing rectangle..." << endl;
    }
};

// Function that demonstrates polymorphic behavior
void drawShape(Shape* shape) {
    shape->draw(); // Calls the appropriate draw() based on object type
}

int main() {
    Circle circle;
    Rectangle rectangle;

    drawShape(&circle);    // Outputs: Drawing circle...
    drawShape(&rectangle); // Outputs: Drawing rectangle...

    return 0;
}