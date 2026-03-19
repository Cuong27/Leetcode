class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int total = m+n-1;
       int first = m-1;
       int second = n-1;
    
        while(first >=0 && second >=0){
            if(nums1[first]<=nums2[second]){
                nums1[total] = nums2[second];
                second--;
                total--;
            }
            else {
                nums1[total] = nums1[first];
                first--;
                total--;
            }
        }
         while(second>=0){
                nums1[total] = nums2[second];
                second--;
                total--;
            }
    }
};
