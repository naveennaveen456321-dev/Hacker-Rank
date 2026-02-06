#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    int mid = n - 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < mid - i; j++)
            printf(" ");
        printf("*");

        if (i > 0) {
            for (j = 0; j < 2 * i - 1; j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 2; i >= 0; i--) {
        for (j = 0; j < mid - i; j++)
            printf(" ");

        printf("*");

        if (i > 0) {
            for (j = 0; j < 2 * i - 1; j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
