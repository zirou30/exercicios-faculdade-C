#include <stdio.h>


int main() {
  
  int num1, num2, num3;

  
  printf("Digite um numero: ");
  scanf("%d", &num1);


  printf("Digite um segundo número: ");
  scanf("%d", &num2);


  printf("Digite um terceiro número: ");
  scanf("%d", &num3);


 
  if (num1 <= num2 && num2 <= num3)
    {
      printf("%d %d %d\n", num1, num2, num3);
    }
  else if (num1 <= num3 && num3 <= num2)
    {
      printf("%d %d %d\n", num1, num3, num2);
    }
  else if (num2 <= num1 && num1 <= num3)
    {
      printf("%d %d %d\n", num2, num1, num3);
    }
  else if (num2 <= num3 && num3 <= num1) 
    {
      printf("%d %d %d\n", num2, num3, num1);
    }
  else if (num3 <= num1 && num1 <= num2) 
    {
      printf("%d %d %d\n", num3, num1, num2);
    }
  else 
    {
      printf("%d %d %d\n", num3, num2, num1);
    }

}