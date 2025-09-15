#include <iostream>
 #include <iomanip>
 using namespace std;
 int main() {
 	int m,n;
 	cout<<"Enter n: ";
 	cin>>n;
 	cout<<"Enter m:";
 	cin>>m;
 	
	 for(int i=0;i<=m;i++){
	 //5 times
 		cout<<setw(n)<<setfill('X')<<""<<endl;
 		}
 
 
 return 0;
 }

