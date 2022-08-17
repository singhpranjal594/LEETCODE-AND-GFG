class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> se;
        for(auto i :words)
        {
            string s="";
            for(auto it:i)
            {
                s+=(arr[it-'a']);
            }
            se.insert(s);
        }
        return se.size();
        
    }
};