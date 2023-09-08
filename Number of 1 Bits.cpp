class Solution {
public:
    int hammingWeight(uint32_t n) {
        
          int result = 0;
          int bitCount =0; 

        while (bitCount < 32) {
           
            
            if((n & (1<< bitCount)))
            {
                result++;
            }
             bitCount++;
           
        }

        return result;
    
    }   
};