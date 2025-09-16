
#include <iostream>
#include <list>
#include <vector>
#include <string>


using namespace std;

void printList(const list<int>& numbers) {
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
}

int FindMin_i(list<int> numbers, int i) 
{
    numbers.sort();

    if (i < 1 || i > numbers.size()) {
        cerr << "Error: Invalid value for i. i must be between 1 and " << numbers.size() << endl;
        return -1;
    }

    //auto it = numbers.begin();
    //advance(it, i - 1);
    //copy to vector
    vector<int> v;
    for(int i: numbers)
    	v.push_back(i);
    	
    return v[i-1];
}

int main() {
    list<int> numbers = {11, 2, 66, 5, 44, 98, 12, 45, 89, 11};

    cout << "Original List:" << endl;
    printList(numbers);

    int i;
    cout << "\nEnter the value for 'i' (1-" << numbers.size() << "): ";
    cin >> i;

    int result = FindMin_i(numbers, i);
    
    if (result != -1) {
        cout << "The " << i << "-th minimum element is: " << result << endl;
    }

    return 0;
}
