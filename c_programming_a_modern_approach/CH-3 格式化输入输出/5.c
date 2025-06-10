#include <stdio.h>

int main() {
    printf("Enter the numbers from 1 to 16 in any order: \n");
    int vals[16];
    for (int i = 0; i < 16; i++) {
        scanf("%d", &vals[i]);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d", vals[i * 4 + j]);
            if (j < 3) {
                printf("\t");
            }
        }
        printf("\n");
    }
    return 0;
}
