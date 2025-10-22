class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> ump;
        int left = 0, right = 0;
        int maxLen = 0;
        int n = s.size();

        while (right < n) {
            char ch = s[right];
            if (ump.count(ch) && ump[ch] >= left) {
                left = ump[ch] + 1;
            }
            ump[ch] = right;
            maxLen = max(maxLen, right - left + 1);
            right++;
        }

        return maxLen;
    }
};