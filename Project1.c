#include <stdio.h>

int main() {
    int choice, n;

    printf("===== Number Pattern Generator =====\n");
    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("\nChoose a pattern:\n");
    printf("1. Increasing Number Pattern\n");
    printf("2. Decreasing Number Pattern\n");
    printf("3. Repeated Number Pattern\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            // Increasing pattern
            for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= i; j++) {
                    printf("%d", j);
                }
                printf("\n");
            }
            break;

        case 2:
            // Decreasing pattern
            for(int i = n; i >= 1; i--) {
                for(int j = 1; j <= i; j++) {
                    printf("%d", j);
                }
                printf("\n");
            }
            break;

        case 3:
            // Repeated number pattern
            for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= i; j++) {
                    printf("%d", i);
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}
