class Solution {
public:
    int reverse(int x) 
    {
        int res = 0, temp;

        while(x != 0)
        {
            if(res > INT_MAX/10 || res < INT_MIN/10)
            {
                return 0;
            }
            temp = x%10;
            x = x/10;
            res = res*10+temp;
        }

        return res;
    }
};
