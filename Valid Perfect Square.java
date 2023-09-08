class Solution {
    public boolean isPerfectSquare(int num) {
        int flag;
        if(num>10)
        {
        for(int i=1;i<=num/3;i++)
        {
            if((i*i)==num)
            {
                return true;
            }
        }
        }
        else
        {
            for(int i=1;i<=num/2;i++)
            {
            if((i*i)==num)
            {
                return true;
            }
           }
           if(num==1)
             return true;
        }
        return false;
    }
}