
#include <iostream>


using namespace std;

enum CoffeeSize {
    Regular = 1,
    Tall = 2,
    Tower = 3
};

int main() {
    
    int coffeeBasePrice,milkBasePrice ;
    cout<<"\nEnter base cost of Coffee and Milk\n";
    cin>>coffeeBasePrice>>milkBasePrice;

    int totalBaseCost = coffeeBasePrice + milkBasePrice;

    int regularPrice = totalBaseCost * Regular;
    int tallPrice = totalBaseCost * Tall;
    int towerPrice = totalBaseCost * Tower;


    cout << "Prices of Coffee:" << endl;
    cout << "-----------------" << endl;
    cout << "Regular: " << regularPrice << " (Base Cost: " << totalBaseCost << " * Multiplier: " << Regular << ")" << endl;
    cout << "Tall: " << tallPrice << " (Base Cost: " << totalBaseCost << " * Multiplier: " << Tall << ")" << endl;
    cout << "Tower: " << towerPrice << " (Base Cost: " << totalBaseCost << " * Multiplier: " << Tower << ")" << endl;

    return 0;
}

