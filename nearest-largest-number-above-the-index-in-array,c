#include <stdio.h>

int main() {
    int n, a[100], idx, lar = -1, idx1, dif = -1;

    printf("Enter the length:\n");
    scanf("%d", &n);
    printf("Enter the elements \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the index:\n");
    scanf("%d", &idx);

    for (int j = 0; j < idx; j++) {
        if (a[j] > a[idx]) {
            lar = a[j];
            idx1 = j;
        }
    }

    if (lar == -1) {
        printf("-1\n");
    } else {
        dif = idx - idx1;
        printf("%d\n", dif);
    }
    return 0;
}
