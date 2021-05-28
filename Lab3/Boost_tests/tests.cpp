#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>
#include <cstdlib>
#include "../sort/sort.h"
struct LN {

    LN() {
        firstNum = new sort();
        secondNum = new sort();
    }

    ~LN() {
        delete firstNum;
        delete secondNum;
    }

    sort *firstNum;
    sort *secondNum;

};
BOOST_AUTO_TEST_SUITE(Large_Number_Tests)

    BOOST_FIXTURE_TEST_CASE(Sum, LN)
    {

//        BOOST_CHECK_EQUAL();

    }


BOOST_AUTO_TEST_SUITE_END()

