
class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string &s) {
        // code here
        string result="";
        string curr_word="";
        vector<string> words;
        
        for(int i=0;i<s.length();++i){
            if(s[i]==' '){
                if(curr_word.size()>0) words.push_back(curr_word);
                curr_word="";
            }
            else curr_word+=s[i];
        }
        if(curr_word.size()>0) words.push_back(curr_word);
        for(int i=words.size()-1;i>=0;--i){
            result+=words[i];
            if(i!=0) result+=' ';
        }
        return result;
    }
};