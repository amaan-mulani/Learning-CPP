#include <iostream>
using namespace std;

int main() {
    int size1, size2, size3=size1+size2;

    cout << "Enter the size of first array: ";
    cin >> size1;
    int a[size1];

    cout << "Enter " << size1 << " elements for first array:\n";
    for (int i = 0; i < size1; i++) {
        cin >> a[i];
    }

    cout << "Enter the size of second array: ";
    cin >> size2;
    int b[size2];

    cout << "Enter " << size2 << " elements for second array:\n";
    for (int i = 0; i < size2; i++) {
        cin >> b[i];
    }

    int c[size3];

    for (int i = 0; i < size1; i++) {
        c[i] = a[i];
    }

    for (int j = 0; j < size2; j++) {
        c[size1 + j] = b[j];
    }

    cout << "Merged array: ";
    for (int k = 0; k < size1 + size2; k++) {
        cout << c[k];
        cout << ", ";
    }
    cout << endl;

    return 0;
}

