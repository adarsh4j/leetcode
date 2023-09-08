class Solution {
    public int singleNumber(int[] nums) {
       int n = nums.length;
       int count=0;
        for(int i =0;i<n;i++)
        {
           count=0;
           for(int j=0;j<n;j++)
           {
               if(nums[i]==nums[j] && i!=j)
               {
                   break;
               }
               count++;

           }
           if(count==n)
           {
               return nums[i];
           }
              
        }
        return 0;
    }
}