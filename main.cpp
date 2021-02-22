#include <iostream>
#include "MathLib.h"
using namespace std;

int main() {
   int n,k=0;
   cin >> n;
    vector<int> x = MathLib::findDividers(n);
    while(k < x.size()) {
        cout << x[k];
        k++;
    }
    return 0;
}
