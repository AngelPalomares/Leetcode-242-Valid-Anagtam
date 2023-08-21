class Solution {
public:
    bool isAnagram(string s, string t) {
        //if statement to check to see if they are the same size, if they are not then they return false.
        if(s.size() != t.size())
        {
            return false;
        }

        //creates two hash maps
        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;

        
        //This for loop is used to put their letters in their own hasph map
        for(int i = 0; i < s.size(); i++)
        {
            smap[s[i]]++;
            tmap[t[i]]++;
        }
        for(int i = 0; i < smap.size(); i++)
        {
            if(smap[i] != tmap[i])
            {
                return false;
            }
        }

        return true;


    }
};
