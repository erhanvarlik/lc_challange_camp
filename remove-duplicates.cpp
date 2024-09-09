/*
Since array is sorted we can compare the consecutive elements.
We will keep a pointer, and every distinct consecutive pair we will increment the pointer.
It simply refers where to override the duplicate item with next distinct one.
Time complexity O(n)
Space complexity O(1)
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if(nums.size() == 1){
            return 1;
        }
        if(nums.size() == 2){
            if(nums[0] == nums[1]){
                return 1;
            }
            return 2;
        }
        int j = 1;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] != nums[i + 1]){
                nums[j] = nums[i + 1];
                j++;
            }
            
        }

        return j;
    }
};


/*
cleaner version
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i - 1] != nums[i]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};
