class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0 ) return 0;
        int ptr = 0;
        while(ptr < nums.size()){
            if(nums[ptr] == val) nums.erase(nums.begin() + ptr);
            else ptr++;
        }//end while
        return nums.size();
    }
};
