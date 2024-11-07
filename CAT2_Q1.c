/*Ref no:CT101/G/22766/24
Name: Mucheke Davis Mwangi
*/
#include <stdio.h>
#include <string.h>
// Define the structure
struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    // Initialize the structure variable
    struct employee e1 = {"John Doe", 12345, "Human Resources", 55000.50, "john.doe@company.com"};
    
    // Print the values of the fields
    printf("Name: %s\n", e1.name);
    printf("ID: %d\n", e1.id);
    printf("Department: %s\n", e1.department);
    printf("Salary: %.2f\n", e1.salary);
    printf("Email: %s\n", e1.email);
    
    return 0;
}
