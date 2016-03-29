#include <stdio.h>
#include <string.h>
#include <ctype.h> 
int main(){
   
    char alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm','n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'w', 'y', 'z'};
   
    for (int i = 0; i <= 25; i++) {
       
        if (i % 2 == 0) {
            printf("%c", toupper(alfabeto[i]));
        }
        else {
            printf("%c", alfabeto[i]);  
        }
       
    }
    printf("\n");
   
}