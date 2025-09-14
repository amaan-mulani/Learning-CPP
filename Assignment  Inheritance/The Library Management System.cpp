#include <iostream>
using namespace std;

class LibraryBook {
private:
    string title;
    string author;
    int isbn;

public:
     LibraryBook(string title, string author) 
	{
       this->title=title;
       this->author=author;
       cout<<"\nBook '"<<title<<"' by '"<<author<<"' created.";
    }
	
     LibraryBook(string title, string author, int isbn) 
	{
    	this->title=title;
      	this->author=author;
       	this->isbn=isbn;
       	cout<<"\nBook '"<<title<<"' by '"<<author<<"' with ISBN '"<<isbn<<"' created.";
    }
    
   ~LibraryBook()
   {
   	cout<<"\nBook '"<<title<<"' is being destroyed.";
   }   
};

int main() 
{
LibraryBook book1("The Hobbit","J.R.R");
LibraryBook book2("C++ Primer","Stanley", 8323);
}
