#include <iostream>
using namespace std;

int main(){
    double weight = 0;
    
    cout << "Enter the weight of the package in ounces: ";
    cin >> weight;
    
    cout <<"The weight in metric tonnes is " << weight / 35273.92 <<"\n";
    cout << "The number of boxes are " << 35273.92 / weight ;
    
    return 0;
}
