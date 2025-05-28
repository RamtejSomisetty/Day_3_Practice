#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>


int* createArray(int* n){
    int* ptr = (int* )malloc((*n)*sizeof(int));
    int** ptr1=&ptr;
    printf("\noriginal Array:- ");
    for(int i=0;i<*n;i++){
       
        **ptr1= 1+i;
          printf("%d ",**ptr1);
          
    }
    printf("\n");
    return ptr;
}


void resizeArray(int** arr, int oldSize, int newSize){

    int* ptr = (int *)malloc(sizeof(int)*newSize);

    printf("\nArray after resize :- ");
    for(int i=0;i<newSize;i++){
            *ptr=(i+10);
             printf("%d ",*ptr);
             ptr++;
    }
    printf("\n");
    free(*arr);
}
int main(){
    int n=5;
    int *ptr=createArray(&n);
    int n1=8;
    int **ptr1=&ptr;
    resizeArray(ptr1,n,n1);
}