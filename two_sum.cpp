/*class Solution {
public:
vector<int> twoSum(vector<int> & nums, int target){
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size();j++){
            if(nums[i]+nums[j] == target && i!=j){
                vector<int> r={j,i};
                return r;
            }
        }
    }
    vector<int> err = {404};
    return err;
}
};
*/
class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    for(int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if(map.count(complement)) {
            return {map[complement], i};
        }
        map[nums[i]] = i;
    }
    return {};
}
};
