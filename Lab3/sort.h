#ifndef LAB3_SORT_H
#define LAB3_SORT_H

/**
 * @class of sort functions
 */
class sort {
public:
    static void selectionSort(int array[], int size);
    static void bubbleSort(int array[], int size);
    static void mergeSort(int array[], int size);
    static void merge(int merged[], int size, const int L[], int lenL, const int R[], int lenR);
    static void quickSort(int array[], int low, int high);
    static int partition (int array[], int size2, int size1);


};


#endif //LAB3_SORT_H
