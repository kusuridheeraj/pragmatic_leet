class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor = image[sr][sc];
        // Edge Case: If the pixel is already the target color, stop immediately.
        // Otherwise, you get an infinite loop.
        if (oldColor == color) return image;

        int m = image.size();
        int n = image[0].size();
        
        queue<pair<int, int>> q;
        q.push({sr, sc});
        
        // Mark the starting pixel immediately
        image[sr][sc] = color;

        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            // 1. UP (r - 1)
            if (r - 1 >= 0 && image[r - 1][c] == oldColor) {
                image[r - 1][c] = color;  // Change color immediately to avoid re-adding
                q.push({r - 1, c});
            }

            // 2. DOWN (r + 1)
            if (r + 1 < m && image[r + 1][c] == oldColor) {
                image[r + 1][c] = color;
                q.push({r + 1, c});
            }

            // 3. LEFT (c - 1)
            if (c - 1 >= 0 && image[r][c - 1] == oldColor) {
                image[r][c - 1] = color;
                q.push({r, c - 1});
            }

            // 4. RIGHT (c + 1)
            if (c + 1 < n && image[r][c + 1] == oldColor) {
                image[r][c + 1] = color;
                q.push({r, c + 1});
            }
        }

        return image;
    }
};