#ifndef UNITTESTING_TUTORIAL_JULIAN_H_
#define UNITTESTING_TUTORIAL_JULIAN_H_

#include <vector>
#include "string"

using namespace std;



class MathLib {
public:

    static int NOD(int a, int b);

    static int NOK(int a, int b);

    static string factorize(int x);

    static int Jacobi(int a, int n);

    static double Lagranz(double **matrix, int number);

    static string ThreeOfPif(int n);

    static std::vector<int> findDividers(int x);

    static bool isPrime(int x);

    static int ChineeseTheory(  int *n, int *m, int *mi, int i, int size);

    static string CarperRes(int x);

    double factorial(int num);

    static bool isArmstrongNum(int num);

    static int AriphmeticProgressionSum(int firstEl, int difference, int lastEl);

    static int GeometryProgressionSum(int firstEl, int ratio, int lastEl);

    static string decToBinary(int n);

    static string binToGray( string binary);

    static string graytoBinary(string Gray);

    static int SumOfNaturalNums(int n);

    static char xor_c(char a, char b);

    static char flip(char c);
};

#endif //UNITTESTING_TUTORIAL_JULIAN_H_