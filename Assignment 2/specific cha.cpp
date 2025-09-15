#include<iostream>
using namespace std;
int main(){
	string line;
	int count=1;
	char ch;
	cout<<"Enter a line:";
	getline(cin,line);
	cout<<"Enter a char to remove:";
	cin>>ch;
	for (int i=0;line[i]!='\0';i++){
		if(line[i]==ch){
			for (int j=i;j<=line.length();j++){
				line[j]=line[j+1];
			}
		}
	}
	cout<<line;
}


