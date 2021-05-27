#ifndef LAB3_SORT_H
#define LAB3_SORT_H


class sort {
public:
    static void selectionSort(int data[], int lenD);
    static void bubbleSort(int array[], int lenD);
    void mergeSort(int array[], int lenD);
    static void merge(int merged[], int lenD, const int L[], int lenL, const int R[], int lenR);
    static void quickSort(int arr[], int low, int high);
    static int partition (int arr[], int size2, int size1);


};


#endif //LAB3_SORT_H
