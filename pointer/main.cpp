//https://www.hackerrank.com/challenges/c-tutorial-pointer/problem
#include <stdio.h>
#include <iostream>
using namespace std;
void update(int *a,int *b) {
    int sum = *a+*b;
    int absDiff;
    if(*b>=*a)
        {absDiff=*b-*a;}
    else
        {absDiff=*a-*b;}
    *a = sum;
    *b = absDiff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
