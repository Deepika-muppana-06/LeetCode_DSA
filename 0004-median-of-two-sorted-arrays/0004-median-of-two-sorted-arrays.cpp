class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int i=0, j = 0 , n1 = 0 ,n2 = 0;
        for(int count =0; count <= (m+n)/2 ; count++){
            n2 = n1;
            if(i != m && j !=n){
                if(nums1[i] > nums2[j]){
                    n1=nums2[j++];
                }
                else{
                    n1 =nums1[i++];
                }
                }
                else if(i < m){
                    n1 = nums1[i++];
                }
                else{
                    n1=nums2[j++];
                }
            }
            if((n+m) % 2 == 1){
                return static_cast<double>(n1);
            }
            else{
                double ans=static_cast<double>(n1) + static_cast<double>(n2);
                return (n1+n2)/2.0;
            }
        }
    
};