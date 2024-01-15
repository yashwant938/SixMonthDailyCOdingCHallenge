class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>win;
        unordered_map<int,int>loss;
        int n=matches.size();
        for(auto i=0;i<matches.size();i++){
            win[matches[i][0]]++;
            loss[matches[i][1]]++;

        }
        vector<int>lostOnce;
        auto it=loss.begin();
        while(it!=loss.end()){
            if(it->second==1) lostOnce.push_back(it->first);
            it++;
        }
        vector<int>lostZero;
        auto it2=win.begin();
        while(it2!=win.end()){
            if(it2->second>=1&&loss[it2->first]==0) lostZero.push_back(it2->first);
            it2++;
        }
        sort(lostZero.begin(),lostZero.end());
        sort(lostOnce.begin(),lostOnce.end());
        vector<vector<int>>ans;
        ans.push_back(lostZero);
        ans.push_back(lostOnce);
        return ans;
    }
};