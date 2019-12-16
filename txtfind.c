#include <stdio.h>
#include "txtfind.h"


//int getLine(char s[]){
//int i =0;
//while(i< LINE && s[i]!='\n'){
//i++;
//}
//return i;
//}


int getWord(char w[]){
int i =0;
while(i< WORD && w[i]!='\0'){
i++;
}
return i;
}


int substring( char * str1, char * str2)
{
int size1 =getWord(str1);
int size2 = getWord(str2);
if(size1 < size2) return 0;
else{
    for(int i =0; i<=size1-size2; i++){
     int j;
        for( j = 0; j < size2; j++){
	 if(str1[i+j] != str2[j]) break; 
}  		
          if(j==size2) return 1;
}

return 0;
}
}


int similar (char *s, char *t, int n){
int sizeS= getWord(s);
int sizeT =getWord(t);
int i =0;
int j = 0;
int count=0;
if(sizeT > sizeS) return 0;
else{
while(j < sizeT && i < sizeS) {
     if(*(s+i) == *(t+j)) {
	i++;
	j++;
      }
     else{
       count++;
       i++;
      }
    }
if(count > n) return 0;
else if(count == n && i < sizeS) return 0;
else{
return 1;
}
}
}

void print_lines(char *str){
char letter;
char line[LINE];
char temp[WORD];
while ((letter = getc(stdin)) != EOF){
        int i= 1 ;
line[0] = letter;
      while ( (letter = getc(stdin)) != '\n'){
            line[i] = letter;
             i++;
      }
line[i] ='\n';   
      for(int j = 0 ; j < i; j++){
int t = 0;
         while((line[j] != '\t') && (line[j] != ' ') && (line[j]!= '\n')){
               temp[t] = line[j]; 
                j++;
t++;
         }
	temp[t]='\0';
int ans = substring(temp, str);
         if(ans == 1){
           printf("%s", line);
            i = 0;  
         }
      }
    }
}

void print_similar_words(char *str){
char word[WORD];
char read;

while ((read = getc(stdin)) != EOF){
int i =1;
word[0] = read;
while ((read = getc(stdin)) != '\n' && read != ' ' && read!= '\t'){
           word[i]=read;
           i++;
         }
	word[i]='\0';
i = 0;
int ans = similar(word,str, 1);
    if(ans ==1){
	printf("%s\n", word);
	   }
}
}  








