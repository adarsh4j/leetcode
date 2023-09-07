void reverseString(char* s, int sSize){
   
    int n=sSize;
    char temp;
    for(int i=0,k=n-1;i<n/2;i++,k--)
    {
       temp=s[i];
       s[i]=s[k];
       s[k]=temp;
    }

}