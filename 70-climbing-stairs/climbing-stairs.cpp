class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;
        int first = 1;   // ways(1)
        int second = 2;  // ways(2)
        int current = 0;
        for (int i = 3; i <= n; i++) {
            current = first + second;  // Fibonacci relation
            first = second;
            second = current;
        }
        return second;  // Final result
    }
};
