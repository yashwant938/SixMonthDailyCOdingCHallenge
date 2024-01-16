class RandomizedSet {
public:
vector<int>vecci;
unordered_map<int,int>mpp;

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mpp.find(val)!=mpp.end())
            return false;
        else{
            vecci.push_back(val);
            mpp[val]=vecci.size()-1;
            return true;
        }
    }
    
    bool remove(int val) {
        if(mpp.find(val)==mpp.end())
            return false;
        else{
            int last=vecci.back();
            vecci[mpp[val]]=vecci.back();
            vecci.pop_back();
            mpp[last]=mpp[val];
            mpp.erase(val);
            return true;
        }
    }
    
    int getRandom() {










        return vecci[rand()%vecci.size()];
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */