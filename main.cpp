#include <iostream>
#include "MathLib.h"
using namespace std;

int main() {
   int n,k=0;
   cin >> n;
    string x =MathLib::factorize(n);
       cout << x;

    return 0;
}
