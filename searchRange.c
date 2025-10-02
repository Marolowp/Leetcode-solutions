/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int cont = 0;
  
    *returnSize = 2;
    int *array = (int*)malloc(2 * sizeof(int));

    array[cont] = -1;
    array[cont + 1] = -1;

    for (int i = 0; i < numsSize; i++){
        if (nums[i] == target){
            array[cont] = i;
            break;
        }
    }
    for (int i = numsSize - 1; i >= 0; i--){
        if (nums[i] == target){
            array[cont + 1] = i;
            break;
        }
    }
  
    return array;
}
