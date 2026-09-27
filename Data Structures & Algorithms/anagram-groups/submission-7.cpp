class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> maps;

        for (int i = 0; i < strs.size(); i++) {
            int alphabets[26] = {};
            string key = "";

            for (int j = 0; j < strs[i].length(); j++) {
                alphabets[strs[i][j] - 'a']++;
            }

            for (int k = 0; k < 26; k++) {
                key += to_string(alphabets[k]) + ",";
            }

            maps[key].push_back(strs[i]);
        }

        vector < vector<string> > results;

        for (auto it = maps.begin(); it != maps.end(); it++ ){
            results.push_back(it->second);
        }

        return results;
    }
};
