#include <iostream>
#include "thread"
#include "pthread.h"
#include "chrono"
#include "sort/sort.h"

using namespace std;


int main() {
    int array[10000];
    for (int &i : array) {
        i = rand() % 100;
    }
    sort::multiThreadFunc(array,10000);
    sort::oneThreadFunc(array,10000);
    return 0;
}

void sort::multiThreadFunc(int array[], int n) {
    auto startTime = chrono::high_resolution_clock::now();
    thread insertionTh(sort::insertionSort, array, n);
    thread bubbleTh(sort::bubbleSort, array, n);
    thread selectionTh(sort::selectionSort, array, n);
    thread QuickTh(sort::quickSort, array, 0, n);

    auto endTime = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(endTime - startTime).count();
    cout << endl << duration;
    insertionTh.join();
    bubbleTh.join();
    selectionTh.join();
    QuickTh.join();
}

void sort::oneThreadFunc(int array[], int n) {
    auto startTime = chrono::high_resolution_clock::now();
    sort::insertionSort(array, n);
    sort::bubbleSort(array, n);
    sort::selectionSort(array, n);
    sort::quickSort(array, 0, n);
    auto endTime = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(endTime - startTime).count();
    cout << endl << duration;
}