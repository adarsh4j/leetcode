int removeDuplicates(int* nums, int numsSize){
   int n=numsSize;
    int j,intial,count;
    for(int i=0;i<numsSize-1;i++)
    {
       count=0;
       intial=i+1;
        for(int j=i+1;j<numsSize;j++)
        {
           if(*(nums+i)==*(nums+j))
           {
               
              count=count+1;
                
           }

        }
        for(int h=0;h<count;h++)
        {
            for(int k=intial;k<numsSize-1;k++)
              {
                 *(nums+k) = *(nums+k+1);

              } 
               
             numsSize= numsSize-1;
      }
    }
  
    return numsSize;
}