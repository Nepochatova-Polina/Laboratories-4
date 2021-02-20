#include <iostream>
#include "MathLib.h"
using namespace std;

int main() {
   int x,y;
   cin >> x >> y;
   cout <<  (x * y) / MathLib::NOD(x, y);
    return 0;
}
