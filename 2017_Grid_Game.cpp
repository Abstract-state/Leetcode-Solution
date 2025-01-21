class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long first_row_sum = accumulate(begin(grid[0]), end(grid[0]), 0LL);
        long long second_row_sum = 0;

        long long minsum = LONG_LONG_MAX;

        for(int i = 0; i<grid[0].size(); i++)
        {
            first_row_sum -= grid[0][i];
            minsum = min(minsum, max(first_row_sum, second_row_sum));

            second_row_sum += grid[1][i];
        }

        return minsum;
    }
};