#include <stdio.h>
#include<math.h>
int main() {
    int terms;
    float sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    for (int i = 1; i <= terms; i++) {
        sum+=(i/pow(i,2));
        printf("Current Value :%g \n",sum);
    }

    printf("\033[1;33mSum is below \033[0m\n");
    printf("Sum of all terms: %g\n", sum);

    return 0;
}
