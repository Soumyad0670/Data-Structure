#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 * @param nums Array of integers
 * @param numsSize Size of the array
 * @param target Target sum
 * @param returnSize Pointer to store size of returned array
 * @return int* Array containing two indices
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    
    return result;
}

// Main function for testing
int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    
    int* result = twoSum(nums, 4, target, &returnSize);
    
    printf("Indices: [%d, %d]\n", result[0], result[1]);
    
    free(result);
    return 0;
}