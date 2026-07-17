class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<(haystack).length();i++){
            int k;
            k=1;
            if(haystack[i]==needle[0]){
                int y=i;
                while((needle).length()>k){
                    y=y+1;
                    if(haystack[y]==needle[k]){
                        k=k+1;
                    }
                    else{
                        break;
                    }
                    if(y>haystack.length()){
                        break;
                    }
                    if(k==needle.length()){
                        return i;
                    }
                }
        }
        }
        return -1;
    }
};