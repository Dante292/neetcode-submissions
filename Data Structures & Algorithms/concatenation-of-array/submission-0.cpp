class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int length = nums.size();
        vector<int> temp(2 * length);   // pre-allocate
        for(int i = 0; i < length; i++) {
            temp[i] = nums[i];
            temp[i + length] = nums[i];
        }
        return temp;
    }
};