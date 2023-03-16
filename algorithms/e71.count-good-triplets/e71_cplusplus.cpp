class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int i1,i2;
        int count = 0;
        for(int i = 0;i<arr.size();i++){
            i1=arr[i];
            for(int j = i+1;j<arr.size();j++){
                if(abs(i1-arr[j])<=a){
                    i2=arr[j];
                    for(int k = j+1;k<arr.size();k++){
                        if(abs(i2-arr[k])<=b &&abs(i1-arr[k])<=c ){  //short circuit is used here 
                            count++;
                        }
                    }
                }
            }
        }
         return count;
    }
};