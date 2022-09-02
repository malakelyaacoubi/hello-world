#include <stdio.h>
 int main ()
 {
  int A,B ;
  char op ;
  
  printf(" entrer le nombre A:");
  scanf("%d",&A);
  printf(" entrer le nombre OP:");
  scanf("%s",&op);
  printf(" entrer le nombre B:");
  scanf("%d",&B);

if (op =='+')
{
    printf("%d", A+B);
}

else if (op=='*')
{
    printf("%d", A*B);
}
 
 else if  (op=='/' && B != 0 ){
 printf("%d", A/B);
 }
 
 else
 {
    printf("ERROR");
 }
 }
 


