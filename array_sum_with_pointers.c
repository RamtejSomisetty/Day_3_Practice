#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//array sum with pointers

void sum_of_array_with_pointers(int *ptr,int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum = sum+*(ptr+i);
    }
    printf("Sum of all the elements in the array:%d\n",sum);
    
}
int main(){
    int array[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(array)/sizeof(array[0]);
    sum_of_array_with_pointers(&array[0],n);
}