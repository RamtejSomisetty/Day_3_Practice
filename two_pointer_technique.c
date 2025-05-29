#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>


int twoSum(int* array, int n, int target,int start_index[],int end_index[],int start_element[],int end_element[]){
    int sum;
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum = array[i]+array[j];
            if(target == sum){
                start_index[k]=i;
                end_index[k]=j;
                start_element[k]=array[i];
                end_element[k]=array[j];
                k++;
            }
        }
    }
    return k;
}
int main(){

    int array[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(array)/sizeof(array[0]);
    int target = 15;
    int start_index[n];
    int end_index[n];
    int start_element[n];
    int end_element[n];
    int k=twoSum(array,n,target,start_index,end_index,start_element,end_element);
    printf("\nIndex and element_at_index of starting and ending of array of target %d:-\n\n",target);
    for(int i=0;i<k;i++){
        printf("starting_index : %d,starting_value : %d\nending_index   : %d,ending_value   : %d\n\n",start_index[i],start_element[i],end_index[i],end_element[i]);
    }

}