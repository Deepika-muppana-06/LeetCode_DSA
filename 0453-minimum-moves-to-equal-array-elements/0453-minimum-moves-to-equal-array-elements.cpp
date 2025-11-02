class Solution {
public:
    int minMoves(vector<int>& nums) {
    int n=nums.size();
			int m=INT_MAX;
			int sum=0;
			for(int i=0;i<n;i++){
				sum += nums[i];
				m=min(m,nums[i]);
			}
			return sum-(long long)m*n;
		}
};