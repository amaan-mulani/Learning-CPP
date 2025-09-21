#include<iostream>
using namespace std;
class Animal{
	public:
		virtual void makeSound()=0;
		
};
class Dog : public Animal
{
	void makeSound() override {
		cout<<"Bow, Bow !";
	}

};
class Cat: public Animal
{
	void makeSound() override{
		cout<<"\nMeow, Meow !";
	}
};
int main()
{
	Animal* animalptr;
	
	Dog d;
	Cat c;
	
	animalptr=&d;
	animalptr->makeSound();
	animalptr=&c;
	animalptr->makeSound();
	
	
	
}