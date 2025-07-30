
class Solution {
public:
    int guessNumber(int n) {
        int low = 1, high = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int res = guess(mid);

            if (res == 0) 
                return mid;       // Found the number
            else if (res == -1) 
                high = mid - 1;   // Number is lower
            else 
                low = mid + 1;    // Number is higher
        }

        return -1; // Should never reach here
    }
};


