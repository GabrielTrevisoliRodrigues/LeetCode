bool canJump(int* nums, int numsSize) {
    int alcanceMax = nums[0];

    for(int i = 0; i <= alcanceMax && i < numsSize; i++){
        if(nums[i] + i > alcanceMax){
            alcanceMax = nums[i] + i;
        }
    }

    if(alcanceMax >= numsSize - 1){
        return true;
    } else {
        return false;
    }

    
}