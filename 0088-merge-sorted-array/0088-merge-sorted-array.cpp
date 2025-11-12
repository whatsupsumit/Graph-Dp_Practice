class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr3(m + n);
        int i = 0, j = 0, k = 0;

        while (i < m && j < n) {
            if (nums1[i] < nums2[j])
                arr3[k++] = nums1[i++];
            else
                arr3[k++] = nums2[j++];
        }

        while (i < m) arr3[k++] = nums1[i++];
        while (j < n) arr3[k++] = nums2[j++];

        for (int i = 0; i < m + n; i++)
            nums1[i] = arr3[i];
    }
};
