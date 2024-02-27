class Solution {
    void solve(string digits,vector<string> chars,int i,string output,vector<string>& ans)
    {
        if(i==digits.length())
        {
            if(output.length()>0)
            ans.push_back(output);
            return;
        }
        char number=digits[i];
        int n=number-'0';
        string requiredchars=chars[n];
        for(int j=0;j<requiredchars.length();j++)
        {
            solve(digits,chars,i+1,output+requiredchars[j],ans);
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        vector<string> chars={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,chars,0,"",ans);
        return ans;
    }
};