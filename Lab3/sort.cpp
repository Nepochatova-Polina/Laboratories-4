#include "sort.h"
#include <algorithm>
#include "cmath"
#include "iostream"

using namespace std;
/**
 * @brief selection sort implementation
 * @param array to sort
 * @param size of array
 */
void sort::selectionSort(int array[], int size) {
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
}
/**
 * @brief bubble sort implementation
 * @param array to sort
 * @param size of array
 */
void sort::bubbleSort(int array[], int size) {
    int tmp = 0;
    for (int i = 0; i < size; i++) {
        for (int j = (size - 1); j >= (i + 1); j--) {
            if (array[j] < array[j - 1]) {
                swap(array[j], array[j - 1]);
            }
        }
    }
    for (int i = 0; i < 20; i++) {
        cout << array[i] << " ";
    }
}
/**
 * @brief Merge sort implementation
 * @param array to sort
 * @param size of array
 */
void sort::mergeSort(int array[], int size) {
    if (size > 1) {
        int middle = size / 2;
        int rem = size - middle;
        int *L = new int[middle];
        int *R = new int[rem];
        for (int i = 0; i < size; i++) {
            if (i < middle) {
                L[i] = array[i];
            } else {
                R[i - middle] = array[i];
            }
        }
        mergeSort(L, middle);
        mergeSort(R, rem);
        merge(array, size, L, middle, R, rem);
    }
    for (int i = 0; i < 20; i++) {
        cout << array[i] << " ";
    }
}
/**
 * @brief help function for Merge Sort algorithm
 */
void sort::merge(int merged[], int size, const int L[], int lenL, const int R[], int lenR) {
    int i = 0;
    int j = 0;
    while (i < lenL || j < size) {
        if (i < lenL & j < size) {
            if (L[i] <= R[j]) {
                merged[i + j] = L[i];
                i++;
            } else {
                merged[i + j] = R[j];
                j++;
            }
        } else if (i < lenL) {
            merged[i + j] = L[i];
            i++;
        } else if (j < lenR) {
            merged[i + j] = R[j];
            j++;
        }
    }
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
void sort::quickSort(int array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

