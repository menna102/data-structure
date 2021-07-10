#include <stdio.h>
# include <string.h>
# include <stdlib.h>
const int size;

int j;
int x=0;

struct student
       {
          char name [50];
          int day,month,year;
          int id;
          float grade ;
       } *tag;

void insertatBegin()

{
    tag=realloc(tag,(x+1)*sizeof(*tag));
     if (j==NULL)
     {

         printf("Enter the student name\n");
          fflush(stdin);
          scanf("%s",tag[x].name);
          printf("Enter the student birth DD\MM\YY\n");
          scanf("%d  %d  %d",&tag[x].day ,&tag[x].month,&tag[x].year);
          printf("Enter the student id\n");
          scanf("%d",&tag[x].id);
          printf("Enter the grade\n");
          fflush(stdin);
          scanf("%f",&tag[x].grade);
         ++j;
     }
     else
        { for (int i=j;i>=0;i--)
        {
            tag[i+1].day=tag[i].day;

           tag[i+1].grade=tag[i].grade;
           tag[i+1].id=tag[i].id;
           tag[i+1].month=tag[i].month;
           strcpy(tag[i+1].name ,tag[i].name);
           tag[i+1].year=tag[i].year ;   }
           printf("Enter the student name\n");
          fflush(stdin);
          scanf("%s",tag[0].name);
          printf("Enter the student birth DD\MM\YY\n");
          scanf("%d  %d  %d",&tag[0].day ,&tag[0].month,&tag[0].year);
          printf("Enter the student id\n");
          scanf("%d",&tag[0].id);
          printf("Enter the grade\n");
          fflush(stdin);
          scanf("%f",&tag[0].grade);
         j++;

        }
        x++;
        }


void insertatEnd()
{
   tag=realloc(tag,(x+1)*sizeof(*tag));
     int p=0;
    for (int i=0;i<x;i++)
    {
        p++;
    };
    printf("Enter the student name\n");
          scanf("%s",tag[p].name);
          printf("Enter the student birth DD\MM\YY\n");
          scanf("%d  %d  %d",&tag[p].day ,&tag[p].month,&tag[p].year);
          printf("Enter the student id\n");
          scanf("%d",&tag[p].id);
          printf("Enter the grade\n");
          scanf("%f",&tag[p].grade);
          x++;

}
void insertatMiddle()
{
     tag=realloc(tag,(x+1)*sizeof(*tag));
     int p=((x%2)==0)?(x/2):((x+1)/2);
     printf("%d" ,p);
for (int i=p;i>=0;i--)
        {
            tag[i+1].day=tag[i].day;

           tag[i+1].grade=tag[i].grade;
           tag[i+1].id=tag[i].id;
           tag[i+1].month=tag[i].month;
           strcpy(tag[i+1].name ,tag[i].name);
           tag[i+1].year=tag[i].year ;   }


    printf("Enter the student name\n");

          scanf("%s",tag[p].name);
          printf("Enter the student birth DD\MM\YY\n");
          scanf("%d  %d  %d",&tag[p].day ,&tag[p].month,&tag[p].year);
          printf("Enter the student id\n");
          scanf("%d",&tag[p].id);
          printf("Enter the grade\n");
          scanf("%f",&tag[p].grade);
          x++;

}
void display( )
{
    for (int n = 0; n < x; n++ ) {
          printf ( "%s is %d %d %d , id is %d, grade is %f \n",
                tag [ n ].name, tag [ n ].day,tag [ n ].month,tag [ n ].year, tag [ n ].id, tag [ n ].grade);
       }
}
    int main ()
    {int i;
          struct student *tag=(struct student*) malloc(sizeof(*tag));
          do{
          printf("Enter the place to enter the student at the  \n  1- begin  2- middle 3- end  4- display \n ");
          scanf("%d",&i);
          switch(i)
          {
          case 1:
            insertatBegin(tag,x);
             break;
          case 2:
            insertatMiddle(tag,x);
            break;
          case 3:
        insertatEnd(tag,x);
            break;
          case 4:
            display ();
            break;

          }
          }
          while (1);

       return 0;

    }
