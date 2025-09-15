#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<setw(7)<<setfill('X')<<""<<setfill(' ');
	for(int i=1; i<=5; i++)
		cout<<endl<<"X"<<setw(6)<<"X";
	cout<<endl<<setw(7)<<setfill('X')<<""<<setfill(' ');
	return 0;
}
