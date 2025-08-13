// The API isBadVersion is already defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n;
        while (low < high) {
            int mid = low + (high - low) / 2; // prevent overflow
            if (isBadVersion(mid)) {
                high = mid; // first bad is at mid or before
            } else {
                low = mid + 1; // first bad is after mid
            }
        }
        return low; // low == high, first bad version
    }
};
