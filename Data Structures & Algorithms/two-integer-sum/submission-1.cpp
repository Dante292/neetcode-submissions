class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> s;

        for(int i=0; i< nums.size(); i++ ){
            int compliment = target - nums[i];
            if(s.count(compliment)) {
                return {s[compliment], i};
            } else {
                s[nums[i]] = i;
            }
        }
        return {};
    }
};
