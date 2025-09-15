#include<iostream>
using namespace std;
int main(){
	int size;
	int n,count=0;
	cout<<"enter size of array:";
	cin>>size;
	int a[size];
	for (int i=0;i<size;i++){
		cout<<"Enter element:";
		cin>>a[i];
	}
	cout<<"Enter a number to search:";
	cin>>n;
	for(int i=0;i<size;i++){
		if(a[i]==n){
			count++;
		}
	}
	cout<<"number "<<n<<" has occured "<<count<<" times in array";
	
}

