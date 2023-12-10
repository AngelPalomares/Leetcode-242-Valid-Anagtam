public class Solution {
    public bool IsAnagram(string s, string t) {

        if(s.Length != t.Length)
        {
            return false;
        }

        char[] CharArray = s.ToCharArray();
        char[] CharArray2 = t.ToCharArray();

        Array.Sort(CharArray);
        Array.Sort(CharArray2);

        for(int i = 0; i < CharArray.Length; i++){
            if(CharArray[i] != CharArray2[i]){
                return false;
                break;
            }
        }
        return true;
        
    }
}
