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
    thread th(sort::bubbleSort,array, 19);

//     t1 = chrono::high_resolution_clock::now();
//    thread x(sort::quickSort,array, 0,20);
//     t2 = chrono::high_resolution_clock::now();
//     duration =chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
//    cout << endl << duration;
    th.detach();

    return 0;
}
