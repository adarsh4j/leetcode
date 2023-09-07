int search(int* nums, int numsSize, int target){
    int begin=0,end=numsSize-1,mid;
    while(begin<=end)
    {
        mid=begin+(end - begin) /2;
        if(*(nums+mid)==target)
        {
            return mid;
        }

        if(*(nums+mid) > target)
        {
            end=mid-1;
        }
        else
        {
            begin=mid+1;
        }
       
    }
 return -1;
}