#include <stdio.h>
int main()
{
    int n1,n2,n3;            //Array Size Declaration
    int a[13], b[15], c[28];
    printf("Enter the size of first array: ");
    scanf("%d",&n1);
    printf("Enter the array elements: ");
    for(int i = 0; i < n1; i++)      
       scanf("%d", &a[i]);
    printf("Enter the size of second array: ");
    scanf("%d",&n2);
    printf("Enter the array elements: ");
    for(int i = 0; i < n2; i++)      
       scanf("%d", &b[i]);



    n3 = n1 + n2;
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)    //this loop will run till a or b is completely traversed
    {
        if (a[i] < b[j])
            c[k++] = a[i++];    //here, as soon as we copy an element in c, we increment the iterator so that the next element is copied at next index. 
//When we copy an element from a to c, we increment i also because now we will compare with the next element of a.
        else
            c[k++] = b[j++];
    }
  
    while (i < n1)    //copying the leftover elements of a, if any
        c[k++] = a[i++];
  
    while (j < n2)    //copying the leftover elements of b, if any
        c[k++] = b[j++];
    
    printf("Final array after merging: ");
    for(int i = 0; i < n3 ; i++)       //Print the sorted Array 
        printf(" %d ",c[i]);
        float max(int nbr ,float n3[]){

        int i;
        float max=n3[0];
    for(i=0;i<nbr;i++){
        if(n3[i]>max){
        max=n3[i];
        }
        }
        return max;
  
}

float min(int nbr ,float n3[]){

        int i;
        float min=n3[0];
    for(i=0;i<nbr;i++){
        if(n3[i]<min){
        min=n3[i];
        } 
        }
        return min;
   
}

int superieur10(int nbr ,float n3[]){

        int i;
        float n=0;
    for(i=0;i<nbr;i++){
        if(n3[i]>=10){
        n++;
        }
        }
        return n;
        do{
    printf("pour remplire les moyennes des eleves de classe 1 clique sur 1 \n");
    printf("pour remplire les moyennes des eleves de classe 2 clique sur 2 \n ");
    printf("pour avoir le max des moyennes des eleves de classe 1 clique sur 3 \n ");
    printf("pour avoir le min des moyennes des eleves de classe 2 clique sur 4 \n ");
    printf("pour avoir le nombre des eleves de classe 1 ayons une moyenne superieur de 10 clique sur 5 \n ");
    printf("pour avoir le max des moyennes des eleves de classe 1 clique sur 6 \n ");
    printf("pour avoir le min des moyennes des eleves de classe 2 clique sur 7 \n ");
    printf("pour avoir le nombre des eleves de classe 1 ayons une moyenne superieur de 10 clique sur 8 \n ");
    printf("pour avoir tout les moyennes des eleves de classe 1 et 2 en ordre croissant clique sur 9 \n ");
    printf("pour afficher les moyennes des eleves de classe 1 clique sur 10 \n");
    printf("pour afficher les moyennes des eleves de classe 2 clique sur 11 \n ");
    printf("pour terminer le programme entrer 0 \n ");
    printf("entrer le numero de l'operation \n ");
    scanf("%d", &a);

   switch (a)
   {
   case 1:
      remplire(13,n1);
    break;
   case 2:
        remplire(15,n2);
    break;
   case 3:
      printf("%.2f \n",max(13,n1));
    break;
    case 4:
   printf("%.2f \n",min(13,n1));
    break;
       case 5:
       printf("%d\n",superieur10(13,n1));
    break;
       case 6:
          printf("%.2f \n",max(15,n2));
    break;
       case 7:
       printf("%.2f \n",min(15,n2));
    break;
        case 8:
        printf("%d\n",superieur10(15,n2));
    break;
       case 9:
    if(empty_check(13,n1)==0){
   tri(0,15,n1,n2,n3);}
   else if(empty_check(15,n2)==0)
   {
    tri(13,0,n1,n2,n3);
   }
   else{ printf("vous devez remplire un des deux tableaux de classe 1 ou 2 \n");}
    break;
    case 10:
          affichage(13,n1);
    break;
    case 11:
        affichage(15,n2);
    break;
   
   default:
   printf("enter un de les numeros suivants");
    break;
   }
}while(a!=0);
   
}
    
    
    
    
    
    
    
    
    return 0; 



}