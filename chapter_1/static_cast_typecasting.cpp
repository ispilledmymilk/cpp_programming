#include <iostream>
using namespace std;

int main(){
    int x = 11;
    
    cout << "Value of 11/3 before typecasting is " << x/3 <<"\n";
    cout << "Value of 11/3 after typecasting is " << static_cast<double>(x)/3;
    
    
    return 0;
    
}
