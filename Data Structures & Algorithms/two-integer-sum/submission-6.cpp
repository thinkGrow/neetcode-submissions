class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> maps;

        for (int i = 0; i < nums.size(); i++){

            int needed = target - nums[i];

            auto it = maps.find(needed);

            if(it!=maps.end()){
               return {it->second, i};
            }

            maps[nums[i]] = i;

        }

    
}

};
