#include <stdio.h>
struct Employee {
    float salary;};
int main() {
    int n;
    float total = 0, average;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee e[n];
    for (int i = 0; i < n; i++) {
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &e[i].salary);
        total += e[i].salary;
    }
    average = total / n;
    printf("Average salary = %.2f\n", average);

    return 0;
}
