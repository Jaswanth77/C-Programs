#include <stdio.h>
#include <stdbool.h>

bool canJump(int* nums, int numsSize) {
    int maxReach = 0;
    int i;
    for (i = 0; i < numsSize; ++i) {
        if (i > maxReach) {
            
            return false;
        }
        maxReach = (i + nums[i] > maxReach) ? i + nums[i] : maxReach;
        
       
        if (maxReach >= numsSize - 1) {
            return true;
        }
    }

    return false;
}

int main() {
    int nums[] = {2, 3, 1, 1, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    bool result = canJump(nums, size);
    printf("%s\n", result ? "true" : "false");

    return 0;
}

