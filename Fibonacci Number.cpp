class Solution {
public:
    int fib(int n) {
        int f=0,s=1,t;
        if(n!=0)
        {
         t=f+s;
        for(int i=1;i<n;i++)
        {
            t=f+s;
            f=s;
            s=t;
        }
        return t;
        }
        return 0;
    }
};