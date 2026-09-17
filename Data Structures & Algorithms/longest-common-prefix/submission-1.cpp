class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string a ="";
        for(int i = 0; i < strs[0].size(); i++){
            if(strs[0][i] == strs.back()[i]){
                a = a + strs[0][i];
            } else {
                return a;
            }
        }
        
        return a;
    }
};