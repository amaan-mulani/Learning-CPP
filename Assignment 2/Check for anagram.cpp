#include<iostream>
using namespace std;
int main(){
	string word1,word2;
	cout<<"Enter word 1:";
	cin>>word1;
	cout<<"Enter word 2:";
	cin>>word2;
	char temp;
	bool flag=true;
	if(word1.length()==word2.length()){
		for (int i=word1.length()-1;i>=0;i--){
			for (int j=0;j<i;j++){
				if(word1[j]>word1[j+1]){
					temp=word1[j];
					word1[j]=word1[j+1];
					word1[j+1]=temp;
				}
				if(word2[j]>word2[j+1]){
					temp=word2[j];
					word2[j]=word2[j+1];
					word2[j+1]=temp;
				}	
			}
		}
		
		for(int i=0;i<word1.length();i++){
			if(word1[i]!=word2[i]){
				flag =false;
				break;
			}
		}
	}
	else{
		flag=false;
	}
	
	cout<<"The word "<<(flag?"is":"is not")<<" a anagram";
	
}

