#include "stdio.h"

int main() {
    int number[5] = {1, 2, 3, 4, 5};
    int index = 0;
    int *p = &number[0];
    int a = 1;

    printf("数组的长度是:%d， int的长度是:%d\n", sizeof(p), sizeof(a));

    printf("数组的元素分别是:\n");

    for (index = 0; index < sizeof(p); index++) {
        printf("%d ", number[index]);
    }
    printf("\n");
    return 0;
}