//
// Created by Mark on 2021/2/7.
//
#include <string.h>
#ifndef KMP_KMP_H
#define KMP_KMP_H



int match(char* P, char* T);
int* buildNext(char* P);

int match(char *P, char *T) {
    int* next = buildNext(P);
    int n = (int) strlen(T), i = 0;
    int m = (int) strlen(P), j = 0;
    while(i < n && j < m) {
        if(j < 0 || P[j] == T[i]) {
            i++;
            j++;
        } else {
            j = next[j];
        }
    }
    delete [] next;
    return i - j;
}

int *buildNext(char *P) {
    size_t m = strlen(P), j = 0;
    int* Next = new int[m];
    int t = Next[0] = -1;
    while(j < m-1) {
        if(t < 0 || P[j] == P[t]) {
            j++;
            t++;
            Next[j] = t;
        } else {}
        t = Next[t];
    }
    return Next ;
}






#endif //KMP_KMP_H
