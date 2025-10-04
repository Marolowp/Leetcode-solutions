int differenceOfSum(int* nums, int numsSize) {
    int sumElement = 0, sumDigit = 0;
    
    for (int i = 0; i < numsSize; i++){
        sumElement += nums[i];
        if (nums[i] >= 10){
            int aux1 = nums[i];
            while (aux1 > 0){
                sumDigit += aux1 % 10;
                aux1 /= 10;
            }
        }
        else {
            sumDigit += nums[i];
        }
    }

    return abs(sumElement - sumDigit);
}
