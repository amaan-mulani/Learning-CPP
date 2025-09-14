#include <iostream>
#include <string>
using namespace std;

class Employee 
{
protected:
    string name;
    string id;

public:
    Employee(string name, string id) 
	{
        this->name=name;
      	this->id=id;
    }

    void display_info() 
	{
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
    }
};

class Manager : public Employee 
{
private:
    int team_size;

public:
    Manager(string name, string id, int team_size) : Employee(name, id) 
	{
        this->team_size=team_size;
    }

    void display_info() {
        Employee::display_info();
        cout << "Team Size: " << team_size << endl;
    }
};

int main()
{
    Manager mgr("Amaan", "M007", 15);
	mgr.display_info();
}

