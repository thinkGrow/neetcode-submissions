class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {   

        unordered_map <int, int> mapped;

        for ( int i = 0; i < nums.size(); i++){ mapped[nums[i]]++;}

        vector<vector <int>> bucket(nums.size()+1);

        for ( auto it = mapped.begin(); it != mapped.end(); it++ ){
            bucket[it->second].push_back(it->first);}

        vector <int> result;
        int count {};

        for(int i = bucket.size() - 1; i >= 0; i--){
            for ( int j = 0; j < bucket[i].size(); j++){
                result.push_back(bucket[i][j]);
                count++;
                if(count==k)break;
            }
                if(count==k)break;
        }

        return result;
    }
};
