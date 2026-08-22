#include <iostream>
using namespace std;

// Base class
class Shape {
private:
    string color;
    double area;

public:
    // Setter for color
    void setColor(string c) {
        color = c;
    }

    // Getter for color
    string getColor() {
        return color;
    }

    // Setter for area
    void setArea(double a) {
        area = a;
    }

    // Getter for area
    double getArea() {
        return area;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    // Calculate circle area
    void calculateArea() {
        double a = 3.14159 * radius * radius;
        setArea(a);
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Calculate rectangle area
    void calculateArea() {
        double a = length * width;
        setArea(a);
    }
};

int main() {
    Circle c(5);
    Rectangle r(10, 4);

    c.setColor("Red");
    r.setColor("Blue");

    // Calculate areas
    c.calculateArea();
    r.calculateArea();

    cout << "Circle:" << endl;
    cout << "Color: " << c.getColor() << endl;
    cout << "Area: " << c.getArea() << endl;

    cout << "\nRectangle:" << endl;
    cout << "Color: " << r.getColor() << endl;
    cout << "Area: " << r.getArea() << endl;

    return 0;
}