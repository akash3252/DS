#include<stdio.h>
struct Employee
{
int emp_id;
char name[50];
float salary;
};
int main()
{
struct Employee e[3];
int i;
printf("enter details of 3 employees\n");
for(i=0;i<3;i++){
printf("employee %d:\n",i+1);
printf("enter employee id:\n");
scanf("%d",&e[i].emp_id);
printf("enter the name :\n");
scanf("%s",e[i].name);
printf("enter salary:\n");
scanf("%f",&e[i].salary);
}
printf("\n ---------employee details------------\n");
for(i=0;i<3;i++)
{
printf("\n employee %d\n",i+1);
printf("employee id :%d\n",e[i].emp_id);
printf("Name: %s\n",e[i].name);
printf("Salary :%.2f\n",e[i].salary);
}
return 0;
}
