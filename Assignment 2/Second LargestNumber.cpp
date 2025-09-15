//Find Second Largest Element
#include <iostream>
using namespace std;
int main(){
	int a[50],size;

	cout << "\nEnter the size of the array :";
	cin >>size;
	
	for(int i=0;i<size;i++){
		cout<<"\nEnter element at a["<<i<<"] :";
  		cin>>a[i];
	}

	for(int i=0;i<size;i++){
		for(int j=0;j<size-1-i;j++)
		if(a[j]>a[j+1]){
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	cout << "[";
	for(int i=0;i<size;i++){
		cout << a[i] << "," ;
	}
	cout << "]";

	cout << "\nThe second largest element is "<<a[size-2]  ;

}

