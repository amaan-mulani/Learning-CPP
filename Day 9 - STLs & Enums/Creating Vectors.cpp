#include <iostream>
#include <vector>
int main() {

vector<int> vec1;        		// Create an empty vector of integers

vector<int> vec2(5);			// Create a vector with 5 elements, all initialized to 0

vector<int> vec3(5, 10);    	// Create a vector with 5 elements, all initialized to 10

vector<int> vec4 = {1, 2, 3, 4, 5};   // Create a vector with initial values
return 0;
}