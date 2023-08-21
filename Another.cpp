class Solution {
public:
    bool isAnagram(string s, string t) {

        string word1 = s;
        string word2 = t;

        sort(word1.begin(), word1.end());
        sort(word2.begin(),word2.end());

        if (s.size() != t.size()) {
            return false;
        }

        for(int i = 0; i < s.size(); i++)
        {
            if(word1[i]!= word2[i])
            {
                return false;
            }
        }

        return true;

    }
};
