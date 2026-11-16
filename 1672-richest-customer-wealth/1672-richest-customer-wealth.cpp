class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int best = 0;
        for (auto& row : accounts) {
            best = max(best, accumulate(row.begin(), row.end(), 0));
        }
        return best;
    }
};