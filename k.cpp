#include <iostream>
using namespace std;

int main() {
    int dividend, divisor;
    
    cout << "Enter the dividend: ";
    cin >> dividend;
    
    cout << "Enter the divisor: ";
    cin >> divisor;
    
    if (divisor != 0) {
        int quotient = dividend / divisor;
        int remainder = dividend % divisor;
        
        cout << "Quotient: " << quotient << endl;
        cout << "Remainder: " << remainder << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }
    
    return 0;
}
