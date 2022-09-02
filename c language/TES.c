#include <stdio.h>
#include <stdlib.h>

void remplire(int nbr ,float tb[]){

    int i;
    for(i=0;i<nbr;i++){
        if(tb[i-1]>20 || tb[i-1]<0)
        {
            printf("vous devez entrer un nembre entre 0 et 20 \n");
            break;
        }
        else{
        printf("entrer nombre numero %d \n",i+1 );
        scanf("%f",&tb[i]);
        }
    }
}

void affichage(int nbr ,float tb[]){

    int i;
    for(i=0;i<nbr;i++){
        printf("case numero %d :%.2f \n",i+1,tb[i]);
    }
}

float max(int nbr ,float tb[]){

        int i;
        float max=tb[0];
    for(i=0;i<nbr;i++){
        if(tb[i]>max){
        max=tb[i];
        }
        }
        return max;
  
}

float min(int nbr ,float tb[]){

        int i;
        float min=tb[0];
    for(i=0;i<nbr;i++){
        if(tb[i]<min){
        min=tb[i];
        } 
        }
        return min;
   
}

int superieur10(int nbr ,float tb[]){

        int i;
        float n=0;
    for(i=0;i<nbr;i++){
        if(tb[i]>=10){
        n++;
        }
        }
        return n;
   
}

void tri(int nbr1,int nbr2,float tb1[],float tb2[],float tb[]){

        int i,k=nbr1,j,nbr3=nbr1+nbr2;
        float n=0,tmp;
    for(i=0;i<nbr1;i++){
        tb[i]=tb1[i];}
    for(i=0;i<nbr2;i++){
        tb[k]=tb2[i];
        k++;}
    for(i=0;i<nbr3-1;i++){
        for(j=i+1;j<nbr3;j++){
        if(tb[i]>tb[j]){
         tmp=tb[i];
         tb[i]=tb[j];
         tb[j]=tmp;
         }
        }
    }
    for(i=0;i<nbr3;i++){
        printf("case numero %d :%.2f \n",i+1,tb[i]);
    }
   
}

int empty_check(int nbr,float tb[]){
  int i,n=0;
      for(i=0;i<nbr;i++){
        if(tb[i]==0){
            n++;
        };
    }
    if(n==nbr){return 1;}  
    else{return 0;}
          

}



int main(){
   float tb1[13],tb2[15],tb[28];
   int a;
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
      remplire(13,tb1);
    break;
   case 2:
        remplire(15,tb2);
    break;
   case 3:
      printf("%.2f \n",max(13,tb1));
    break;
    case 4:
   printf("%.2f \n",min(13,tb1));
    break;
       case 5:
       printf("%d\n",superieur10(13,tb1));
    break;
       case 6:
          printf("%.2f \n",max(15,tb2));
    break;
       case 7:
       printf("%.2f \n",min(15,tb2));
    break;
        case 8:
        printf("%d\n",superieur10(15,tb2));
    break;
       case 9:
    if(empty_check(13,tb1)==0){
   tri(0,15,tb1,tb2,tb);}
   else if(empty_check(15,tb2)==0)
   {
    tri(13,0,tb1,tb2,tb);
   }
   else{ printf("vous devez remplire un des deux tableaux de classe 1 ou 2 \n");}
    break;
    case 10:
          affichage(13,tb1);
    break;
    case 11:
        affichage(15,tb2);
    break;
   
   default:
   printf("enter un de les numeros suivants");
    break;
   }
}while(a!=0);



    return 0;
}