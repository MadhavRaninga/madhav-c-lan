#include <stdio.h>

int main(){
    int salary,hra,da,ta,grosssalary;

    printf("Base Salary : ");
    scanf("%d",&salary);

    printf("HRA : ");
    scanf("%d",&hra);

    printf("DA : ");
    scanf("%d",&da);

    printf("TA : ");
    scanf("%d",&ta);

    grosssalary = salary + (salary*hra/100) + (salary*da/100) + (salary*ta/100);

    printf("GROSS SALARY : %d",grosssalary);

}