/*
Since the number range is [0, n] and it is guaranteed that there is only one missing,
we can simply find the total sum of the array by yusing n*(n-1)/2 formula.
So, the expected sum and the sum of items in the array should be equal if there is no missing one.
Otherwise the difference between them will give us the missing element.
Time complexity O(n) finding the max and zero.
Space complexity O(1) 
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int max = 0;
        int sum = 0;
        int size = nums.size();
        bool contains_zero = false;
        for(int i=0; i<nums.size();i++){
            if(max > nums[i]){
                max = nums[i];
            }
            if(nums[i] == 0){
               contains_zero = true; 
            }
            sum += nums[i];
        }
        int expectedSum = (size+1) * (size) / 2;

        if(expectedSum == sum && contains_zero){
            return max+1;
        }else if(expectedSum == sum){
            return 0;
        }else{
            return expectedSum - sum;
        }
    }
};
