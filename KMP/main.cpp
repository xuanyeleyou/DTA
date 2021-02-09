#include <iostream>
#include "KMP.h"
using namespace std;
int main() {
    char *P, *T;
    cout << "Please input two strings that first is smaller than second: " << endl;
    P = "sljfelafelj";
    T = "lijfalweflsfelafeert";
    int N;
    N = match(P, T);
    cout << " N:  ";
    cout << N << endl;
    return 0;
}
