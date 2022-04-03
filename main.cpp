#include <iostream>
#include "Valid.h"

using namespace std;

int main() {
    Valid a, b;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << endl;

    cout << "a - b = "<< a - b;
    cout << "--a = " << -- a;
    cout << "b-- = "<< b--;
    cout <<"b value = "<<b;

    return 0;
}
