#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: " ;
    cin >> age;
    cout << "Your age is " 
    <<age
    << "\n";
    
    if (age > 10)
        cout << "Less";
    
    else
        cout << "More";
    
    return 0;
}
