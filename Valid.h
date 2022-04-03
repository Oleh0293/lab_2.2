#pragma once
#include <iostream>
using namespace std;
class Valid
{
    double x;
public:
    double GetX() const { return x; }
    void SetX(double value) { x = value; }
    Valid();
    Valid(double);
    Valid(const Valid&);

    friend Valid operator - (Valid&, Valid&);
    Valid& operator --();
    Valid operator --(int);

    friend ostream& operator << (ostream&, const Valid&);
    friend istream& operator >> (istream&, Valid&);

};