class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans;
        for(int i=1;i<=32;i++)
        {
            ans=ans<<1;
            int bit=n&1;
            ans=ans+bit;
            n=n>>1;
        }
        return ans;
    }
};