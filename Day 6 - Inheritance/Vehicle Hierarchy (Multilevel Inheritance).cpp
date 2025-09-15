#include#include<iostream>
using namespace std;
class Vehicle
{
	private:
		string make, model;
	public:
		void set_cars(string make,string model)
		{
			this->make=make;
			this->model=model;
			cout<<"\nModel of Car: Make of Car: ";
		}
		void display_cars()
		{
		 cout<<"\nVehicle Make: "<<make<<"Vehicle Model: "<<model;
		}
};
class Car
{
	private:
		int no_of_doors;
	public:
		void set_doors(int no_of_doors)
		{
			this->no_of_doors;
			cout<<"\nNumber of doors: ";
		}
		void display_cars()
		{
		 cout<<"\nNumber of Doors: "<<model;
		}
};

int main() 
{
Education object;
object.set_human("amar","male");
object.set_education("Phd");
object.display_human();
object.display_education();
}


