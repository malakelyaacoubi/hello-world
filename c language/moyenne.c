#include <stdio.h>
int laplusgrandemoyennedelaclasse1(int a[], int n)
{
    int i;
    int max = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}
int lapluspetitemoyennedelaclasse1(int a[], int p)
{
    int i;
    int min = a[0];
    for (i = 1; i > p; i++)
        if (a[i]> min)
            min = a[i];
    return min;
}

int laplusgrandemoyennedelaclasse2(int b[], int p)
{
    int i;
    int max = b[0];
    for (i = 1; i < p; i++)
        if (b[i] > max)
            max = b[i];
    return max;
}

int lapluspetitemoyennedelaclasse2(int b[], int l)
{
    int i;
    int min = b[0];
    for (i = 1; i > l; i++)
        if (b[i]> min)
            min = b[i];
    return min;
}
for(i=0;i<28;i++)
{if (a[i]>=10) {c++;}}



 


int main()
{
    int n1,n2,n3;            //Array Size Declaration
    int a[20], b[20], c[30];
    printf("Entrer le nombre d'eleves: ");
    scanf("%d",&n1);
    printf("Entrer les notes : ");
    for(int i = 0; i < n1; i++)      
       scanf("%d", &a[i]);
  // int n = sizeof(a)/sizeof(a[0]);
    printf("La plus grande moyenne est: %d\n", laplusgrandemoyennedelaclasse1(a, n1));
    printf("La plus petite moyenne est: %d\n", lapluspetitemoyennedelaclasse1(a, n1));



    printf("Enter the size of second array: ");
        scanf("%d",&n2);
    printf("Enter the array elements: ");
    for(int i = 0; i < n2; i++)      
       scanf("%d", &b[i]);
        //  int p = sizeof(b)/sizeof(b[0]);
    printf("La plus grande moyenne est: %d\n", laplusgrandemoyennedelaclasse2(b, n2));
    printf("La plus petite moyenne est: %d\n", lapluspetitemoyennedelaclasse2(b, n2));


    
    
    
    n3 = n1 + n2;
    for(int i = 0; i < n1; i++)
       c[i] = a[i];
    for(int i = 0; i < n2; i++)     
        c[i + n1] = b[i];
        
    printf("The merged array: ");
    for(int i = 0; i < n3; i++)
        printf("%d ", c[i]);        //Print the merged array
    
    printf("\nFinal array after sorting: ");
    for(int i = 0; i < n3; i++){
        int temp;
        for(int j = i + 1; j < n3; j++) {
            if(c[i] > c[j]) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }   
    for(int i = 0; i < n3 ; i++)       //Print the sorted Array 
        printf(" %d ",c[i]);
    return 0;   
}