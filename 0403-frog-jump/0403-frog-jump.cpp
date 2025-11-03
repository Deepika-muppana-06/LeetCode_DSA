class Solution {
public:
    bool canCross(vector<int>& stones) {
       int n = stones.size();
        unordered_map<int, unordered_set<int>> jumps; 
        jumps[0].insert(0);
        for (int i = 0; i < n; i++) {
            int stone = stones[i]; 
            for (int k : jumps[stone]) {
                for (int step = k - 1; step <= k + 1; step++) {
                    if (step > 0) {
                        int next = stone + step; 
                        if (find(stones.begin(), stones.end(), next) != stones.end()) {
                            jumps[next].insert(step); 
                        }
                    }
                }
            }
        }
        return !jumps[stones.back()].empty();
    }
};