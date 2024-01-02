#include <iostream>

using namespace std;
void area(int hight, double base)
{
    cout << "Area of triangle is:  " << hight * base * 0.5;
}

void area(double radius)
{
    double pi = 3.14;
    cout << "Enter the radies of the Circle:\n ";
    cin >> radius;
    cout << "Area of circle is:  " << pi * radius * radius;
}

int main()
{
    int input;
    double h, b, r;

    cout << "which area do u want? type(1.triangle or 2.circle)\n";
    cin >> input;

    if (input == 1)
    {
        cout << "Enter the height of the triangle:\n ";
        cin >> h;

        cout << "Enter the base of the triangle:\n ";
        cin >> b;

        area(h, b);
    }

    else
    {
        area(r);
    }

    return 0;
}