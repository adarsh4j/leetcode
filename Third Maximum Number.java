class Solution {
    public int thirdMax(int[] nums) {
        int lar=-2147483648;
        int flag1=0,flag2=0;
        for(int i=0;i<nums.length;i++)
        {
           if(nums[i]>=lar)
           {
               lar=nums[i];
           }
        }

        int lar1=-2147483648;
        for(int i=0;i<nums.length;i++)
        {
           if(nums[i]>=lar1 && nums[i]<lar )
           {
               lar1=nums[i];
               flag1=1;
           }
        }
        int lar2=-2147483648;
        
         
        for(int i=0;i<nums.length;i++)
        {
            
           if(nums[i]>=lar2 && nums[i]<lar &&nums[i]<lar1 )
           {
              
               lar2=nums[i];
               flag2=1;
           }
        }

     if(flag2==0 || flag1==0)
     {
         return lar;
     }
     return lar2;


    }
}