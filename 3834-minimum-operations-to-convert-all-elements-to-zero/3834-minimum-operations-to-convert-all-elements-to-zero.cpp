class Solution {
public:
    int minOperations(vector<int>& nums) {
       stack<int>st;
       st.push(0);
       int count=0;
        for(int num:nums){
        while(!st.empty() && st.top()>num){
            st.pop();
        }
       
        if(st.top()<num){
            count++;
            st.push(num);
        }
        }
        return count;
    }
};