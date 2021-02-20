#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>
#include "../Math_lib/MathLib.h"

//struct DateConverterFixture {
//
//    DateConverterFixture()  {
//        newSum = new Sum();
//    }
//
//    ~DateConverterFixture() {
//        delete newSum;
//    }
//
//    Sum * newSum;
//
//};
//
//BOOST_FIXTURE_TEST_CASE( FirstDayEver, DateConverterFixture ) // 1/1/1 -> 1/3/1
//{
//
//   newSum->CalcSum(3, 2);
//
//    BOOST_CHECK_EQUAL(newSum->getSum(), 5);
//    }


struct Math {
    Math()  {
       newMath = new MathLib();
    }

    ~Math() {
        delete newMath;
    }

    MathLib * newMath{};

};

BOOST_FIXTURE_TEST_CASE( NOK, Math ) // 1/1/1 -> 1/3/1
{
    BOOST_CHECK_EQUAL(newMath->NOK(3,5), 15);
    BOOST_CHECK_EQUAL(newMath->NOK(0,3), 0);
    BOOST_CHECK_EQUAL(newMath->NOK(-3,1), 3);

}
//BOOST_FIXTURE_TEST_CASE( PlusOneDiff, DateConverterFixture ) // 3/1/100 -> 3/2/100
//{
//    gregDate->SetMonth(3);
//    gregDate->SetDay(1);
//    gregDate->SetYear(100);
//
//    int absGregDate = gregDate->getAbsoluteDate();
//    newSum->CalcSum(absGregDate);
//
//    BOOST_CHECK_EQUAL(newSum->getMonth(),3);
//    BOOST_CHECK_EQUAL(newSum->getDay(),2);
//    BOOST_CHECK_EQUAL(newSum->getYear(),100);
//}
//
//BOOST_FIXTURE_TEST_CASE( MinusOne_Leap, DateConverterFixture ) // 3/1/300 -> 2/29/300
//{
//    gregDate->SetMonth(3);
//    gregDate->SetDay(1);
//    gregDate->SetYear(300);
//
//    int absGregDate = gregDate->getAbsoluteDate();
//    newSum->CalcSum(absGregDate);
//
//    BOOST_CHECK_EQUAL(newSum->getMonth(),2);
//    BOOST_CHECK_EQUAL(newSum->getDay(),29);
//    BOOST_CHECK_EQUAL(newSum->getYear(),300);
//}
//
//BOOST_FIXTURE_TEST_CASE( PlusFour_Leap, DateConverterFixture ) // 3/1/900 -> 2/25/900
//{
//    gregDate->SetMonth(3);
//    gregDate->SetDay(1);
//    gregDate->SetYear(900);
//
//    int absGregDate = gregDate->getAbsoluteDate();
//    newSum->CalcSum(absGregDate);
//
//    BOOST_CHECK_EQUAL(newSum->getMonth(),2);
//    BOOST_CHECK_EQUAL(newSum->getDay(),25);
//    BOOST_CHECK_EQUAL(newSum->getYear(),900);
//}