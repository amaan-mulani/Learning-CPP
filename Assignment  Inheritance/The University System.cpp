#include <iostream>
#include <string>
using namespace std;


class Person 
{
protected:
    string name;
    int age;

public:
    Person(string name, int age) 
	{
        this->name = name;  
        this->age = age;
    }

    void display_info() 
	{
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
    }
};

class Student : public Person 
{
protected:
    string student_id;

public:
    Student(string name, int age, string student_id): Person(name, age) 
		{
        this->student_id = student_id;
    }

    void display_info() 
	{
        Person::display_info();  
        cout << "Student ID: " << this->student_id << endl;
    }
};

class GraduateStudent : public Student {
private:
    string thesis_title;

public:
    GraduateStudent(string name, int age, string student_id, string thesis_title): Student(name, age, student_id) {
        this->thesis_title = thesis_title;
    }

    void display_info() 
	{
        Student::display_info();
        cout << "Thesis Title: " << this->thesis_title << endl;
    }
};

int main() 
{
    GraduateStudent grad("Amaan Mulani", 24, "G007", "Bachelors in Engineering.");
	grad.display_info();
}

