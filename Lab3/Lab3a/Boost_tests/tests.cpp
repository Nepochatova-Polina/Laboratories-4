#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>
#include <cstdlib>
#include "sort.h"

struct sorting {

    sorting() {
        arr = new sort();
    }

    ~sorting() {
        delete arr;
    }

    sort *arr;

};
BOOST_AUTO_TEST_SUITE(SortFunctions_Tests)

    BOOST_FIXTURE_TEST_CASE(bubble, sorting)
    {
        int arrRes[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        BOOST_CHECK_EQUAL(sorting::arr->bubbleSort(sorting::arr->array, 9), arrRes);

    }

    BOOST_FIXTURE_TEST_CASE(insertionSort, sorting)
    {
        int arrRes[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        BOOST_CHECK_EQUAL(sorting::arr->insertionSort(sorting::arr->array, 9), arrRes);

    }

    BOOST_FIXTURE_TEST_CASE(selectionSort, sorting)
    {
        int arrRes[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        BOOST_CHECK_EQUAL(sorting::arr->selectionSort(sorting::arr->array, 9), arrRes);

    }

    BOOST_FIXTURE_TEST_CASE(quickSort, sorting)
    {
        int arrRes[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        BOOST_CHECK_EQUAL(sorting::arr->quickSort(sorting::arr->array, 0,9), arrRes);

    }

BOOST_AUTO_TEST_SUITE_END()

