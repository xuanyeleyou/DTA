#include <iostream>
#include "KMP.h"
using namespace std;
int main() {
    char *P, *T;
    cout << "Please input two strings that first is smaller than second: " << endl;
    cin >> P >> T ;
    int N;
    N = match(P, T);
    cout << " N  ";
    cout << N << endl;
    return 0;
}
