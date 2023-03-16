class Solution {
public:
    // O(n^2)
   /* vector<int> deckRevealedIncreasing(vector<int>& deck) {
        auto n = deck.size();
         vector<int>  res(n);
        sort(deck.begin(),deck.end());
        res[0]= deck[n-1];
        for(int i =n-2;i>=0;i--){
            auto j = n-i-2;
            auto temp = res[j];
            for(;j>=1;j--){
                res[j+1] = res[j-1];
            } 
            res[1] = temp;
            res[0] = deck[i];
        }
        return res; 
    }*/

    //Idea is drawn cards 0,2,4,6,.. and after we finish the deck we start to take
    // cards that we put at the back first one in the back is 1 so we put it in back a
    //again and take 3  and so on 
    // soln here illustrate that:
    //https://leetcode.com/problems/reveal-cards-in-increasing-order/solutions/201574/c-with-picture-skip-over-empty-spaces/?orderBy=most_votes 
   /* 
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(begin(deck), end(deck));
        list<int> l(deck.size());
        iota(begin(l), end(l), 0);    
        vector<int> res(deck.size());
        auto lp = l.begin();
        for (int i = 0, skip = 0; !l.empty(); skip = !skip) {
            if (lp == l.end()) lp = l.begin();
            if (skip) ++lp;
            else {
                res[*lp] = deck[i++];
                l.erase(lp++);
            }
        }
        return res;
    }
    */
        // we can know the order of indices that will be withdrawn using 
        // queue and we assign these indices with the ordered array
        vector<int> deckRevealedIncreasing(vector<int>& deck) {
        auto n = deck.size();
         vector<int>  res(n);
        sort(deck.begin(),deck.end());
        queue <int> cards;
        for(auto i=0;i<n;i++){
            cards.push(i);
        }
        auto i =0;
        while(!cards.empty()){
            res[cards.front()] = deck[i];
            cards.pop();
            if(!cards.empty()){
                cards.push(cards.front());
                cards.pop();
            }
            i++;
        }
        return res; 
    }
};