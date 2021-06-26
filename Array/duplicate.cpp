class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        set<int> unique;
        
        for (int num : nums) {
            auto it = unique.find(num);
            if (it !=unique.end()) {
                return num;
            }
            unique.insert(num);
        }

        return -1;
        
    }
};
