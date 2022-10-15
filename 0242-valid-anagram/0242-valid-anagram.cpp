class Solution {
public:
    bool isAnagram(string s, string t) {
      
        if( s.length()!=t.length()){
            return false;
        }
        int ara[26] = {0};
        int ara2[26] = {0};
        
        for(int i=0; i<s.length(); i++){
            ara[s[i]-'a']++;
        }
         for(int i=0; i<t.length(); i++){
            ara2[t[i]-'a']++;
        }
        
          for(int i=0; i<26; i++){
            if(ara[i]!=ara2[i]){
                return false;
            }
        }
        
        return true;
        
        
        
        
        
    }
};