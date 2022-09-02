#include <stdio.h>
#include <stdlib.h>
 void main ()
 {
  int A,B ;
  char op ;
  
  printf(" entrer le nombre A:");
  scanf("%d",&A);
  printf(" entrer le nombre OP:");
  scanf("%s",&op);
  printf(" entrer le nombre B:");
  scanf("%d",&B);
  
switch (op)
  {
  case '+':
  printf("%d", A+B);
  break;
  
  case '-':
  printf("%d", A-B);
  break;
  
  case '*':
  printf("%d", A*B);
  break;
  
  case '/':
  if ( B != 0)
  {
    printf("%d",A/B);
    }
 else 
  {
    printf("ERROR");
    }
  break;
  case 'q':
  printf("End of the program....\n");
   exit(0);
   
  break;
  
  default:
  printf("OPERATION NON RECONNU!!!!!");

    break;
  } 


  }
 







  






