class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    
    bool hasDuplicate;
    
    for(int i=0; i< std::size(nums);i++){
        for(int k = i+1; k<std::size(nums);k++){
            if (nums[i] == nums[k]){
                return true;
            }
        }
    }
    hasDuplicate = false;     
    return hasDuplicate;
    }
};