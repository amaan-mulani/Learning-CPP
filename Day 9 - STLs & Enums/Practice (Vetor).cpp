#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> numbers={0};
	
	cout<<"enter numbers";
	int number;
	for(int i =0; i<5;i++)
	{
		cin>>number;
		numbers.emplace_back(number);
	}
	for (int i: numbers)
	{
		cout<<numbers[i];
	}
}