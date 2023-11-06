#include <stdio.h>
struct Employee 
{
    int employeeId;
    char name[50];
    float salary;
};

void main() 
{
    struct Employee emp1;
    emp1.employeeId = 101;
    strcpy(emp1.name, "John Smith");
    emp1.salary = 50000.0;
    printf("Employee ID: %d\n", emp1.employeeId);
    printf("Name: %s\n", emp1.name);
    printf("Salary: %.2f\n", emp1.salary);
}
