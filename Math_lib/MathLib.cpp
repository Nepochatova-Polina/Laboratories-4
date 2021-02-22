#include "MathLib.h"
#include <iostream>
#include <cmath>
#include "vector"

using namespace std;


int *MathLib::stringToGray(int number, const int inputString[]) {
    int outputString[number];
    int count = 0;
    while (count < number) {
        if (((inputString[count] == 0 && (inputString[count] >> 1) == 0)) ||
            ((inputString[count] == 1 && (inputString[count] >> 1) == 1))) {
            outputString[count] = 0;
        } else {
            if ((((inputString[count] == 0 && (inputString[count] >> 1) == 1))) ||
                ((inputString[count] == 1 && (inputString[count] >> 1) == 0))) {
                outputString[count] = 1;
            }
        }
        count++;
    }
    return outputString;
}

vector<string> func(int number) {
    string arr;
    int i, j;
    if (number <= 0)
        throw invalid_argument("received negative value");
//
//
//    for (i = 2; i < (1 << number); i = i << 1) {
//        for (j = i - 1; j >= 0; j--)
//            arr.push_back(arr[j]);
//
//        for (j = 0; j < i; j++)
//            arr[j] = "0" + arr[j];
//
//        for (j = i; j < 2 * i; j++)
//            arr[j] = "1" + arr[j];
//    }
//    for (i = 0; i < arr.size(); i++)
//        return arr;

}

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

vector<int> MathLib::factorize(int x) {
    vector<int> factors;
    for (int i = 2; i <= sqrt(x); i++) {
        while (x % i == 0) {
            factors.push_back(i);
            x /= i;
        }
    }
    if (x != 1) {
        factors.push_back(x);
    }

    return factors;
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


string MathLib::ThreeOfPif() {
    int j, counter = 0;
    string res;
    double candidate, sqrnbr;
    for (int i = 400; i <= 500; i++) {
        for (j = i; j <= 500; j++) {
            candidate = i * i + j * j;
        }
        sqrnbr = sqrt(candidate);
        if (candidate / sqrnbr == sqrnbr) {
            res += to_string(i) + " and " + to_string(j) + " and " + to_string(sqrnbr) + " ";
            counter++;
        }
    }

    return res;
}

vector<int> MathLib::findDividers(int x) {
    vector<int> dividers;

    for (int i = 1; i <= sqrt(x); i++) {
        if (x % i == 0) {
            dividers.push_back(i);
            if (i * i != x) {
                dividers.push_back(x / i);
            }
        }
    }

    return dividers;
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

string MathLib::naturNum(int n) {
    string res;
    int lim1 = (n / 3) + 1;
    int lim2;
    for (int i = 0; i < lim1; i++) {
        lim2 = ((n - i) / 2) + 1;
        for (int j = i; j < lim2; j++) {
            res += to_string(i) + " " + to_string(j) + " " + to_string(n - i - j) + " ";
        }
    }
    return res;
}


string MathLib::CarperRes(int x) {
    int K = 0, xm = 0, xM = 0, n = 0;
    int N[11];
    string res;
    while (x != 0) {
        N[n] = abs(x % 10);
        n++;
        x /= 10;
    }
    bool t = true;
    for (int i = 0; i < 11 - 1; i++) {
        for (int j = 0; j < 11 - i - 1; j++) {
            if (N[j] > N[j + 1]) {
                swap(N[j], N[j + 1]);
            }
        }
    }
    int ten = 1;
    for (int j = 0; j < n - 1; j++) {
        ten *= 10;
    }
    int ten_copy = ten;
    for (int i = 0; i < n; i++) {
        xm += N[i] * ten;
        ten /= 10;
    }
    for (int i = n - 1; i >= 0; i--) {
        xM += N[i] * ten_copy;
        ten_copy /= 10;
    }
    K = xM - xm;
    int c = 0;
    int K_tmp = K;
    while (K_tmp != 0) {
        c++;
        K_tmp /= 10;
    }
    for (int i = 0; i < n - c; i++) {
        if (K != 0) {
            res += to_string(K);
        }
    }
    return res;
}

int MathLib::BellNum(int n, int p) {
    int k = 0;
    for (int i = 1; i <= n; i++) {
        int fact = i;
        while (fact) {
            fact /= p;
            k += fact;
        }
    }
    return k;
}

int MathLib::ChineeseTheory(int a[], const int n[], int m[], int mi[], int i, int size) {
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
    if(n == 0){
        return "0";
    }
    if(n < 0)
        n = n * (-1);
    string binaryNum;
    while (n > 0) {
        binaryNum += to_string(n % 2);
        n = n / 2;
    }

    return binaryNum;
}