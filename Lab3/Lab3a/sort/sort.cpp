#include "sort.h"
#include <algorithm>
#include "cmath"
#include "iostream"

using namespace std;

sort::sort() = default;

sort::~sort() = default;
/**
 * @brief selection sort implementation
 * @param array to sort
 * @param size of array
 */
int* sort::selectionSort(int array[], int size) {
    int j = 0;
    int tmp = 0;
    for (int i = 0; i < size; i++) {
        j = i;
        for (int k = i; k < size; k++) {
            if (array[j] > array[k]) {
                j = k;
            }
        }
        tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
    }
    return array;
}

/**
 * @brief bubble sort implementation
 * @param array to sort
 * @param size of array
 */
int* sort::bubbleSort(int array[], int size) {
    int tmp = 0;
    for (int i = 0; i < size; i++) {
        for (int j = (size - 1); j >= (i + 1); j--) {
            if (array[j] < array[j - 1]) {
                swap(array[j], array[j - 1]);
            }
        }
    }
    return array;
}
/**
 * @brief insertion sort implementation
 * @param array to sort
 * @param size of array
 */
int* sort::insertionSort(int array[], int size) {
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
    return array;
}

/**
 *
 * @param a b - elements for swap
 */
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int sort::partition(int arr[], int size2, int size1) {
    int pivot = arr[size1];
    int i = (size2 - 1);

    for (int j = size2; j <= size1 - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[size1]);
    return (i + 1);
}

/**
 * @brief Quick sort implementation
 * @param array to sort
 * @param low - index of first element
 * @param high - index oof last element
 */
int* sort::quickSort(int array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
    return array;
}




