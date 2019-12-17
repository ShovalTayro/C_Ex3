#include <stdio.h>
#include "isort.h"

void shift_element(int* arr, int i){
     for(int j = i-1; j > 0; j--){
	*(arr+j)=*(arr+j-1);
     }
}


void insertion_sort(int* arr , int len){
int temp=0;
int j=0; 
    for (int i = 1; i < len; i++) { 
        temp = *(arr+i); 
        j = i - 1; 
        while (j >= 0 && *(arr+j) > temp) { 
            *(arr+j+1) = *(arr+j); 
            j = j - 1; 
        } 
        *(arr+j+1) = temp; 
    } 
} 

