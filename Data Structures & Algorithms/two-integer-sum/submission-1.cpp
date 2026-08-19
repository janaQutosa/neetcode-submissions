#include <vector>
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> numsHash;

        for (int i =0 ; i < nums.size() ; i++){
            numsHash[nums[i]]=i;
        }


        for (int i =0 ; i<nums.size() ; i++){
            int j = target-nums[i];

            if (numsHash.count(j) && numsHash[j] != i){
               return {i,numsHash[j]};
            }
        }
        return {};
    }
};




