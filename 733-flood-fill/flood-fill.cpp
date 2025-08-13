class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalColor = image[sr][sc];
        if (originalColor == color) return image; // no need to fill

        dfs(image, sr, sc, originalColor, color);
        return image;
    }

private:
    void dfs(vector<vector<int>>& image, int r, int c, int originalColor, int newColor) {
        // Check boundaries
        if (r < 0 || c < 0 || r >= image.size() || c >= image[0].size()) return;
        // If color doesn't match original, stop
        if (image[r][c] != originalColor) return;

        // Fill this pixel
        image[r][c] = newColor;

        // Visit neighbors
        dfs(image, r+1, c, originalColor, newColor);
        dfs(image, r-1, c, originalColor, newColor);
        dfs(image, r, c+1, originalColor, newColor);
        dfs(image, r, c-1, originalColor, newColor);
    }
};
