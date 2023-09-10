class Solution {
public:
    string reverseVowels(string s) {
        int n = s.length();
        int seti=0,setj=0,count=0;
        for(int i=0,j=n-1;i<=j &&count<n;)
        {
           seti=0;
           setj=0;
           count++;
           if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
           {
              if(s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U')
              {
                 i++;
                 seti=1;
              }
           }
           if(s[j]!='a'&&s[j]!='e'&&s[j]!='i'&&s[j]!='o'&&s[j]!='u')
           {
              if(s[j]!='A'&&s[j]!='E'&&s[j]!='I'&&s[j]!='O'&&s[j]!='U')
              {
                 j--;
                 setj=1;
              }
           }
           if(seti==0&&setj==0)
           {
              char temp =s[i];
              s[i]=s[j];
              s[j]=temp;
              i++;
              j--;
           }

        }
        return s;
    } 
};