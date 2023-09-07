int missingNumber(int* nums, int numsSize){
     int m,temp;
     for(int i=0;i<numsSize-1;i++)
     {
         for(int j=i+1;j<numsSize;j++)
         {
           if(*(nums+i)>*(nums+j))
           {
             temp=*(nums+i);
             *(nums+i)=*(nums+j);
             *(nums+j)=temp;
           }
         }
     }
     for(int i=0;i<numsSize;i++)
     {
        if(*(nums+i)!=i)
        {
 
          return i;       
        }
     }
     return numsSize;
}