class NumberContainers {
public:
    NumberContainers() {
        
    }
            unordered_map<int,int>mp;
        unordered_map<int,set<int>>mp2;

    void change(int index, int number) {
       // unordered_map<int,int>mp;
       // unordered_map<int,set<int>>mp2;
        if(mp.find(index)==mp.end()){
            mp[index]=number;
            mp2[number].insert(index);
        }
        else{
            int r=mp[index];
            mp2[r].erase(index);
            if(mp2[r].empty())
                 mp2.erase(r);
                 mp[index]=number;
                 mp2[number].insert(index);       
                 }
    }
    
    int find(int number) {
        if(mp.size()!=0&&mp2.find(number)!=mp2.end()){
                  return *mp2[number].begin();
        }
        else return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */