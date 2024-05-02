#include <iostream>
using namespace std;

int main(){
    const double rate = 4.9;
    double dep = 0;
    
    cout << "Enter the deposit: ";
    cin >> dep;
    
    double result = dep + dep*(rate);
    
    cout << "The result is " << result;
    
    return 0;
}
