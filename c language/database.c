#include"stdio.h"
#include"conio.h"

void addsworkers();
void workersrecords();
void workerssearch();
void delete();

   struct workers {
    char first_name [20];
    char last_name [20];
    char post[5] ;
    int  salaire [5];
    };


    void main ()
     {
     int choice;

        while(choice != 5)
        printf("\t\t\t ===== WORKERS DATABASE MANAGEMENT SYSTEM===== ");
        printf("\n\n\n\t\t\t\t     1. Add   an employee\n");
        printf("\t\t\t\t     2. employee's Records\n");
        printf("\t\t\t\t     3. Search Student\n");
        printf("\t\t\t\t     4. Delete Student\n");
        printf("\t\t\t\t     5. Exit\n");
        printf("\t\t\t\t    _____________________\n");
        printf("\t\t\t\t     ");
        scanf("%d",&choice);



switch ( choice ){
    
case'1':
        //   clrscr();
          addsworkers();
        // //   clrscr();
break;
get conio.h

case'2':
        //   clrscr();
          workersrecords();
        //   clrscr();
break;
case'3':
        //   clrscr();
          workerssearch();
        //   clrscr();
break;
case'4':
        //   clrscr();
          delete();
        //   clrscr();
break;
}
}
void addsworkers();
    struct workers info ;
    FILE *f;


    clrscr();
     f=fopen("data.txt","a");
            printf("\t\t\t\t=======Add Workers Info=======\n\n\n"); 
            
          printf("\n\t\t\tEnter First Name     : ");
          scanf("%s",&info.first_name);
          printf("\n\t\t\tEnter Last Name     : ");
          scanf("%s",&info.last_name);
          printf("\n\t\t\tEnter Roll-No       : ");
          scanf("%d",&info.roll_no);
          printf("\n\t\t\tEnter the post : ");
          scanf("%s",&info.post);
