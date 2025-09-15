 #include<iostream>

using namespace std;

class Book{
	private:
		string title, author;
		int book_id;
		int static book_id_generator;
		
	public:
	
	void new_book(string t, string a)
	{
		title=t;
		author=a;
		book_id=++book_id_generator;
		
		//Displaying the given information.	
		cout<<"\nTitle: "<<title;
		cout<<"\nAuthor: "<<author;
		cout<<"\nBook ID: "<<book_id;
	}	
	
	void display_books()
	{
		cout<<"Book ID: "<<book_id;
		cout<<"Title: "<<title;
		cout<<"Author: "<<author;
	
	}
	
	void search_books(int book_id)
	{
		cout<<"\nBook ID: "<<book_id;
		cout<<"\nTitle: "<<title;
		cout<<"\nAuthor: "<<author;
	}
	
	int getbook()
	{
		return book_id;
	}
};
int Book::book_id_generator=100;

int main(){
	int books=0, book_no, book_id;
	Book b[100];
	string t,a;
	bool flag;
	int choice;
	do
	{
		cout<<"\n--------------";
		cout<<"\n   Library    ";	
		cout<<"\n--------------";
		cout<<"\n1. Add Book";
		cout<<"\n2. Display All Books";
		cout<<"\n3. Search for a Book";
		cout<<"\n4. Exit";
		cout<<"\n--------------";
		cout<<"\nWhat do you want to do: ";
		cin>>choice;
		cin.ignore();
		switch(choice)
		{
			case 1: 
					cout<<"\nEnter Title: ";
					getline(cin,t);
					cout<<"\nEnter Author: ";
					cin>>a;
					b[books].new_book(t, a);
					books++;
					break;
					
			case 2:
					for(int i=0;i<books;i++)
					{
						b[i].display_books();	
					}
					break;
				
			case 3:
					cout <<"\nEnter Book ID ";
					cin >> book_id;
					flag=false;
					for(int i=0;i<books;i++){
						if(book_id==b[i].getbook())
						{
							b[i].display_books();
							flag=true;
							break;
						}
					}
					if(flag==false)
					{
						cout <<"\nBook not found..";
					}
				break;
			case 4:
				cout << "Exiting...";
				break;
				
			default:
				cout <<"\n Invalid choice";
				break;	
		
		}
		
	} while(choice!=4);
	

}
