#ifndef LAB3_SORT_H
#define LAB3_SORT_H

/**
 * @class of sort functions
 */
class sort {
public:
    sort();
    virtual ~sort();
    int array[9] = {2,4,6,3,8,1,5,7,9};

    static int* selectionSort(int array[], int size);
    static int* bubbleSort(int array[], int size);
    static int* quickSort(int array[], int low, int high);
    static int partition (int array[], int size2, int size1);
    static int* insertionSort(int *array, int size);

    static void multiThreadFunc(int *array, int n);

    static void oneThreadFunc(int *array, int n);


};


#endif //LAB3_SORT_H
