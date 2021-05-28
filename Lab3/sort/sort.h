#ifndef LAB3_SORT_H
#define LAB3_SORT_H

/**
 * @class of sort functions
 */
class sort {
public:
    static void selectionSort(int array[], int size);
    static void bubbleSort(int array[], int size);
    static void quickSort(int array[], int low, int high);
    static int partition (int array[], int size2, int size1);
    static void insertionSort(int *array, int size);

    static void multiThreadFunc(int *array, int n);

    static void oneThreadFunc(int *array, int n);

};


#endif //LAB3_SORT_H
