class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max=-1,ans;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>max){
                    max=arr[i];
                    ans=i;
            }
        }
        return (ans);
    }
};
