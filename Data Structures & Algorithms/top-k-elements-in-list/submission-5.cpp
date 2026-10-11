class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {   
        unordered_map<int, int> maps;
        int count {};
        for ( int num : nums){
            maps[num]++;
        }
        vector < vector <int> > bucket(nums.size() + 1);
        for ( auto it = maps.begin(); it != maps.end(); it++){
            bucket[it->second].push_back(it->first);}

        vector <int> result = {};
        for ( int i = bucket.size() - 1 ; i >= 0 ; i--){
            for ( int j = 0; j < bucket[i].size(); j++){
                result.push_back(bucket[i][j]);
                count++;
                if(count==k)return result;}}

    }
};
