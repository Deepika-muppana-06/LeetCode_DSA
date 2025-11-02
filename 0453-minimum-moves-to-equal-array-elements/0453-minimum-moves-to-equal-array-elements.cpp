class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long sum = 0; 
        int m = INT_MAX;
        int n = nums.size();
        
        for(int num : nums) {
            sum += num;
            m = min(m, num);
        }
        
        return sum - (long long)m * n;
    }
};
