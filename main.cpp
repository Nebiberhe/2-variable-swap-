
#include <iostream>
using namespace std;

int main() {
    int a, b, z;

   
    cout << "Enter the first integer (1): ";
    cin >> a;
    cout << "Enter the second integer (2): ";
    cin >> b;

    
    z = a;
    a = b;
    b = z;

    
    cout << "Variables swapped: a = " << a << ", b = " << b << endl;

    return 0;
}
