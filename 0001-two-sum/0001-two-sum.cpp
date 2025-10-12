class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        int n=nums.size();
        vector<pair<int, int>> arr; 
        for(int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int i = 0, j = n - 1;
        vector<int> indices;
        while(i<j){
           int sum = arr[i].first + arr[j].first;

            if(sum == target) {
                indices.push_back(arr[i].second);
                indices.push_back(arr[j].second);
                break;
            }
            else if(sum>target){
                j--;
            }else{
                i++;
            }
        }
        return indices;
    }
};