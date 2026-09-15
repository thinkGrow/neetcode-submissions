class Solution {
public:
    bool isAnagram(string s, string t) {
        
         bool isAnagram = true;;

        if (s.length() != t.length()){
            return false;
        }

        unordered_map <char, int> maps;

        for (int i = 0; i < s.length(); i++){
            maps[s[i]]++;
            maps[t[i]]--;
        }

        for ( auto it = maps.begin(); it != maps.end(); it++ ){

            if(it->second!=0){
                return false;
            }
        }

        return true;

    







    }
};
