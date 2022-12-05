class Solution {
public:
    //O(n^2),O(n) for res vec
    /*
    vector<int> minOperations(string boxes) {
        vector<int> res(boxes.size());
        for(auto i=0;i<boxes.size();i++){
            for(auto j=0;j<boxes.size();j++){
                res[i] = res[i] + (boxes[j]-'0') *abs(i-j);
            }
        }
        return res;
    }
};
*/
    
    //O(n),O(n) // space: 2n for res vec and leftBalls
    /*
    vector<int> minOperations(string boxes) {
        vector<int> res(boxes.size()),leftBalls(boxes.size());
        int totalBalls = (boxes[0]-'0');
         for(auto i=1;i<boxes.size();i++){
          res[0] = res[0] + (boxes[i]-'0') *i;
          leftBalls[i] = leftBalls[i-1] + (boxes[i-1]-'0') ;
          totalBalls +=(boxes[i]-'0');
         }
        for(auto i=1;i<boxes.size();i++){
            res[i] = res[i-1] + (leftBalls[i]) - (totalBalls-leftBalls[i]);
        }
        return res;
    }
};
*/
    //O(n),O(n) //  less visulize but less space: n for res vec and leftBalls
    vector<int> minOperations(string boxes) {
        vector<int> costMoves(boxes.size());
        int totalBalls = (boxes[0]-'0');
        int leftBalls  = (boxes[0]-'0') ;
         for(auto i=1;i<boxes.size();i++){
          costMoves[0] = costMoves[0] + (boxes[i]-'0') *i;
          totalBalls = totalBalls + (boxes[i]-'0');   
         }
         
        for(auto i=1;i<boxes.size();i++){
            costMoves[i] = costMoves[i-1] + leftBalls - (totalBalls-leftBalls);
            leftBalls    = leftBalls +boxes[i]-'0';
        }
        return costMoves;
    }
};