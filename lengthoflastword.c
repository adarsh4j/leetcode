int lengthOfLastWord(char * s){
    int m=strlen(s);
    int count=0;
    int i=m-1;
    while(i>=0 && s[i]==' ')
    {
        i--;
    }
    while(i>=0 && s[i]!=' ')
    {
        count++;
        i--;
    }
  return count;
}
