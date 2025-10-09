int maximumCount(int* nums, int numsSize) {
    int positiveCount = 0, negativeCount = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] > 0) positiveCount++;
        else if (nums[i] < 0) negativeCount++;
    }
    if(negativeCount > positiveCount) return negativeCount;
    return positiveCount;
}
