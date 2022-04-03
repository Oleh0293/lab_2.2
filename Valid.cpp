#include "Valid.h"
#include <iostream>
using namespace std;
Valid::Valid()
{
    x = 0; }
Valid::Valid(double y)
{
    x = y; }
Valid::Valid(const Valid& r) {
    x = r.x; }

Valid operator - (Valid& a, Valid& b) {
    Valid t(0);
    t.x = a.x - b.x;
    return t;
}
Valid& Valid::operator --()
{
    x--;
    return *this;
}
Valid Valid::operator --(int)
{
    Valid t(*this);
    x--;
    return t;
}
ostream& operator << (ostream& out, const Valid& a) {
    out << a.x << endl;
    return out; }
istream& operator >> (istream& in, Valid& a) {
    in >> a.x;
    return in; }