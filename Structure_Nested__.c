#include <stdio.h>
#include <string.h>

struct Organisation_2
{
    char organisation_name[20];
    char org_number[20];

    // Declaration of the dependent
    // structure
    struct Employee_2
    {
        int employee_id;
        char name[20];
        int salary;

        // variable is created which acts
        // as member to Organisation structure.
    } emp;   // এইkhane একটা নাম না দিলে program চলবে nah .
};

int main()
{
    struct Organisation_2 organ;
    
  // Print the size of organisation 
  // structure
  printf("The size of structure organisation : %ld\n", 
          sizeof(organ));
    
  organ.emp.employee_id = 101;  
  strcpy(organ.emp.name, "Robert");
  organ.emp.salary = 400000;
  strcpy(organ.organisation_name, 
         "GeeksforGeeks");
  strcpy(organ.org_number, "GFG123768");
    
    
  // Printing the details
  printf("Organisation Name : %s\n", 
          organ.organisation_name);  
  printf("Organisation Number : %s\n", 
          organ.org_number);  
  printf("Employee id : %d\n", 
          organ.emp.employee_id);  
  printf("Employee name : %s\n", 
          organ.emp.name);  
  printf("Employee Salary : %d\n", 
          organ.emp.salary);  

    return 0;




    return 0;
}