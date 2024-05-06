#include <iostream>
using namespace std;

int main(){
    double amt_sweet = 0;
    double wt_mouse = 0, wt_dieter = 0;
    
    cout << "Enter the amount of sweetener needed to kill a mouse in grams: ";
    cin >> amt_sweet; 
    
    cout << "Enter the weight of the mouse in grams: ";
    cin >> wt_mouse; 
    
    cout << "Enter the desired weight of the dieter in grams: ";
    cin >> wt_dieter; 
    
    double prod1 = (amt_sweet * wt_dieter)/wt_mouse;
    
    cout << prod1 << " is the amount of sweetener to kill.";
}
