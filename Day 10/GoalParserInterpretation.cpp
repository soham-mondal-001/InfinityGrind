class Solution {
public:
    string interpret(string command) {
        string ans="";
        for(int i=0;i<command.length();i++)
        {
            if(command.substr(i,2)=="()")
            {
                ans+='o';
                i+=1;
            }
            else if(command.substr(i,4)=="(al)")
            {
                ans+="al";
                i+=3;
            }
            else
            ans+=command[i];
        }
        return ans;
    }
};