class Solution {
public:
    bool isPalindrome(int x) {
        string strX = to_string(x);
        return strX == string(strX.rbegin(), strX.rend());
    }
};
