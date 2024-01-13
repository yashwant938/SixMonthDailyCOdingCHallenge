class Solution {
public:
    int minSteps(string str1, string str2) {
    // len1=strlen(str1);
    // len2=strlen(str2);
    int len1=str1.size();
    int len2=str2.size();
    // int found=0;
//     int cnt=0;
//     unordered_map<char,int>hash;
//     int xr=0;
//     if(len1==len2)
//     {
//         for(int i=0;i<len1; i++)
//         {
//             found = 0;
//             for(int j=0; j<len1; j++)
//             {
//                 if(str1[i] == str2[j])
//                 {
//                     hash[str1[xr]]++;
//                     xr++;
//                     // found = 1;
//                     // break;
//                 }
//             }
           
//         }
        
//     }else{
//         return NULL;
//     }
//     int sum=0;
//     for(auto it:hash){
//         sum+=it.second;
//     }
//     return str1.size()-sum;
//     }
// };

        if (len1!=len2) {
            return -1; 
        }
        unordered_map<char, int> charCount;

        for (int i=0;i<len1;i++) {
            charCount[str1[i]]++;
            charCount[str2[i]]--;
        }

        int sum=0;
        for (const auto& it:charCount) {
            sum+=abs(it.second);
        }

        return sum/2; 
    }
};

