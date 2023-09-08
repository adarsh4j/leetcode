class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        int bitCount = 32; 

        while (bitCount > 0) {
            result = (result << 1) | (n & 1); 
            n >>= 1;
            bitCount--;
        }

        return result;
    }
};
