class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set <int> sets;

        bool isDuplicate = false;

        for( int i = 0; i < nums.size(); i++){


            if(sets.count(nums[i])){

                isDuplicate = true;
                return isDuplicate;

            }
            sets.insert(nums[i]);


        }

        return isDuplicate;



    }
};

