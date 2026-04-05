class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // unordered_set<int>st(people.begin(),people.end());
        //cannt use set it removes duplicate values when we have two people of same weight;
        sort(people.begin(), people.end());

        int i=0;
        int j = people.size()-1;
        int boat=0;
        while(i<=j){
            if(people[i]+people[j]<=limit){
                i++;
            }
            //else we cannt use
            {
                j--;
                boat++;//boat inc when all pairs are done
            }
            
        }
            return boat;
    
    }
};