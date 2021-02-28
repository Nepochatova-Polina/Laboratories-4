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


BOOST_AUTO_TEST_SUITE(MathLibrary_Tests)

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

    BOOST_FIXTURE_TEST_CASE(Factorial, Math) {
        BOOST_CHECK_EQUAL(newMath->factorial(2), 2);
        BOOST_CHECK_EQUAL(newMath->factorial(10), 3628800);
        BOOST_CHECK_EQUAL(newMath->factorial(0), 1);
        BOOST_CHECK_THROW(newMath->factorial(-3), invalid_argument);

    }

    BOOST_FIXTURE_TEST_CASE(IsArmstrongNum, Math) {
        BOOST_CHECK_EQUAL(newMath->isArmstrongNum(153), true);
        BOOST_CHECK_EQUAL(newMath->isArmstrongNum(10), false);
        BOOST_CHECK_THROW(newMath->isArmstrongNum(0), invalid_argument);
        BOOST_CHECK_THROW(newMath->isArmstrongNum(-3), invalid_argument);

    }

    BOOST_FIXTURE_TEST_CASE(AriphmeticProgressionSum, Math) {
        BOOST_CHECK_EQUAL(newMath->AriphmeticProgressionSum(3, 4, 5), 55);
        BOOST_CHECK_EQUAL(newMath->AriphmeticProgressionSum(0, 3, 5), 30);
        BOOST_CHECK_EQUAL(newMath->AriphmeticProgressionSum(2, 0, 5), 10);
        BOOST_CHECK_EQUAL(newMath->AriphmeticProgressionSum(20, 3, 0), 0);
        BOOST_CHECK_EQUAL(newMath->AriphmeticProgressionSum(-2, 3, 10), 115);
        BOOST_CHECK_EQUAL(newMath->AriphmeticProgressionSum(2, -3, 10), -115);
        BOOST_CHECK_THROW(newMath->AriphmeticProgressionSum(2, 3, -10), invalid_argument);
        BOOST_CHECK_EQUAL(newMath->AriphmeticProgressionSum(150, 100, 100), 510000);
    }

    BOOST_FIXTURE_TEST_CASE(GeometricProgressionSum, Math) {
        BOOST_CHECK_EQUAL(newMath->GeometryProgressionSum(3, 4, 5), 1023);
        BOOST_CHECK_EQUAL(newMath->GeometryProgressionSum(0, 3, 5), 0);
        BOOST_CHECK_EQUAL(newMath->GeometryProgressionSum(2, 0, 5), 2);
        BOOST_CHECK_EQUAL(newMath->GeometryProgressionSum(2, 3, 0), 0);
        BOOST_CHECK_EQUAL(newMath->GeometryProgressionSum(-2, 3, 5), -242);
        BOOST_CHECK_EQUAL(newMath->GeometryProgressionSum(2, -3, 5), 122);
        BOOST_CHECK_THROW(newMath->GeometryProgressionSum(2, 3, -5), invalid_argument);
    }

    BOOST_FIXTURE_TEST_CASE(IsNumberPrime, Math) {
        BOOST_CHECK_EQUAL(newMath->isPrime(20), false);
        BOOST_CHECK_EQUAL(newMath->isPrime(7), true);
        BOOST_CHECK_THROW(newMath->isPrime(0), invalid_argument);
        BOOST_CHECK_EQUAL(newMath->isPrime(4738352), false);
        BOOST_CHECK_THROW(newMath->isPrime(-8), invalid_argument);

    }

    BOOST_FIXTURE_TEST_CASE(SumOfNaturalNums, Math) {
        BOOST_CHECK_EQUAL(newMath->SumOfNaturalNums(5), 15);
        BOOST_CHECK_EQUAL(newMath->SumOfNaturalNums(7684), 29525770);
        BOOST_CHECK_EQUAL(newMath->SumOfNaturalNums(0), 0);
        BOOST_CHECK_THROW(newMath->SumOfNaturalNums(-15731), invalid_argument);
    }

    BOOST_FIXTURE_TEST_CASE(FindDiv, Math) {
        vector<int> x = {1, 5, 10, 15, 20, 25};
        vector<int> y = {1, 2, 4, 37, 74, 148};
//        BOOST_CHECK_EQUAL(newMath->findDividers(25), x);
        BOOST_CHECK_THROW(newMath->findDividers(0), invalid_argument);
        BOOST_CHECK_THROW(newMath->findDividers(-15731), invalid_argument);
    }

    BOOST_FIXTURE_TEST_CASE(Factorize, Math) {

        BOOST_CHECK_EQUAL(newMath->factorize(33),"3 11" );
        BOOST_CHECK_EQUAL(newMath->factorize(12121),"17 23 31" );
        BOOST_CHECK_THROW(newMath->factorize(0), invalid_argument);
        BOOST_CHECK_THROW(newMath->factorize(-15731), invalid_argument);
    }

    BOOST_FIXTURE_TEST_CASE(ThreeOfPifagor, Math) {
    string x ="2 and 21 and 20.099751      3 and 21 and 20.223748      7 and 21 and 21.189620      9 and 21 and 21.931712      15 and 21 and 25.000000      16 and 21 and 25.612497      ";
        BOOST_CHECK_EQUAL(newMath->ThreeOfPif(5), "4 and 6 and 6.403124      ");
        BOOST_CHECK_EQUAL(newMath->ThreeOfPif(20),x );
        BOOST_CHECK_EQUAL(newMath->ThreeOfPif(0), "0");
        BOOST_CHECK_THROW(newMath->ThreeOfPif(-15731), invalid_argument);
    }

BOOST_AUTO_TEST_SUITE_END()


BOOST_AUTO_TEST_SUITE(TransitionOfNumberSystems_Tests)

    BOOST_FIXTURE_TEST_CASE(DecimalToBinary, Math) {
        BOOST_CHECK_EQUAL(newMath->decToBinary(20), "00101");
        BOOST_CHECK_EQUAL(newMath->decToBinary(1000), "0001011111");
        BOOST_CHECK_EQUAL(newMath->decToBinary(-145), "10001001");
        BOOST_CHECK_EQUAL(newMath->decToBinary(0), "0");
        BOOST_CHECK_EQUAL(newMath->decToBinary(1), "1");

    }

    BOOST_FIXTURE_TEST_CASE(BinaryToGray, Math) {
        BOOST_CHECK_EQUAL(newMath->binToGray("1010"), "1111");
        BOOST_CHECK_EQUAL(newMath->binToGray("1001010010101"), "1101111011111");
        BOOST_CHECK_EQUAL(newMath->binToGray("0"), "0");
        BOOST_CHECK_THROW(newMath->binToGray("-1001001"), invalid_argument);
    }

    BOOST_FIXTURE_TEST_CASE(GrayToBinary, Math) {
        BOOST_CHECK_EQUAL(newMath->graytoBinary("10010110"), "11100100");
        BOOST_CHECK_EQUAL(newMath->graytoBinary("1001010010101"), "1110011100110");
        BOOST_CHECK_EQUAL(newMath->graytoBinary("0"), "0");
        BOOST_CHECK_THROW(newMath->graytoBinary("-1001001"), invalid_argument);
    }


BOOST_AUTO_TEST_SUITE_END()