//  Write a C++ program that has two classes, Rectangle and Area. The Rectangle class should have private members for length and width, and the Area class should be a friend of Rectangle to calculate the area of the rectangle.

#include<iostream>

using namespace std;

class Rectangle{
    private: 
        int length;
        int width;

    public:
        Rectangle(int len, int wid): length(len), width(wid){
            cout << "Constructor has called." << endl;
        }

        friend class Area;
};
class Area{
    public: 
        string calculateArea(Rectangle &rect){
            int area = rect.length * rect.width;
            cout << "Area of rectangle is: " << area << endl;

            return "Area has calculated of rectangle.";
        }
};


int main(){
    Rectangle rect(4, 5);
    Area area;
    area.calculateArea(rect);
    cout << endl;
    return 0;
}