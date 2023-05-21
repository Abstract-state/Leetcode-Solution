class Solution {
public:
    string convert(string s, int numRows) {
      if (numRows == 1)
      {
        return s;
      }

      string ans;
      int midjump;
      for(int i = 0; i < numRows; i++)
      {
        int jump = 2*(numRows - 1);
        for(int j = i; j < s.length(); j+=jump)
        {
          ans+=s[j];
          midjump = j+jump - 2*i;
          if(i>0 && i<numRows-1  && midjump < s.length())
          {
            ans+=s[midjump];
          }
        }
      }
      return ans; 
    }
};
