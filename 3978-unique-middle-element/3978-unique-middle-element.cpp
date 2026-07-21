class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int size= nums.size()/2;
        int number= nums[size];
        int count =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==number){
                count++;
            }
        }
        if(count==1){
            return true;
        }
        return false;
    }
};