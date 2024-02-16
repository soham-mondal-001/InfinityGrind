class Solution {
private:
    bool line(vector<string>& board,char x)
    {
        string str;
        for(int i=0;i<3;i++)
        str+=x;
        for(int i=0;i<3;i++)
        if(str==board[i])
        return 1;
        if(board[0][0]==x&&board[1][1]==x&&board[2][2]==x)
        return 1;
        if(board[0][2]==x&&board[1][1]==x&&board[2][0]==x)
        return 1;
        for(int i=0;i<3;i++)
        {
            string s;
            for(int j=0;j<3;j++)
                s=s+board[j][i];
            if(str==s)
            return 1;
        }
        return 0;
    }
public:
    bool validTicTacToe(vector<string>& board) {
        int xcount=0,ocount=0,i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(board[i][j]=='X')
                xcount++;
                else if(board[i][j]=='O')
                ocount++;
            }
        }
        if(ocount==xcount)
        {
            if(line(board,'X'))
                return 0;
            else
                return 1;
        }
        else if(xcount-ocount==1)
        {
            if(line(board,'O'))
                return 0;
            else
                return 1;
        }
        else
        return 0;
    }
};