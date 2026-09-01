class Solution {
public:
    int minimumDeletions(vector<int>& arr) {
        int mx = arr[0], mn = arr[0], x = 0, y = 0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i] > mx){
                mx = arr[i];
                x = i;
            }
            if(arr[i] < mn){
                mn = arr[i];
                y = i;
            }
        }
        x++;
        y++;
        if(x > y) swap(x,y); 
        int ans = min(x+n-y+1,min(y,n-x+1));
        return ans;
    }
};
