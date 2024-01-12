class Solution {
public:
    bool halvesAreAlike(string s) {
        int b=s.size();
        int left=0;
        int right=b-1;
        int half=b/2;
        int cnta=0,cntb=0;
       for(int i=0;i<half;i++){
           if(s[i]=='a'||s[i]=='e'||s[i]== 'i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
               cnta++;
           }
       }
       for(int i=half;i<b;i++){
             if(s[i]=='a'||s[i]=='e'||s[i]== 'i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
               cntb++;
           }
       }
    return cnta==cntb;
    }
};