#include <iostream>
#include "thread"
#include "pthread.h"
#include "chrono"
#include "sort.h"

using namespace std;


int main() {
    int array[20];
    for (int &i : array) {
        i = rand() % 100;
    }
    auto t1 = chrono::high_resolution_clock::now();
    thread th(sort::bubbleSort, array, 19);
    thread x(sort::mergeSort, array, 19);
    auto t2 = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << endl << duration;
    th.detach();
    x.detach();

    return 0;
}
