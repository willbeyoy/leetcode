class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        int is_detected=0;
        for(int i=0;i<s.size();i++){
            for (int j=s.size()-1;j>=0;j--){
                if(s[i]==s[j]){
                    is_detected=1;
                }
                else{
                     is_detected=0;
                }
                if(is_detected==1){
                    int l=j;
                    for(int k=i;k<=j;k++){
                        if(s[k]!=s[l]){
                            is_detected=0;
                            ans.clear();
                            break;
                        }
                        else{
                            l--;
                            ans+=s[k];
                        }
                        if(k==j and ans.size()>1){
                            return ans;
                        }
                        else{
                            ans.clear();
                        }
                    }
                }
            }   
        }
        
    //找到回文就可以直接輸出  由大到小排列
       return 0;
    }
};