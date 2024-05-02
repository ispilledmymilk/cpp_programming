#include <iostream>
using namespace std;

int main(){
    double c = 0;
    
    cout << "Enter the celcius value: ";
    cin >> c;
    double f;
    f = (9.0 / 5) * c + 32.0;
    
    cout << "The celsius value is " << c << "\n";
    cout << "The farhenheit value is " << f << "\n";
}
