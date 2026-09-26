class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

    unordered_map < string, vector <string> > maps;

    for(int i=0; i<strs.size(); i++ )
    {
        int alphabets[26] = {};

        for (int j=0; j<strs[i].length(); j++){
            alphabets[ strs[i][j] - 'a' ]++;
        }

        string key = {};
        for (int k=0; k<26; k++){
            key += to_string(alphabets[k]) + ",";
        }

        maps[key].push_back(strs[i]);

    }

    vector<vector<string>> result;

    for (auto it = maps.begin(); it!=maps.end(); it++){
        result.push_back(it->second);
    }

    return result;

    }
};
