class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        char s1[n];
        int j,i,k;
        
        for(i=0,j=0;i<n;i++)
        {
            if(s[i]<91&& s[i]>=65 || s[i]>=97 && s[i]<=122 || s[i]>=48 && s[i]<=57)
            {
                 s1[j++]=tolower(s[i]);
                 
            }
           }
        
        
         int n1= j;
        
         int set =1;
         for(k=n1-1,i=0;i<n1/2 && k>=0;k--,i++)
         {
            if(s1[i]!=s1[k])
            {
                set=-1;
            }
         }
         
         if(set==1)
         {
             return true;
         }
         return false;
    }
  
};