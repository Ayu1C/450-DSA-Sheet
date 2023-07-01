class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
        //Merge two sorted arrays without using any extra space
        
        //One approach is to copy the elements fron num2 into remaining space in num1. Then    sort num1 and return num1.
        
        for(int i=0; i<n; i++)
        {
           nums1[m+i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
        
        //Below I was trying something using two pointers, but it gave tle
        
//         int p1=0, p2=0;
        
//         while(p1<m && p2<n)
//         {
//            if(nums1[p1] <= nums2[p2])
//            {
//                p1++;
//            }
//             else if(nums1[p1] > nums2[p2])
//             {
//                 int temp = nums1[p1];
//                 nums1[p1] = nums2[p2];
//                 nums2[p2] = temp;
//                 p1++;
//             }
//         }
//         if(p2<n)
//         {
//             while(p1 != m+n-1)
//             {
//                nums1[p1] = nums2[p2];
//             }
//         }
        
    }
};