class Solution {
public:

    string encode(vector<string>& strs) {

        string encoded_string {};
        for (int i = 0; i < strs.size(); i++){
            encoded_string.append(to_string(strs[i].length()));
            encoded_string.push_back('#');
            encoded_string.append(strs[i]);

            //6string#
        }

        return encoded_string;
    }

    vector<string> decode(string s) {

        vector<string> decoded_string;

        int total_length = s.length();

        
        for (int i = 0; i < total_length;){

            int one_length = 0;

            for (; s[i] != '#'; i++) {
                one_length = one_length * 10 + (s[i] - '0');
            }

            i++;
         

            string slice = s.substr(i, one_length); 

            decoded_string.push_back(slice);

          
            i += one_length;

        }


        



        return decoded_string;

    }
};
