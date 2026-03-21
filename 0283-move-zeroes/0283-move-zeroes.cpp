class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                vec.push_back(nums[i]);
            }
        }
        for(int i=0;i<count;i++){
            vec.push_back(0);
        }
        nums=vec;
    }
};