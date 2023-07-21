//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
private:
    bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m)
    {
        if ((x >= 0 && x < n) && (y >= 0 && y < n) && (visited[x][y] == 0) && (m[x][y] == 1))
        {
            return true;
        }
        return false;
    }
    // m is the maze
    void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path)
    {
        // You have reach to (x,y) here

        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }
        visited[x][y] = 1;

        // We have four choices -DLRU

        // down
        int newx = x + 1;
        int newy = y;
        if (isSafe(newx, newy, n, visited, m))
        {
            path.push_back('D');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // left

        newx = x;
        newy = y - 1;
        if (isSafe(newx, newy, n, visited, m))
        {
            path.push_back('L');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // right
        newx = x;
        newy = y + 1;
        if (isSafe(newx, newy, n, visited, m))
        {
            path.push_back('R');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // Up
        newx = x - 1;
        newy = y;
        if (isSafe(newx, newy, n, visited, m))
        {
            path.push_back('U');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        visited[x][y] = 1;
    }

public:
    vector<string> ans;
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        if (m[0][0] == 0)
        {
            return ans;
        }
        int srcx = 0;
        int srcy = 0;
        vector<vector<int>> visited = m;
        // initialise with zero
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }

        string path = "";
        solve(m, n, ans, srcx, srcy, visited, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends

/*
#include <bits/stdc++.h>
#define MAX 5
using namespace std;

vector<string> res;

bool isValid(int row, int col, int m[][MAX], int n)
{
    if (row >= 0 && row < n && col >= 0 && col < n
        && m[row][col] == 1) {
        return true;
    }
    return false;
}

void findPathHelper(int m[][MAX], int n, int x, int y,
                    int dx[], int dy[], string path)
{
    if (x == n - 1 && y == n - 1) {
        res.push_back(path);
        return;
    }
    string dir = "DLRU";
    for (int i = 0; i < 4; i++) {
        int row = x + dx[i];
        int col = y + dy[i];
        if (isValid(row, col, m, n)) {
            m[row][col] = 2; // used to track visited cells
                             // of matrix
            findPathHelper(m, n, row, col, dx, dy,
                           path + dir[i]);
            m[row][col]
                = 1; // mark it unvisited yet explorable
        }
    }
}

vector<string> findPath(int m[][MAX], int n)
{
    // dx, dy will be used to follow `DLRU` exploring
    // approach which is lexicographically sorted order
    int dx[] = { 1, 0, 0, -1 };
    int dy[] = { 0, -1, 1, 0 };
    if (m[0][0] == 1) {
        m[0][0] = 2;
        findPathHelper(m, n, 0, 0, dx, dy, "");
    }
    return res;
}

int main()
{
    int m[MAX][MAX] = { { 1, 0, 0, 0, 0 },
                        { 1, 1, 1, 1, 1 },
                        { 1, 1, 1, 0, 1 },
                        { 0, 0, 0, 0, 1 },
                        { 0, 0, 0, 0, 1 } };
    int n = sizeof(m) / sizeof(m[0]);

    findPath(m, n);

    for (int i = 0; i < res.size(); ++i)
        cout << res[i] << ' ';
    return 0;
}*/