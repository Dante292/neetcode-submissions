class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, int> maps;
        unordered_map<char, int> mapt;
        

        for(int i = 0; i < s.size(); i++) {
            if(maps.count(s[i])){
                maps[s[i]] = maps[s[i]] + 1;
            } else {
                maps[s[i]] = 1;
            }
        }

        for(int i = 0; i < t.size(); i++) {
            if(mapt.count(t[i])){
                mapt[t[i]] = mapt[t[i]] + 1;
            } else {
                mapt[t[i]] = 1;
            }
        }
        return maps == mapt;
    }
};
