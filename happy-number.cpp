/*
instead calculcating the same numbers over and over again pre-calculated map is used. 
but since hash function in the hashmap also does some calculcation and uses cpu cycle,
the runtime does not differ.
*/
class Solution {
public:
    unordered_set<int> seen_before;
    map<int, int> m = {
    {0, 0},
    {1, 1}, 
    {2, 4}, 
    {3, 9},
    {4, 16},
    {5, 25},
    {6, 36},
    {7, 49},
    {8, 64},
    {9, 81},
    }; 
    bool isHappy(int n) {
        int total = 0;
        while(n > 0){
            total += m[n % 10];
            n /= 10;
        }

        if(total == 1){
            return true;
        }

        if(seen_before.find(total) != seen_before.end()){
            return false;
        }
        seen_before.insert(total);
        return isHappy(total);
    }
};


class Solution {
public:
    unordered_set<int> seen_before;
    bool isHappy(int n) {
        int total = 0;
        while(n > 0){
            total += pow((n % 10), 2);
            n /= 10;
        }
        if(total == 1){
            return true;
        }

        if(seen_before.find(total) != seen_before.end()){
            return false;
        }
        seen_before.insert(total);
        return isHappy(total);
    }
};
