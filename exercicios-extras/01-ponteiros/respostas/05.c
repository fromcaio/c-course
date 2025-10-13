#include<stdio.h>

void main() {
    // i = 7 , j = 5 , c = ALEATORIO
    int i = 7 , j = 5 , c ;
    int * p ;
    int ** q ;
    // p aponta para i
    p = & i ;
    // q aponta para p
    q = & p ;
    // q - > p -> i = 7
    // j = 5
    // c = 7 + 5 = 12
    c = ** q + j ;
}