#include <stdio.h>
int main()
 {
    float basicSalary, grossSalary, HRA, DA;
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);
    if (basicSalary >= 30000) 
	{
        HRA = 0.3 * basicSalary;
        DA = 0.95 * basicSalary;
    }
	 else 
	 if (basicSalary >= 20000) 
	 {
        HRA = 0.25 * basicSalary;
        DA = 0.9 * basicSalary;
    } 
	else
	 if (basicSalary >= 10000) 
	 {
        HRA = 0.2 * basicSalary;
        DA = 0.8 * basicSalary;
    } 
	else {
        HRA = 0.0;
        DA = 0.0;
    }
    grossSalary = basicSalary + HRA + DA;
    printf("Gross Salary: %f", grossSalary);
    return 0;
}

