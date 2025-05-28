#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int length_of_the_string(char* string){
    int count =0;
    while(*string != '\0'){
        count=count+1;
        string = string+1;
    }
    return count;
}

//length of the string with pointers
int main(){

    char string[]="ramtej";
    int len = length_of_the_string(string);
    printf("Length of the string :%d\n",len);
}