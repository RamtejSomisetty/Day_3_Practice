#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//swap using pointers

void swap(int* a, int* b) {
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(){

    int a=10,b=20;
    printf("the value of a and b before swapping :%d and %d\n",a,b);
    swap(&a,&b);
    printf("the value of a and b before swapping :%d and %d\n",a,b);
}