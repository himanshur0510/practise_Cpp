class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()){
            return 0;
        }
        else{
        for(int i=0;i<haystack.length();i++){
            int k;
            k=1;
            
            if(haystack[i]==needle[0]){
                int y=i;
                if(needle.length()==1){
                    return i;
                }
                else{
                    while(needle.length()>k){
                        y=y+1;
                    if(y>=haystack.length()){
                        break;
                    }
                    if(haystack[y]==needle[k]){
                        if(k==needle.length()-1){
                            return i;
                    }
                            k=k+1;
                    }
                    else{
                        break;
                    }
                }
        }
        }
        }
        return -1;
        }
    }        
};