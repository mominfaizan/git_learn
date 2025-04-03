#include<stdio.h>
int main(){
    int b=10;
    int *p=&b;
    int c;
    int d=20;
    int *q=&d;
    printf("%d",*p);
    printf("%d",*q);
}