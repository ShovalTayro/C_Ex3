#include <stdio.h>
#include "txtfind.h"

int main(){
char search[WORD];
char read;
char option;
int i = 0;
 while((read = getc(stdin)) != ' ')
{    
	search[i] =read;
	i++;
}
search[i] ='\0';

while((read = getc(stdin)) != '\n'){
if(read == 'a') option ='a';
if(read == 'b') option ='b';
}

switch(option){
case 'a':
print_lines(search);
break;
case 'b' : 
print_similar_words(search);
break;
default:
printf("wrong input");
}
return 0;
}
