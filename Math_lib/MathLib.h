#ifndef UNITTESTING_TUTORIAL_JULIAN_H_
#define UNITTESTING_TUTORIAL_JULIAN_H_

#include <vector>
#include "string"
using namespace std;

class Sum{
protected:
    int x = 1;
    int y = 1;
    int sum;

public:
    Sum(){};

    int getX() {return x;};
    int getY() {return y;};
    int getSum() {return sum;};

    static void CalcSum(int x, int y);

};


class MathLib{
public:
static int *stringToGray(int number, const int inputString[]);

static int NOD(int a, int b);

int NOK(int a, int b);

static std::vector<int> factorize(int x);

int Jacobi(int a, int n);

static string ArmstrongNumber(int number);

static double Lagranz(double **matrix, int number);

static string ThreeOfPif();

static std::vector<int> findDividers(int x);

static bool isPrime(int x);

static int AriphmeticSum(int n, int res);

static int GeometrySum(int n, int k);

static string naturNum(int n);

static int BellNum(int n, int p);

static int ChineeseTheory(int *a, const int *n, int *m, int *mi, int i, int size);

static string CarperRes(int x);

double factorial(int num);

};
#endif //UNITTESTING_TUTORIAL_JULIAN_H_