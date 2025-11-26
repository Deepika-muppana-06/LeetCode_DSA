class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string> words;
        string temp = "";

        for(int i=0;i<=s.size();i++){
            if(i==s.size() || s[i]==' '){
                words.push_back(temp);
                temp="";
            }
            else temp+=s[i];
        }

        if(pattern.size()!=words.size()) return false;

        unordered_map<char,string> mp;
        unordered_map<string,char> rev;

        for(int i=0;i<pattern.size();i++){
            char p = pattern[i];
            string w = words[i];

            if(mp[p]=="" ){                
                if(rev.count(w) && rev[w]!=p) return false; 
                mp[p]=w;
                rev[w]=p;
            }
            else if(mp[p]!=w) return false;
        }

        return true;
    }
};
