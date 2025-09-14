#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;
    float score;

public:
    get_data(int id, string name, float score) 
	{
       this->id=id;
       this->name=name;
       this->score=score;
    }

    void display_details() 
	{
        cout << "\nStudent Details:";
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nScore: " << score;
    }
};

int main() 
{
Student s;
s.get_data(101,"Amaan",95.3);
s.display_details();

