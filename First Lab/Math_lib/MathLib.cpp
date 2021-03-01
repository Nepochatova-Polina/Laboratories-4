#include "MathLib.h"
#include <iostream>
#include <cmath>
#include "vector"

using namespace std;


int MathLib::NOD(int a, int b) {
    if (a < 0 || b < 0) {
        throw std::invalid_argument("received negative value");
    }
    if (a == 0) {
        return b;
    } else if (b == 0) {
        return a;
    } else {
        if (a % b == 0)
            return b;
        else if (b % a == 0)
            return a;
        else if (a > b)
            return NOD(a % b, b);
        return NOD(a, b % a);
    }
}

int MathLib::NOK(int a, int b) {
    if (a < 0 || b < 0) {
        throw invalid_argument("received negative value");
    }
    int x = NOD(a, b);
    if (x == 0) {
        return x;
    } else {
        return (a * b) / NOD(a, b);
    }
}

string MathLib::factorize(int x) {
    if (x == 0 || x < 0) {
        throw invalid_argument("received negative value");
    }
    string result;
    for (int i = 2; i <= sqrt(x); i++) {
        while (x % i == 0) {
            result += to_string(i) + " ";
            x /= i;
        }
    }
    if (x != 1) {
        result += to_string(x);
    }

    return result;
}

int MathLib::Jacobi(int a, int n) {
    int ans;
    if (a == 0)
        ans = (n == 1) ? 1 : 0;
    else if (a == 2) {
        switch (n % 8) {
            case 1:
            case 7:
                ans = 1;
                break;
            case 3:
            case 5:
                ans = -1;
                break;
        }
    } else if (a >= n)
        ans = Jacobi(a % n, n);
    else if (a % 2 == 0)
        ans = Jacobi(2, n) * Jacobi(a / 2, n);
    else
        ans = (a % 4 == 3 && n % 4 == 3) ? -Jacobi(n, a) : Jacobi(n, a);
    return ans;
}


bool MathLib::isArmstrongNum(int num) {
    if (num == 0 || num < 0) {
        throw invalid_argument("received negative value");
    }
    int originalNum, remainder, result = 0;
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }
    if (result == num)
        return true;
    else
        return false;
}

double MathLib::Lagranz(double **matrix, int number) {
    double t = 0, sum = 0, calc = 1;
    for (int j = 0; j < number; j++) {
        for (int i = 0; i < 2; i++) {
            if (i != j) {
                calc = calc * (t - matrix[0][i]) / (matrix[0][j] - matrix[0][i]);
            }
        }
        sum = sum + matrix[1][j] * calc;
    }
    return sum;
}


string MathLib::ThreeOfPif(int n) {
    if(n == 0){
        return "0";
    }
    if( n < 0){
        throw invalid_argument("received negative value");
    }
    int j, counter = 0;
    string res;
    double candidate, sqrnbr;
    for (int i = 1; i <= n; i++) {
        for (j = i; j <= n; j++) {
            candidate = i * i + j * j;
        }
        sqrnbr = sqrt(candidate);
        if (candidate / sqrnbr == sqrnbr) {
            res += to_string(i) + " and " + to_string(j) + " and " + to_string(sqrnbr) + "      ";
            counter++;
        }
    }

    return res;
}

vector<int> MathLib::findDividers(int n) {
    vector<int> v;
    if(n <= 0){
        throw invalid_argument("incorrect value");
    }
        if(n % 5 == 0) {
            v.push_back(1);
            int x = 5;
            while (x <= n) {
                v.push_back(x);
                x += 5;
            }
        }else {
            for (int i = 1; i <= n; i++) {
                if (n % i == 0)
                    v.push_back(i);
            }
        }
        return v;
}

bool MathLib::isPrime(int x) {
    if (x < 0 || x == 0) {
        throw invalid_argument("received negative value");
    }
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}


int MathLib::AriphmeticProgressionSum(int firstEl, int difference, int lastEl) {
    if (lastEl < 0)
        throw invalid_argument("received negative value");
    int sum = 0;
    for (int i = 0; i < lastEl; i++) {
        sum = sum + firstEl;
        firstEl = firstEl + difference;
    }
    return sum;
}

int MathLib::GeometryProgressionSum(int firstEl, int ratio, int lastEl) {
    if (lastEl < 0)
        throw invalid_argument("received negative value");
    int sum = 0;
    for (int i = 0; i < lastEl; i++) {
        sum = sum + firstEl;
        firstEl = firstEl * ratio;
    }
    return sum;
}





int MathLib::ChineeseTheory(  int n[], int m[], int mi[], int i, int size) {
    int M = 1, Y = 0;
    for (i = 0; i < size; i++) {
        M = M * n[i];
    }
    for (i = 0; i < size; i++) {
        m[i] = M / n[i];
    }

    for (i = 0; i < size; i++) {
        mi[i] = m[i] % n[i];
    }
    for (i = 0; i < size; i++) {
    }

    return Y = Y % M;
}

double MathLib::factorial(int num) {
    if (num < 0)
        throw invalid_argument("incorrect value");
    if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}

string MathLib::decToBinary(int n) {
    if (n == 0) {
        return "0";
    }
    if (n < 0)
        n = n * (-1);
    string binaryNum;
    while (n > 0) {
        binaryNum += to_string(n % 2);
        n = n / 2;
    }

    return binaryNum;
}

char MathLib::xor_c(char a, char b) { return (a == b) ? '0' : '1'; }

char MathLib::flip(char c) { return (c == '0') ? '1' : '0'; }

string MathLib::binToGray(string binary) {
    if (binary[0] == '-') {
        throw invalid_argument("incorrect value");
    }
    string Gray;

    Gray += binary[0];
    for (int i = 1; i < binary.length(); i++) {
        Gray +=  MathLib::xor_c(binary[i - 1], binary[i]);
    }
    return Gray;
}

string MathLib::graytoBinary(string Gray) {
    if (Gray[0] == '-') {
        throw invalid_argument("incorrect value");
    }
    string binary;
    binary += Gray[0];
    for (int i = 1; i < Gray.length(); i++) {
        if (Gray[i] == '0') {
            binary += binary[i - 1];

        } else
            binary +=  MathLib::flip(binary[i - 1]);
    }

    return binary;
}

int MathLib::SumOfNaturalNums(int n) {
    if (n < 0) {
        throw invalid_argument("incorrect value");
    }
    if (n != 0)
        return n + SumOfNaturalNums(n - 1);
    return n;
}