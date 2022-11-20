class SparseVector {
public:
    
    SparseVector(vector<int> &nums) {
        int vSize=nums.size();
        for(int i=0;i<vSize;i++){
            if(nums[i]!=0)
                vector.insert({i,nums[i]});   
        }
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) {
        int res=0;
        for( const auto& [key, value] : vector){
            
            if(vec.vector.find(key)!=vec.vector.end()){
                res += value*vec.vector[key];
            }
            
        }
        return res;
    }
    private:
    unordered_map<int,int> vector;
};

// Your SparseVector object will be instantiated and called as such:
// SparseVector v1(nums1);
// SparseVector v2(nums2);
// int ans = v1.dotProduct(v2);