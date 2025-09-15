#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string data,encrypted_data="",decrypted_data="";
    int key;//3digit
    cout << "message ";
    getline(cin, data);
    cout<<"Enter secrate key:";
    cin>>key;
    for(int i=0;data[i]!='\0';i++)
    {	char c;
    	int d=c;
    	//cout<<"\n"<<c<<" int presentation: "<<d<<"  with X-OR: "<<char(d^key);
    	encrypted_data+=char(d^key);
	}
	cout<<"\nEncrypted text:"<<encrypted_data;
	cout<<"\nEnter secrate key:";
    cin>>key;
	for(int i=0;data[i]!='\0';i++)
    {
    	char c;
    	int d=c;
    	//cout<<"\n"<<c<<" int presentation: "<<d<<"  with X-OR: "<<char(d^key);
    	decrypted_data+=char(d^key);
	}
	cout<<"\nDecrypted text:"<<decrypted_data;
}
