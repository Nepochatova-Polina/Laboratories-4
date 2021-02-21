#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>
#include "../Math_lib/MathLib.h"

struct Math {
    Math() {
        newMath = new MathLib();
    }

    ~Math() {
        delete newMath;
    }

    MathLib *newMath{};

};


BOOST_AUTO_TEST_SUITE(TwoTwoFour_suite)

    BOOST_FIXTURE_TEST_CASE(NOK, Math) {
        BOOST_CHECK_EQUAL(newMath->NOK(3, 5), 15);
        BOOST_CHECK_EQUAL(newMath->NOK(0, 3), 0);
        BOOST_CHECK_EQUAL(newMath->NOK(198, 300), 9900);
        BOOST_CHECK_THROW(newMath->NOK(-3, 1), invalid_argument);

    }

    BOOST_FIXTURE_TEST_CASE(NOD, Math) {
        BOOST_CHECK_EQUAL(newMath->NOD(3, 5), 1);
        BOOST_CHECK_EQUAL(newMath->NOD(0, 3), 3);
        BOOST_CHECK_EQUAL(newMath->NOD(198, 300), 6);
        BOOST_CHECK_THROW (newMath->NOD(-3, 1), invalid_argument);

    }

BOOST_AUTO_TEST_SUITE_END()
