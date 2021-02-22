#ifndef UNITTESTING_TUTORIAL_JULIAN_H_
#define UNITTESTING_TUTORIAL_JULIAN_H_

#include <vector>
#include "string"

using namespace std;



class MathLib {
public:

    static int NOD(int a, int b);

    static int NOK(int a, int b);

    static std::vector<int> factorize(int x);

    static int Jacobi(int a, int n);

    static double Lagranz(double **matrix, int number);

    static string ThreeOfPif();

    static std::vector<int> findDividers(int x);

    static bool isPrime(int x);

    static int BellNum(int n, int p);

    static int ChineeseTheory(int *a, const int *n, int *m, int *mi, int i, int size);

    static string CarperRes(int x);

    double factorial(int num);

    static bool isArmstrongNum(int num);

    static int AriphmeticProgressionSum(int firstEl, int difference, int lastEl);

    static int GeometryProgressionSum(int firstEl, int ratio, int lastEl);

    static string decToBinary(int n);

    static string binToGray( string binary);

    string graytoBinary(string Gray);

    static int SumOfNaturalNums(int n);
};

#endif //UNITTESTING_TUTORIAL_JULIAN_H_