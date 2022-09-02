#include <stdio.h>
 void main ()
 {
   float A,B ,R;

  
  printf(" entrer le nombre A:");
  scanf("%f",&A);
  printf(" entrer le nombre B:");
  scanf("%f",&B);
   if (A!=0){
   R=(A-B)/A;
   printf("le resultat est: %f",R);}
   else{ printf("le resultat  non reconnu");}
 }