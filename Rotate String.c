bool rotateString(char * s, char * goal){
   
    int n=strlen(s);
    for(int i=0;i<strlen(s);i++)
    {
        char temp=s[0];
        for(int j=0;j<n-1;j++)
        {
            s[j]=s[j+1];
             
            
        }
        s[n-1]=temp;
          printf("\n%s",s);
        if(!strcmp(s,goal))
        {
            return true;
        }
        
    }
    printf("%s",s);
    if(!strcmp(s,goal))
    {
        return true;
    }
    return false;

}