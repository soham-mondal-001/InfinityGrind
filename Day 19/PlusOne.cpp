class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1,i,newcarry;
        for(i=digits.size()-1;i>=0&&carry>0;i--)
        {
            newcarry=(digits[i]+carry)/10;
            digits[i]=(digits[i]+carry)%10;
            carry=newcarry;
        }
        if(carry>0)
        {
            for(i=1;i<digits.size();i++)
                digits[i]=0;
            digits[0]=1;
            digits.push_back(0);
        }
        return digits;
    }
};