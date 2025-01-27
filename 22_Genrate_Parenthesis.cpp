class Solution {
public:
    void findall(string curr, int o, int c, vector<string> &res, int n)
    {
        if(curr.length() == 2*n)
        {
            res.push_back(curr);
            return;
        }

        if(o<n)
        {
            findall(curr+"(",o+1,c,res,n);
        }
        if(c<o)
        {
            findall(curr+")",o,c+1,res,n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        findall("",0,0,res,n);
        return res;
    }
};