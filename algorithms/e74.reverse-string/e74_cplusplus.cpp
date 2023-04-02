class Solution {
public:
    void reverseString(vector<char>& s) {
        auto n = s.size();
        for(auto i =0;i<n/2;i++){
            //swap(s[i],s[n-1-i]); //take time
            auto temp = s[i];
            s[i] = s[n-1-i];
            s[n-1-i] = temp;
        }
    }
};