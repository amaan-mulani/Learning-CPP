#include <iostream>
using namespace std;

class Calculator 
{
public:
    void add(int a, int b) 
	{
        cout <<"\nSum of " << a << " and " << b << " is: " << a + b;
    }

    void add(double a, double b) 
	{
        cout <<"\nSum of " << a << " and " << b << " is: " << a + b;
    }

    void add(int a, int b, double c) 
	{
        cout <<"\nSum of " << a << ", " << b << ", and " << c << " is: " << a + b + c;
    }
};

int main() 
{
    Calculator c;

    c.add(5, 10);                 
    c.add(5.5, 10.5);             
    c.add(5, 10, 15.5);           

    return 0;
}

