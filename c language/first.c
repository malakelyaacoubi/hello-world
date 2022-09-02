#include <stdio.h>
#include <math.h>


int main()
{
  int temp,reminder,number,sum=0,count=0;
  printf("entrer un nbr entier:/n"); 
  scanf("%d",&number);
   temp=number;
   while (temp!=0)
   {
    temp = temp/10;
    count = count +1;
    }
   temp=number;
  
   while(temp>0)
   {
   reminder = temp %10;
   sum=sum+pow(reminder,count);
   temp=temp/10;
   }

   if (sum==number)
   {
    printf("%d est un nombre armstrong", number);
    }
   else {
    printf("%d n'est un nombre armstrong", number);
    }

   return 0;


}