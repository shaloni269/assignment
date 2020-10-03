#include <stdio.h>
#include <stdlib.h>
struct employee
{
    int id;
    char name[20];
    int salary;
    int experience[30];
};
int main()
{
    struct employee  emp[5];
    int i=0;
    printf("employee details:\n ");
    for(i=0;i<5;i++)
    {
        printf("enter id of employee \n");
        scanf("%d",&emp[i].id);
        printf("enter name of employee\n");
        scanf("%s" , &emp[i].name);
        printf("enter salary of employee\n");
        scanf("%d" , &emp[i].salary);
        printf("enter experience\n");
        scanf("%d" , &emp[i].experience);
    }
    for(i=0;i<5;i++)
    {
        printf("%d " , emp[i].id);
        printf("%s " , emp[i].name);
        printf("%d"  ,  emp[i].salary);
        printf("%d" , emp[i].experience);
        printf("\n");

    }
    return 0;
}
