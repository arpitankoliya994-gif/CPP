#include <iostream>
using namespace std;


class Shape
 {
public:
    virtual void area() = 0;
    virtual void draw() = 0;

    virtual ~Shape() {}
};


class Circle : public Shape 
{
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area()  
	{
        cout << "Circle Area = " << 3.14 * radius * radius << endl;
    }

    void draw() 
	 {
        cout << "Drawing Circle" << endl;
    }
};


class Rectangle : public Shape 
{
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void area()  {
        cout << "Rectangle Area = " << length * width << endl;
    }

    void draw()  {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    int choice;

    cout << "Enter 1 for Circle" << endl;
    cout << "Enter 2 for Rectangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    Shape* shape = nullptr;

    if (choice == 1) {
        float radius;

        cout << "Enter radius: ";
        cin >> radius;

        shape = new Circle(radius);
    }
    else if (choice == 2) {
        float length, width;

        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;

        shape = new Rectangle(length, width);
    }
    else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    
    shape->area();
    shape->draw();


    delete shape;

    return 0;
}