#include "iostream"
#include "boost/test/unit_test.hpp"

using namespace std;
class first{
public:
    first();

private:
    int x{};
    string name{};
};

first::first() = default;
