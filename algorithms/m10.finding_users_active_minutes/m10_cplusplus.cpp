class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        map <int,set<int>> userMinutes;
        vector<int> res(k,0);
        for(auto userLog: logs){
            userMinutes[userLog[0]].insert(userLog[1]);
        }

        for(auto user:userMinutes){
            res[user.second.size()-1]++;
        }
        
        return res;
    }
};