#define BOOST_TEST_DYN_LINK
//#define BOOST_TEST_MAIN - don't need to repeat this define in more than one cpp file
#include <boost/test/unit_test.hpp>
#include "../test.h"


BOOST_AUTO_TEST_SUITE(Tests)

    BOOST_AUTO_TEST_CASE(ExampleTest)
    {
    int x = test::sum(5,3);
    BOOST_CHECK(x == 8);
    }

BOOST_AUTO_TEST_SUITE_END()