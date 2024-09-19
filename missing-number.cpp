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
        int sum = 0;
        int size = nums.size();
        for(int i=0; i<size;i++){
            sum += nums[i];
        }
        int expectedSum = (size+1) * (size) / 2;

        return expectedSum - sum;
    }
};
