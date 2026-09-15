class Solution {
public:
    bool isAnagram(string s, string t) {
        
        bool isAnagram = true;

        int array[26] = {0};

        if(s.length()!=t.length())return false;
        
        for ( int i = 0 ; i < s.length() ; i++){
            array[ s[i] - 'a']++;
            array[ t[i] - 'a']--;
        }

        for ( int i = 0; i < 26 ; i++){
            if(array[i]!=0){
                return false;
            }
        }

        return true;





    }
};
