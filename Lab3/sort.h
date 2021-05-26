#ifndef LAB3_SORT_H
#define LAB3_SORT_H


class sort {
public:
    static void selectionSort(int data[], int lenD);
    static void bubbleSort(int data[], int lenD);
    void mergeSort(int data[], int lenD);
    static void merge(int merged[], int lenD, const int L[], int lenL, const int R[], int lenR);
    void quickSort(int* data, int  len);


};


#endif //LAB3_SORT_H
