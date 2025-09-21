#include<iostream>
using namespace std;
class Car{
	private:
	string make, model;
	int year;
	
	public:

	Car(string make, string model, int year)
	{
		this->make=make;
		this->model=model;
		this->year=year;
		
		cout<<"Make: "<<make<<endl;
		cout<<"Model: "<<model<<endl;
		cout<<"Year: "<<year<<endl;
	}
	
	~Car()
	{
		cout<<"Object Destroyed !";
	}
};
int main()
{
	Car c1("Toyota","Camry",2023);

}