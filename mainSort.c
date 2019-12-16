#include <stdio.h>
#include "isort.h"


int main() {
int numbers[SIZE]={0};
int *point =  numbers;
for(int i =0; i<SIZE; i++){
   scanf("%d", (point++));
      }
	insertion_sort(numbers , SIZE);
        for(int j=0;j<SIZE; j++){
	if(j!= SIZE) printf("%d," , *(numbers+j));
	 else{
 printf("%d" , *(numbers+j));
}
	}
return 0;
}
