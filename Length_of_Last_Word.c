int lengthOfLastWord(char * s){
    
    int n=strlen(s);
    int count=0,set=0;
    printf("%d",n);
    for(int i=0;i<n;i++)
    {
       if(*(s+i)==' ')
         { 
             set=1;
         }
    }
    if(set==1)
    {

     for(int i=n-1;i>=0;i--)
     {
         if(*(s+i)!=' ')
         {
             for(int k=i;k>=0;k--)
             {
                 
                 if(*(s+k)==' ')
                  {
                      return count;
                  }
                  else if(k==0)
                  {
                      return ++count;
                  }
                  count++;
             }
         }
     }
    }
    else
    {
        return n;
    }
    
     return count;
}