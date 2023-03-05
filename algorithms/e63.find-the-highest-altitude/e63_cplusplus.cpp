class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        auto current_pt_altitude = 0;
        auto max_altitude = 0;
        for(auto g:gain ){
            current_pt_altitude += g;
            if(current_pt_altitude>max_altitude)
                max_altitude = current_pt_altitude;

        }
        return max_altitude;
    }
};