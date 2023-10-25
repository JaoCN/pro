#include "stdio.h"


void print(int number[5]) {
    int index = 0;

    printf("函数print中，数组长度是%d ", sizeof(number));
    
    printf("函数中数组的元素分别为:\n");

    for (index = 0; index < sizeof(number) / sizeof(number[0]); index++) {
        printf("%d ", number[index]);
    }

    printf("\n");
}

void print(int number[5], int size) {
    int index = 0;

    printf("函数print中，数组个数是%d ", size);
    
    printf("函数中数组的元素分别为:\n");

    for (index = 0; index < size; index++) {
        printf("%d ", number[index]);
    }

    printf("\n");
}


int main() {
    int number[5] = {1, 2, 3, 4, 5};

    print(number);

    printf("=====\n");

    int size = sizeof(number) / sizeof(number[0]);

    print(number, size);

    return 0;
}