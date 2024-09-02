/*
Since n^2 exceeds our boundry we need to solve it in linear time.
So we can store the repetition amount of the number in a map.
While traversing the list, just increment the occurence count in the map.
If it is more than 1, it contains duplicate.
So, to store the occurences in a map we need O(n) space,
≈Iterating over the list cost O(n) time complexity.
Accessing the occerence count will cost constant time O(1).
Overall, O(n) space & time complexity
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++ ){
            mp[nums[i]]++;
            if(mp[nums[i]] > 1){
                return true;
            }
        }
        return false;
    }
};

/*
With hashsets it works faster.
It is probably because of hash function they are using, and incrementing requires cpu cycle.
But overall time and space complexity is still O(n) for sure.
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int i=0; i<nums.size(); i++ ){
            if(st.find(nums[i]) != st.end()){
                return true;
            }
            st.insert(nums[i]);
        }
        return false;
    }
};
