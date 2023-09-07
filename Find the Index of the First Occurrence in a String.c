int strStr(char * haystack, char * needle){

   int n= strlen(needle);
   int m=strlen(haystack);
   int set =-1;
   int k,in;
   for(int i=0;i<m;i++)
   {
       if(set==-1)
       {
       if(*(haystack+i) == *(needle+0))
       { 
          set=i;
         
           for(int j=0,k=i;j<n&&k<m;j++,k++)
           {
            
               if(*(haystack + k) != *(needle + j))
               {
                   printf("yes");
                   set=-1;
               }
               in=m-i;
               if(in<n)
               {
                   set=-1;
               }
           }
          
           i=k;
       }
       }
    }
          if(set== m-1 && m>1)
           {
               
               if(n>1)
               {
                  set=-1;
               }
           }
   if(m<n)
   {
       
       set=-1;
   }

 return set;
}