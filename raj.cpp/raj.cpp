#include <iostream>
#include <math.h>
using namespace std;

class couboid
{
    // declaring private  data member double data type//
private:
    double lenght;
    double width;
    double hieght;
    // creating Public methods//
public:
    // creating Lenght setter//
    void Lenght(int data)
    {
        lenght = data;
    }
    // setter for widht//
    void Width(int data)
    {
        width = data;
    }
    // setter for hieght//
    void Hieght(int data)
    {
        hieght = data;
    }
    // Voulume method//
    double volume()
    {
        return lenght * hieght * width;
    }
    // Total Surface_area data method//
    double Surface_area()
    {
        return 2 * (lenght * width + lenght * hieght + width * hieght);
    }
    // creating Diagonal Method//
    double Diagonal()
    {
        return sqrt(pow(lenght, 2) + pow(width, 2) + pow(hieght, 2));
    }
};

// main function//
int main()
{
    // creating variable l,w,h for input from user//
    int l, w, h;
    cout << "Enter lenght, breadth,Hieght" << endl;
    cin >> l >> w >> h;
    couboid c;   // creating c object of class Cuboid//
    c.Lenght(l); // using seeter for lenght//
    c.Hieght(h); // using setter for height//
    c.Width(w);  // using setter for width//
    cout << "Volume of Cuboid : " << c.volume() << endl;
    cout << "Diagonal of Cuboid : " << c.Diagonal() << endl;
    cout << "Total Surface of Cuboid : " << c.Surface_area() << endl;
}