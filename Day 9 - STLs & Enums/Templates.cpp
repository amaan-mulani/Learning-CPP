#include<iostream>

using namespace std;

template <typename T>
	T add(T x, T y)
	{
		return x+y;
	}
	
	
int main()
{
	cout<< add<int>(3,7)<<endl;
	cout<< add<float>(4.5,7)<<endl;
	cout<< add<double>(3,71232132)<<endl;
	cout<< add<string>("Amaan", "Mulani");
}