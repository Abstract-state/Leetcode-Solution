class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int s1 = nums1.size();
        int s2 = nums2.size();
        vector<int> res;
        int i = 0;

        while(s1 != 0)
        {
            s1--;
            res.push_back(nums1[s1]);
        }
        while(s2 != 0)
        {
            s2--;
            res.push_back(nums2[s2]);
        }
        i = res.size();
        sort(res.begin(), res.end());
        double r = 0;
        if(i%2 == 0)
        {
            r = double(res[(i/2)-1]+res[(i/2)])/2;
        }
        else{
            r = res[(i-1)/2];
        }
       return r; 
    }
};
