//Create a menu-driven code
//1.create/write to file---ask username---ask secrate key
//                 take line till QUIT--encrypt and store to file
//2.read from file---ask username---ask secrate key
//                 read line decrypt and print on scree
#include <iostream>
#include <fstream>

using namespace std;
string Secure(string line,int key)
{
    string processed_data="";
    //cout<<"\ndata to secure:"<<line;
	for(char c: line)
    {
    	int d=c;
    	processed_data+=char(d^key);
	}
	//cout<<"\nprocessed data:"<<processed_data;
	return processed_data;	
}


int main() {
    string user_name,line,data;
    int key,choice;
    do
    {
    	cout<<"\n1.Read file with secrate key";
    	cout<<"\n2.Write to file with secrate key";
    	cout<<"\n0.Exit";
    	cin>>choice;
    	if(choice==1)
    	{
    		cout<<"\nEnter username:";
    		cin>>user_name;
    		ifstream myFile(user_name+".txt");
    		if (!myFile.is_open()) 
			{
        		cout << "Error: Could not open or create file " << user_name << ".txt" << endl;
        		return 1; // Indicate an error
    		}
    		else
    		{
    			cout<<"Enter secrate key:";
    			cin>>key;
    			while(getline(myFile,data))
 					{
					 
					 cout<<Secure(data,key)<<endl;
			         }
			     myFile.close();
			    }
    	   
	}
    	else if(choice==2)
    	{
    		cout<<"\nEnter username:";
    		cin>>user_name;
    		ofstream myFile(user_name+".txt",ios::app);
    		if (!myFile.is_open()) 
			{
        		cerr << "Error: Could not open or create file " << user_name << ".txt" << endl;
        		return 1; // Indicate an error
    		}
    		else
    		{
    			
    			cout<<"Enter secrate key:";
    			cin>>key;
    			cout<<"\nFile opened ready to write:";
    			string data;
    			while (true) \
				{
        		//	cout << "Enter data to write: ";
       				 getline(cin, data);
	
      			  if (data == "QUIT") {
           			 cout << "Stopping. Data saved to " << user_name << ".txt" << endl;
            	 break;
            	 cout<<"\n>";
       	        }
       			 myFile << Secure(data,key) << endl;
       		    }   
       		    myFile.close();
           }
    	}
		else if(choice==0)
			cout<<"\nOk bye...";
		else
			cout<<"\nwrong option selected";
			
	}while(choice!=0);
   
    return 0; // Indicate successful execution*/
}

