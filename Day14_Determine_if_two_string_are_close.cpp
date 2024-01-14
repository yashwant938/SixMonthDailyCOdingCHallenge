#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool closeStrings(string w1, string w2) {
        vector<int>fr1(26,0);
        vector<int>fr2(26,0);
        for(auto it:w1)     fr1[it-'a']++;
         for(auto it:w2)    fr2[it-'a']++;
          for (int i=0;i<26;i++) {
            if ((fr1[i]==0 &&fr2[i]!=0)||(fr1[i]!=0&&fr2[i]==0))    return false;
        }
        sort(fr1.begin(),fr1.end());
        sort(fr2.begin(),fr2.end());
         for (int i=0;i<26; i++) {
            if (fr1[i]!=fr2[i]) return false;
        }

           return true;
    }
};
int main(){
    Solution solve;
    string st1="aabcc";
    string st2="ccbaa";
    if(solve.closeStrings(st1,st2)){
        cout<<"It is matched"<<endl;
    }else{
        cout<<"It is not matched"<<endl;
    }
}




  


