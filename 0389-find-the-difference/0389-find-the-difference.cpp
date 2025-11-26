class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.size();
        int m=t.size();
        unordered_map<char, int>map1;
        unordered_map<char, int>map2;
        for(char c1:s){
            map1[c1]++;
        }
        for(char c2:t){
            map2[c2]++;
        }
        for(auto &p:map2){
           char ch=p.first;
           if(map1[ch]!=map2[ch]){
            return ch;
           }
        }
        return ' ';
    }
};