#ifndef SECOND_LAB_LIST_H
#define SECOND_LAB_LIST_H
#include "list"
using namespace std;
class containers{
private:
    int numOfElements;
public:
    int getNumOfElements() const;
    void setNumOfElements(int numOfElements);
};

class List : public containers {
private:
    list<int> myList;
public:
    explicit List(const list<int> &myList);
    list<int> getValue() const;
    void setValue(list<int> List);

    _List_const_iterator<int> findElement(int x);
    List &deleteElement(int x);
    List &addElement(int x);

    virtual ~List();

    void showList();
};



#endif //SECOND_LAB_LIST_H
