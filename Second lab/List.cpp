#include "List.h"
#include "iostream"
#include <list>

using namespace std;
list<int> List::getValue() const {
    return myList;
}

void List::setValue(list<int> List) {
    List::myList = List;
}


List::~List() = default;

_List_const_iterator<int> List::findElement(int x){
        list<int>::const_iterator it;
        it = this->myList.begin();
    while (it != myList.end()) {
        if(*it != x){
            it++;
        }
        return it;
    }
}

List& List::deleteElement(int x){
    auto deleteEl = this->findElement(x);
    this->myList.erase(deleteEl);
    return *this;
}
List& List::addElement(int x){
   this->myList.push_back(x);
    return *this;
}

List::List(const list<int> &myList) : containers(), myList(myList) {}

int containers::getNumOfElements() const {
    return numOfElements;
}
void containers::setNumOfElements(int numOfElements) {
    containers::numOfElements = numOfElements;
}
void List::showList(){
    list<int>::const_iterator it;
    for (it = this->myList.begin(); it != this->myList.end(); it++){
        cout << *it << " ";
    }
}