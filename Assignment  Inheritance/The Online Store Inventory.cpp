#include <iostream>
#include <string>
using namespace std;

class Product 
{
private:
    string name;
    int id;
    float price;

public:
    Product(string name, int id, float price) 
	{
        this->name=name;
      	this->id=id;
       	this->price=price;
    }

  
    Product() 
	{
        name = "";
        id = 0;
        price = 0.0;
    }

    void setDetails(string name, int id, float price) 
	{
        this->name=name;
      	this->id=id;
       	this->price=price;
    }

    void display_details(int index) 
	{
        cout <<"\nProduct " <<index + 1 << "  : " <<name<< " (ID: " << id << ", Price: RS " << price << ")";
    }
};

int main() 
{
    Product products[3];

    products[0].setDetails("Laptop", 101, 1200.50);
    products[1].setDetails("Mouse", 102, 25.00);
    products[2].setDetails("Keyboard", 103, 75.75);

    for (int i = 0; i < 3; i++) 
	{
        products[i].display_details(i);
    }

    return 0;
}

