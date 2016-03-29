#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main(){
   
  char letra;
  int i = 0;


  for (letra = 'A'; letra < 'Z'; letra++) {
      if (i % 2 == 0) {
        printf("%c", toupper(letra));
      }
      else {
        printf("%c", tolower(letra));
      }
      i++;
    } 
  printf("\n");
}




