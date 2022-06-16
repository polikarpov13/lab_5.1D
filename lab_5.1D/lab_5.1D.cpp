#include "LongLong.h"
#include <iostream>

using namespace std;

class olderNotZero {};

void checkOlder(LongLong l) {
    if (l.getOlder() < 0)
        throw olderNotZero();
}

int main()
{
    LongLong l;

    cin >> l;

    checkOlder(l);

    cout << l;

    cout << "Addition : " << l + l << endl;
    cout << "Multiplication : " << l * l << endl;
    cout << "Comparing : "; l.Compare();
}
