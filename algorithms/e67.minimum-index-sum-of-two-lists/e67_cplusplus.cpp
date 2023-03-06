class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> listEntries;
        auto minSum = INT_MAX;
        vector<string> res(list1.size());
        auto res_size=1;
        for(auto i=0;i<list1.size();i++){
             listEntries.insert({list1[i],i});
        }
        for(auto i=0;i<list2.size();i++){
            if(listEntries.find(list2[i])!=listEntries.end()){
                if(listEntries[list2[i]]+i<minSum)
                {
                    res_size=1;
                    res[0] = list2[i];
                    minSum = listEntries[list2[i]]+i;
                }
                else if((listEntries[list2[i]]+i==minSum)){
                    res_size++;
                    res[res_size-1]=list2[i];
                }
            }
        }
        std::vector<string> newVec(res.begin(), res.begin()+res_size);
        return newVec;
    }
};