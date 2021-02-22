#include <iostream>
#include "MathLib.h"
using namespace std;

int main() {
   int n,k;
   cin >> n;
    string x = MathLib::decToBinary(n);
      cout << x;

    return 0;
}
