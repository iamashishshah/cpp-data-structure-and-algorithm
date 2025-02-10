// Implement two classes:: Circle and Rectangle. The Circle class will have a private member radius, and the Rectangle class will have a private member length and width. Write two friend functions, one to calculate the area of a Circle and another to calculate the area of a Rectangle. Use the friend keyword appropriately for these functions.

#include <iostream>

using namespace std;

class Circle
{
private:
    int radius;

public:
    Circle(int rad) : radius(rad)
    {
        cout << "Circle constructor called." << endl;
    }

    friend void calculateCircleArea(Circle &);
};
class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle(int len, int wid) : width(wid), length(len)
    {
        cout << "Rectangle constructor called." << endl;
    }
    friend void calculateRectangleArea(Rectangle &);
};

void calculateCircleArea(Circle &cir)
{
    cout << "Area of circle is: " << cir.radius * 3.14 << endl;
}

void calculateRectangleArea(Rectangle &rec)
{
    cout << "Area of rectangle is: " << rec.length * rec.width << endl;
}

int main()
{
    Circle circle(4);
    Rectangle rec(4, 5);
    calculateCircleArea(circle);
    calculateRectangleArea(rec);
    cout << endl;
    return 0;
}