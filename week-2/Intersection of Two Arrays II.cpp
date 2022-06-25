class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        int i=0,j=0;
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        
      vector<int>ans;
        
   //     int n = min(nums1.size(),nums2.size());
        int  n=nums1.size();
        int m=nums2.size();
        
        while(1)
        {
           // cout<<i<<' '<<j<<endl;
            
            if(nums1[i]==nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            } 
            else if(nums1[i]<nums2[j])
            {
                //cout<<nums1[i]<<' '<<nums2[j]<<endl;
                i++;
                
            } 
            else
            {
               // cout<<nums1[i]<<' '<<nums2[j]<<endl;
                j++;
            }
            
            if(i==n||j==m)
                break;
                
            
                
        }
        return ans;
    }
};