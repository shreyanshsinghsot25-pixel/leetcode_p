class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int cont = 0 ;
        int sm ;
        for(int i = 0 ; i< n ; i++){
            sm = 0 ;
            for(int j = i ; j< n ; j++){
                sm += nums [j];
                if(sm == k ){
                    cont++;
                }
            }
        }
        return cont;
    }
};