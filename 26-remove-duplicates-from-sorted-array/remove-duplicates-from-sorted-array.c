int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0)
        return 0;
    int write = 0,read=1;
    while(read < numsSize)
    {
        if(nums[write] != nums[read])
        {
            write++;
            nums[write] = nums[read];
        }
        read++;
    }
    return write + 1;
}