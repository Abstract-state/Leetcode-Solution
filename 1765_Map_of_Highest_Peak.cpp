class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size();
        int n = isWater[0].size();

        const int INF = m*n;

        vector<vector<int>> ans(m, vector<int>(n, INF));

        for(int i = 0; i<m; i++)
        {
            for(int j = 0; j<n; j++)
            {
                if(isWater[i][j])
                {
                    ans[i][j] = 0;
                }
            }
        }

        // Filling based on left and top

        for(int i = 0; i<m; i++)
        {
            for(int j = 0; j<n; j++)
            {
                int minNeighborDistance = INF;

                // Top cell
                int Nrow = i-1;
                int Ncol = j;
                if(isValid(Nrow, Ncol, m, n))
                {
                    minNeighborDistance = min(minNeighborDistance, ans[Nrow][Ncol]);
                }

                //Left cell
                Nrow = i;
                Ncol = j-1;
                if(isValid(Nrow, Ncol, m, n))
                {
                    minNeighborDistance = min(minNeighborDistance, ans[Nrow][Ncol]);
                }

                ans[i][j] = min(minNeighborDistance+1, ans[i][j]);
            }
        }

        for(int i = m-1; i>=0; i--)
        {
            for(int j = n-1; j>=0; j--)
            {
                int minNeighborDistance = INF;

                //Down cell
                int Nrow = i+1;
                int Ncol = j;
                if(isValid(Nrow, Ncol, m, n))
                {
                    minNeighborDistance = min(minNeighborDistance, ans[Nrow][Ncol]);
                }

                //Right Cell
                Nrow = i;
                Ncol = j+1;
                if(isValid(Nrow, Ncol, m, n))
                {
                    minNeighborDistance = min(minNeighborDistance, ans[Nrow][Ncol]);
                }

                //Updating
                ans[i][j] = min(ans[i][j], minNeighborDistance+1);
                
            }
        }
        return ans;
    }
private:
    bool isValid(int r, int c, int rw, int cl)
    {
        return r >= 0 && c >= 0 && r < rw && c < cl;
    }
};