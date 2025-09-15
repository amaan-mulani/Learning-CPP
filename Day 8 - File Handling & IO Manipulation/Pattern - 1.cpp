#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	cout <<"X"	<<endl;
	for(int i=1;i<=4;i++){
		cout <<"X"<< setw(i)<< "X"<<endl;
	}
	cout << setw(6)<<setfill('X')<<""<<setfill(' ');
}

