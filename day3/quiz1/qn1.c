#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1;
    int i;
    for (i = digitsSize - 1; i >= 0; --i) {
        digits[i] += carry;
        carry = digits[i] / 10;
        digits[i] %= 10;
    }
    
    if (carry) {
        *returnSize = digitsSize + 1;
        int* result = (int*)malloc((*returnSize) * sizeof(int));
        result[0] = carry;
        for (i = 1; i < *returnSize; ++i) {
            result[i] = digits[i - 1];
        }
        return result;
    } else {
        *returnSize = digitsSize;
        return digits;
    }
}

int main() {
    int digits1[] = {9,9,9};
    int size1 = sizeof(digits1) / sizeof(digits1[0]);
    int returnSize1,i;

    int* result1 = plusOne(digits1, size1, &returnSize1);

    printf("[");
    for (i = 0; i < returnSize1; ++i) {
        printf("%d", result1[i]);
        if (i < returnSize1 - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}

