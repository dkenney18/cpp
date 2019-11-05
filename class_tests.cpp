/*

    Devin Kenney
    Convert number grades to letter grade
    09-24-19

*/

#include <iostream>
#include <string>

class Shape 
{
    public:
    int area();
};

class Rectangle : Shape 
{
    public:
    int width;
    int length;

    void setSides(int w, int l) 
    {
        width = w;
        length = l;
     }

    int area() 
    {

        return width * length;
    }
};

class Square : Shape 
{
    public:
    int side;

    void setSide(int s) 
    {
        side = s;
    }
    int area() 
    {
        return side * 4;
    }
};

using namespace std;

int main() 
{
    Rectangle rect;
    Square sqr;

    rect.setSides(10, 15);

    cout << "Area: " << rect.area() << endl;

    sqr.setSide(15);

    cout << "Area: " << rect.area() << endl;

    return 0;
}
