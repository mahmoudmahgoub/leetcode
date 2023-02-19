class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    map<int,string, std::greater<int>> people;
    vector<string> res;
    for(int i =0; i<names.size();i++){
        people[heights[i]]=names[i];
    }
        for(auto & person:people){
            res.push_back(person.second);
        }
        return res;
        
    }
};