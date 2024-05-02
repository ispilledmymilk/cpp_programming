#include <iostream>
using namespace std;

int main(){
    int x = 0, y = 0;;
    
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    
    cout << "X holds the value" << x << "\n";
    
    cout << "3x = " << 3 * x << "\n";
    
    cout << "3x + y = " << 3*x + y << "\n";
    
    cout << "(x + y)/7 = " << (x + y)/7 << "\n";
    
    cout << "(3x + y)/(x + 2) = " << (3*x + y)/(x + 2) << "\n";
}
