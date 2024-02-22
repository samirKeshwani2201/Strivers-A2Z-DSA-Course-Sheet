#include <bits/stdc++.h>
using namespace std;

// vector<vector<int>> printAdjacency(int n, int m, vector<vector<int>> &edges)
// {
//     vector<vector<int>> adjList;
//     adjList.resize(n);
//     for (int i = 0; i < n; i++)
//     {
//         adjList[i].push_back(i);
//     }
//     for (auto it : edges)
//     {
//         adjList[it[0]].push_back(it[1]);
//         adjList[it[1]].push_back(it[0]);
//     }
//     return adjList;
// }

// void dfs(vector<vector<int>> isConnected, vector<bool> &visi, int node)
// {
//     visi[node] = true;
//     for (int i = 0; i < isConnected.size(); i++)
//     {
//         if (isConnected[node][i] && !visi[i])
//             dfs(isConnected, visi, i);
//     }
// }

// int findCircleNum(vector<vector<int>> &isConnected)
// {
//     vector<bool> visi(isConnected.size(), false);
//     int ans = 0;
//     for (int i = 0; i < isConnected.size(); i++)
//     {
//         if (!visi[i])
//         {
//             ans++;
//             dfs(isConnected, visi, i);
//         }
//     }
//     return ans;
// }

// bfs traversal :

// void bfs(vector<vector<int>> &isConnected, vector<bool> &vis, int node)
// {
//     vis[node] = true;
//     queue<int> q;
//     q.push(node);
//     while (!q.empty())
//     {
//         node = q.front();
//         q.pop();
//         for (int i = 0; i < isConnected.size(); i++)
//         {
//             if (isConnected[node][i] && !vis[i])
//             {
//                 q.push(i);
//                 vis[i] = true;
//             }
//         }
//     }
// }

// int findCircleNum(vector<vector<int>> &isConnected)
// {
// int ans = 0;
// int n = isConnected.size();
// vector<bool> vis(n, false);
// for (int i = 0; i < n; i++)
// {
//     if (!vis[i])
//     {
//         ans++;
//         bfs(isConnected, vis, i);
//     }
// }
// return ans;
// }

// union find :

// int find(int i, vector<int> leads)
// {
//     if (i == leads[i])
//         return i;
//     return find(leads[i], leads);
// }

// int findCircleNum(vector<vector<int>> &m)
// {
//     if (m.empty())
//         return 0;
//     int n = m.size();
//     vector<int> leads(n, 0);
//     for (int i = 0; i < n; i++)
//     {
//         leads[i] = i;
//     }
//     int grps = n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (m[i][j])
//             {
//                 int irep = find(i, leads);
//                 int jrep = find(j, leads);
//                 if (irep != jrep)
//                 {
//                     leads[irep] = jrep;
//                     grps--;
//                 }
//             }
//         }
//     }
//     return grps;
// }

// // litcode
// void dfs(vector<int> isConnected[], vector<bool> &visi, int node)
// {
//     visi[node] = true;
//     for (auto it : isConnected[node])
//     {
//         if (!visi[it])
//         {
//             dfs(isConnected, visi, it);
//         }
//     }
// }

// int countComponents(int n, vector<vector<int>> &edges)
// {
//     vector<int> adjList[n  ];
//     vector<bool> vis(n, false);
//     for (auto it : edges)
//     {
//         adjList[it[0]].push_back(it[1]);
//         adjList[it[1]].push_back(it[0]);
//     }
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (!vis[i])
//         {
//             dfs(adjList, vis, i);
//             ans++;
//         }
//     }
//     return ans;
// }

// BFS of graph:

// vector<int> bfsOfGraph(int v, vector<int> adj[])
// {
//     queue<int> q;
//     q.push(0);
//     vector<int> visi(v, 0);
//     visi[0] = 1;
//     vector<int> ans;
//     while (!q.empty())
//     {
//         int front = q.front();
//         ans.push_back(front);
//         q.pop();
//         for (auto it : adj[front])
//         {
//             if (!visi[it])
//             {
//                 q.push(it);
//                 visi[it] = 1;
//             }
//         }
//     }
//     return ans;
// }

// DFS of Graph:

// void dfs(vector<int> adj[], int node, vector<int> &visi, vector<int> &ans)
// {
//     if (visi[node])
//     {
//         return;
//     }
//     ans.push_back(node);
//     visi[node] = 1;
//     for (auto it : adj[node])
//     {
//         if (!visi[it])
//         {
//             dfs(adj, it, visi, ans);
//         }
//     }
// }

// vector<int> dfsOfGraph(int V, vector<int> adj[])
// {
//     vector<int> ans;
//     vector<int> visi(V, 0);
//     dfs(adj, 0, visi, ans);
//     return ans;
// }

// 200. Number of Islands:Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

// void dfs(int row, int col, vector<vector<char>> &grid, int dx[], int dy[])
// {
//     grid[row][col] = '0';
//     for (int k = 0; k < 4; k++)
//     {
//         int i = row + dx[k];
//         int j = col + dy[k];
//         if (i >= 0 and j >= 0 and i < grid.size() and j < grid[0].size() and grid[i][j] == '1')
//         {
//             grid[i][j] = '0';
//             dfs(i, j, grid, dx, dy);
//         }
//     }
//     return;
// }

// int numIslands(vector<vector<char>> &grid)
// {
//     if (grid.size() == 0)
//         return 0;
//     int m = grid.size();
//     int cnt = 0;
//     int n = grid[0].size();
//     int dx[] = {1, 0, -1, 0};
//     int dy[] = {0, 1, 0, -1};
//     for (int i = 0; i < grid.size(); i++)
//     {
//         for (int j = 0; j < grid[0].size(); j++)
//         {
//             if (grid[i][j] == '1')
//             {
//                 dfs(i, j, grid, dx, dy);
//                 cnt++;
//             }
//         }
//     }
//     return cnt;
// }

// bfs :

// int numIslands(vector<vector<char>> &grid)
// {
//     if (grid.size() == 0)
//         return 0;
//     int offset[] = {0, 1, 0, -1, 0};
//     int n = grid.size();
//     int ans = 0;
//     int m = grid[0].size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (grid[i][j] == '1')
//             {
//                 ans++;
//                 queue<pair<int, int>> q;
//                 grid[i][j] = '0';
//                 q.push({i, j});
//                 while (!q.empty())
//                 {
//                     int sz = q.size();
//                     for (int l = 0; l < sz; l++)
//                     {
//                         pair<int, int> tp = q.front();
//                         q.pop();
//                         for (int k = 0; k < 4; k++)
//                         {
//                             int row = tp.first + offset[k];
//                             int col = tp.second + offset[k + 1];
//                             if (row >= 0 and col >= 0 and row < n and col < m and grid[row][col] == '1')
//                             {
//                                 grid[row][col] = '0';
//                                 q.push({row, col});
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }

// void bfs(vector<vector<char>> &grid, int row, int col)
// {
//     queue<int> code;
//     int m = grid.size();
//     code.push((row * m) + col);
//     grid[row][col] = '1';
//     int offset[] = {0, 1, 0, -1, 0};
//     while (!code.empty())
//     {
//         int sz = code.size();
//         while (sz--)
//         {
//             auto top = code.front();
//             code.pop();
//             int i = top / m;
//             int j = top % m;
//             for (int k = 0; k < 4; k++)
//             {
//                 int newRow = i + offset[k];
//                 int newCol = j + offset[k + 1];
//                 if (newRow >= 0 and newRow < grid.size() and newCol >= 0 and newCol < grid[0].size() and grid[newRow][newCol] == '1')
//                 {
//                     grid[newRow][newCol] = '0';
//                     code.push((newRow * m) + newCol);
//                 }
//             }
//         }
//     }
// }

// int numIslands(vector<vector<char>> &grid)
// {
//     int ans = 0;
//     for (int i = 0; i < grid.size(); i++)
//     {
//         for (int j = 0; j < grid[0].size(); j++)
//         {
//             if (grid[i][j] == '1')
//             {
//                 bfs(grid, i, j);
//                 ans++;
//             }
//         }
//     }
//     return ans;
// }

// gfg:8 directions :

// void dfs(int row, int col, vector<vector<char>> &grid, int dx[], int dy[])
// {
//     grid[row][col] = '0';
//     for (int k = 0; k < 8; k++)
//     {
//         int i = row + dx[k];
//         int j = col + dy[k];
//         if (i >= 0 and j >= 0 and i < grid.size() and j < grid[0].size() and grid[i][j] == '1')
//         {
//             grid[i][j] = '0';
//             dfs(i, j, grid, dx, dy);
//         }
//     }
//     return;
// }

// int numIslands(vector<vector<char>> &grid)
// {
//     if (grid.size() == 0)
//         return 0;
//     int m = grid.size();
//     int cnt = 0;
//     int n = grid[0].size();
//     int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
//     int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
//     for (int i = 0; i < grid.size(); i++)
//     {
//         for (int j = 0; j < grid[0].size(); j++)
//         {
//             if (grid[i][j] == '1')
//             {
//                 dfs(i, j, grid, dx, dy);
//                 cnt++;
//             }
//         }
//     }
//     return cnt;
// }

// 994. Rotting Oranges:

// int orangesRotting(vector<vector<int>> &grid)
// {
//     // (row,col,time)
//     queue<pair<pair<int, int>, int>> q;
//     int n = grid.size();
//     int m = grid[0].size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (grid[i][j] == 2)
//             {
//                 q.push({{i, j}, 0});
//             }
//         }
//     }
//     int time = 0;
//     while (!q.empty())
//     {
//         auto top = q.front();
//         q.pop();
//         time = top.second;
//         int rowHelp[] = {-1, 0, 1, 0};
//         int colHelp[] = {0, 1, 0, -1};
//         for (int k = 0; k < 4; k++)
//         {
//             int i = rowHelp[k] + top.first.first;
//             int j = colHelp[k] + top.first.second;
//             if (i >= 0 and j >= 0 && i < n && j < m && grid[i][j] == 1)
//             {
//                 q.push({{i, j}, time + 1});
//                 grid[i][j] = 2;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (grid[i][j] == 1)
//             {
//                 return -1;
//             }
//         }
//     }
//     return time;
// }

// int orangesRotting(vector<vector<int>> &grid)
// {
//     // row, col
//     queue<pair<int, int>>
//         q;
//     int dx[] = {1, 0, -1, 0};
//     int dy[] = {0, 1, 0, -1};
//     int ans = 0;
//     int countFresh = 0;
//     int m = grid.size();
//     int n = grid[0].size();
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (grid[i][j] == 1)
//             {
//                 countFresh++;
//             }
//             if (grid[i][j] == 2)
//             {
//                 q.push({i, j});
//             }
//         }
//     }
//     if (countFresh == 0)
//         return 0;
//     while (!q.empty() and countFresh > 0)
//     {
//         int size = q.size();
//         ans++;
//         while (size--)
//         {
//             pair<int, int> front = q.front();
//             q.pop();
//             for (int k = 0; k < 4; k++)
//             {
//                 int i = dx[k] + front.first;
//                 int j = dy[k] + front.second;
//                 if (i < m && j < n and i >= 0 and j >= 0 and grid[i][j] == 1)
//                 {
//                     grid[i][j] = 2;
//                     q.push({i, j});
//                     countFresh--;
//                 }
//             }
//         }
//     }
//     if (countFresh == 0)
//     {
//         return ans;
//         // Because in BFS's last iteration all oranges would have been rotten. So we need to exclude that.
//     }
//     return -1;
// }

// 733. Flood Fill:An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.You are also given three integers sr, sc, and color. You should perform a flood fill on the image starting from the pixel image[sr][sc].To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with color.Return the modified image after performing the flood fill.

// Khud se :-)

// vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
// {
//     queue<pair<int, int>> q;
//     q.push({sr, sc});
//     int dx[] = {-1, 0, 1, 0};
//     int dy[] = {0, 1, 0, -1};
//     int m = image.size();
//     int n = image[0].size();
//     int init = image[sr][sc];
//     image[sr][sc]=color ;
//     while (!q.empty())
//     {
//         int size = q.size();
//         while (size--)
//         {
//             auto top = q.front();
//             q.pop();
//             for (int k = 0; k < 4; k++)
//             {
//                 int i = dx[k] + top.first;
//                 int j = dy[k] + top.second;
//                 if (i >= 0 && j >= 0 and i < m and j < n and image[i][j] == init and image[i][j] != color)
//                 {
//                     image[i][j] = color;
//                     q.push({i, j});
//                 }
//             }
//         }
//     }
//     return image;
// }

// void dfs(vector<vector<int>> &image, int dx[], int dy[], int sr, int sc, int iniColr, int newColor)
// {
//     image[sr][sc] = newColor;
//     for (int k = 0; k < 4; k++)
//     {
//         int i = dx[k] + sr;
//         int j = dy[k] + sc;
//         if (i >= 0 and j >= 0 and i < image.size() and j < image[0].size() and image[i][j] == iniColr and image[i][j] != newColor)
//         {
//             dfs(image, dx, dy, i, j, iniColr, newColor);
//         }
//     }
// }

// vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
// {
//     int dx[] = {1, 0, -1, 0};
//     int dy[] = {0, 1, 0, -1};
//     dfs(image, dx, dy, sr, sc, image[sr][sc], color);
//     return image;
// }

//  Detect Cycle in an Undirected Graph:

// bool bfs(int src, vector<int> &visi, vector<int> adjList[])
// {
//     // (node,parent)
//     queue<pair<int, int>> q;
//     visi[src] = 1;
//     q.push({src, -1});
//     while (!q.empty())
//     {
//         int sz = q.size();
//         while (sz--)
//         {
//             int node = q.front().first;
//             int parent = q.front().second;
//             q.pop();
//             for (auto ad : adjList[node])
//             {
//                 if (!visi[ad])
//                 {
//                     visi[ad] = 1;
//                     q.push({ad, node});
//                 }
//                 else if (parent != ad)
//                 {
//                     return true;
//                 }
//             }
//         }
//     }
//     return false;
// }

// bool detectCycle(int v, vector<int> adj[])
// {
//     vector<int> visi(v, 0);
//     for (int i = 0; i < v; i++)
//     {
//         if (!visi[i])
//         {
//             if (bfs(i, visi, adj))
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// using dfs:

// bool dfs(int node, vector<int> &visi, vector<int> adj[], int parent)
// {
//     visi[node] = 1;
//     for (auto x : adj[node])
//     {
//         if (parent != x)
//         {
//             if (visi[x])
//             {
//                 return true;
//             }
//             else if (dfs(x, visi, adj, node))
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// bool detectCycle(int v, vector<int> adj[])
// {
//     vector<int> visi(v, 0);
//     for (int i = 0; i < v; i++)
//     {
//         if (!visi[i])
//         {
//             if (dfs( i,visi,adj,-1))
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// 542. 01 Matrix:Given an m x n binary matrix mat, return the distance of the nearest 0 for each cell. The distance between two adjacent cells is 1.

// vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
// {
//     int n = mat.size();
//     int m = mat[0].size();
//     vector<vector<int>> ans(n, vector<int>(m, 1e9));
//     // row ,col,minDistance
//     queue<pair<pair<int, int>, int>> q;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (mat[i][j] == 0)
//             {
//                 q.push({{i, j}, 0});
//                 mat[i][j] = 0;
//             }
//         }
//     }
//     int minDis;
//     int row_changes[] = {-1, 0, 1, 0}, col_changes[] = {0, 1, 0, -1};
//     while (!q.empty())
//     {
//         int sz = q.size();
//         while (sz--)
//         {
//             auto top = q.front();
//             q.pop();
//             minDis = top.second;
//             int r = top.first.first;
//             int c = top.first.second;
//             for (int k = 0; k < 4; k++)
//             {
//                 int i = row_changes[k] + r;
//                 int j = col_changes[k] + c;
//                 if (i < n and j < m and i >= 0 and j >= 0 and mat[i][j] == 1)
//                 {
//                     if (ans[i][j] > minDis + 1)
//                     {
//                         ans[i][j] = minDis + 1;
//                         q.push({{i, j}, ans[i][j]});
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }

// vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
// {
//     vector<vector<int>> ans(mat.size(), vector<int>(mat[0].size(), 0));
//     queue<pair<int, int>> q;
//     int dir[] = {0, 1, 0, -1, 0};
//     for (int i = 0; i < mat.size(); i++)
//     {
//         for (int j = 0; j < mat[i].size(); j++)
//         {
//             if (mat[i][j] == 0)
//             {
//                 q.push({i, j});
//             }
//             else
//             {
//                 mat[i][j] = -1;
//             }
//         }
//     }
//     while (!q.empty())
//     {
//         int sz = q.size();
//         while (sz--)
//         {
//             auto front = q.front();
//             q.pop();
//             int orr = front.first, occ = front.second;
//             for (int k = 0; k < 4; k++)
//             {
//                 int row = orr + dir[k];
//                 int col = occ + dir[k + 1];
//                 if (row >= 0 and col >= 0 and row < mat.size() and col < mat[0].size() and mat[row][col] == -1)
//                 {
//                     mat[row][col] = mat[orr][occ] + 1;
//                     q.push({row, col});
//                 }
//             }
//         }
//     }
//     return mat;
// }

// dp left

// 130. Surrounded Regions:Given an m x n matrix board containing 'X' and 'O', capture all regions that are 4-directionally surrounded by 'X'. A region is captured by flipping all 'O's into 'X's in that surrounded region.

// void dfs(vector<vector<char>> &board, vector<vector<int>> &visi, int row, int col, int dx[], int dy[])
// {
//     visi[row][col] = 1;
//     for (int k = 0; k < 4; k++)
//     {
//         int i = dx[k] + row;
//         int j = dy[k] + col;
//         if (i < board.size() and j < board[0].size() and i >= 0 and j >= 0 and !visi[i][j] and board[i][j] == 'O')
//         {
//             dfs(board, visi, i, j, dx, dy);
//         }
//     }
// }

// void solve(vector<vector<char>> &board)
// {
//     vector<vector<int>> visi(board.size(), vector<int>(board[0].size(), 0));
//     int dx[] = {-1, 0, 1, 0};
//     int dy[] = {0, 1, 0, -1};
//     int n = board.size(), m = board[0].size();
//     for (int i = 0; i < n; i++)
//     {
//         if (!visi[i][0] and board[i][0] == 'O')
//         {
//             dfs(board, visi, i, 0, dx, dy);
//         }
//         if (!visi[i][m - 1] and board[i][m - 1] == 'O')
//             dfs(board, visi, i, m - 1, dx, dy);
//     }
//     for (int i = 0; i < m; i++)
//     {
//         if (!visi[0][i] and board[0][i] == 'O')
//             dfs(board, visi, 0, i, dx, dy);
//         if (!visi[n - 1][i] and board[n - 1][i] == 'O')
//             dfs(board, visi, n - 1, i, dx, dy);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (!visi[i][j])
//             {
//                 board[i][j] = 'X';
//             }
//         }
//     }
//     return;
// }

// void dfs(vector<vector<char>> &board, int row, int col, int dx[], int dy[])
// {
//     if (row < 0 or col < 0 or row >= board.size() or col >= board[0].size() or board[row][col]!='O')
//     {
//         return;
//     }
//     board[row][col] = '#';
//     dfs(board, row - 1, col, dx, dy);
//     dfs(board, row + 1, col, dx, dy);
//     dfs(board, row, col - 1, dx, dy);
//     dfs(board, row, col + 1, dx, dy);
// }

// void solve(vector<vector<char>> &board)
// {
//     if(board.size()==0)
//     return ;
//     int dx[] = {-1, 0, 1, 0};
//     int dy[] = {0, 1, 0, -1};
//     int n = board.size(), m = board[0].size();
//     for (int i = 0; i < n; i++)
//     {
//         if (board[i][0] == 'O')
//         {
//             dfs(board, i, 0, dx, dy);
//         }
//         if (board[i][m - 1] == 'O')
//             dfs(board, i, m - 1, dx, dy);
//     }
//     for (int i = 0; i < m; i++)
//     {
//         if (board[0][i] == 'O')
//             dfs(board, 0, i, dx, dy);
//         if (board[n - 1][i] == 'O')
//             dfs(board, n - 1, i, dx, dy);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (board[i][j] == '#')
//             {
//                 board[i][j] = 'O';
//             }
//             else if (board[i][j] == 'O')
//             {
//                 board[i][j] = 'X';
//             }
//         }
//     }
//     return;
// }

// void dfs(vector<vector<int>> &board, int row, int col, int dx[], int dy[])
// {
//     if (row < 0 or col < 0 or row >= board.size() or col >= board[0].size() or board[row][col] != 1)
//     {
//         return;
//     }
//     board[row][col] = -1;
//     dfs(board, row - 1, col, dx, dy);
//     dfs(board, row + 1, col, dx, dy);
//     dfs(board, row, col - 1, dx, dy);
//     dfs(board, row, col + 1, dx, dy);
// }

// int numEnclaves(vector<vector<int>> &board)
// {
//     int tot1 = 0;
//     for (auto it : board)
//     {
//         for (auto bt : it)
//         {
//             if (bt == 1)
//             {
//                 tot1++;
//             }
//         }
//     }
//     if (board.size() == 0)
//         return 0;
//     int dx[] = {-1, 0, 1, 0};
//     int dy[] = {0, 1, 0, -1};
//     int n = board.size(), m = board[0].size();
//     for (int i = 0; i < n; i++)
//     {
//         if (board[i][0] == 1)
//         {
//             dfs(board, i, 0, dx, dy);
//         }
//         if (board[i][m - 1] == 1)
//             dfs(board, i, m - 1, dx, dy);
//     }
//     for (int i = 0; i < m; i++)
//     {
//         if (board[0][i] == 1)
//             dfs(board, 0, i, dx, dy);
//         if (board[n - 1][i] == 1)
//             dfs(board, n - 1, i, dx, dy);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (board[i][j] == -1)
//             {
//                 tot1--;
//             }
//         }
//     }
//     return tot1;
// }

// void dfs(vector<vector<int>> &board, int row, int col, int dx[], int dy[])
// {
//     if (row < 0 or col < 0 or row >= board.size() or col >= board[0].size() or board[row][col] != 1)
//     {
//         return;
//     }
//     board[row][col] = 0;
//     dfs(board, row - 1, col, dx, dy);
//     dfs(board, row + 1, col, dx, dy);
//     dfs(board, row, col - 1, dx, dy);
//     dfs(board, row, col + 1, dx, dy);
// }

// int numEnclaves(vector<vector<int>> &board)
// {
//     if (board.size() == 0)
//         return 0;
//     int dx[] = {-1, 0, 1, 0};
//     int dy[] = {0, 1, 0, -1};
//     int n = board.size(), m = board[0].size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (i == 0 or j == 0 or i == n - 1 or j == m - 1)
//             {
//                 dfs(board, i, j, dx, dy);
//             }
//         }
//     }
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (board[i][j] == 1)
//             {
//                 ans++;
//             }
//         }
//     }
//     return ans;
// }

// 127. Word Ladder:A transformation sequence from word beginWord to word endWord using a dictionary wordList is a sequence of words beginWord -> s1 -> s2 -> ... -> sk such that:Every adjacent pair of words differs by a single letter.Every si for 1 <= i <= k is in wordList. Note that beginWord does not need to be in wordList.sk == endWord.Given two words, beginWord and endWord, and a dictionary wordList, return the number of words in the shortest transformation sequence from beginWord to endWord, or 0 if no such sequence exists.

// int ladderLength(string beginWord, string endWord, vector<string> &wordList)
// {
//     queue<string> q;
//     set<string> st, words;
//     for (string s : wordList)
//     {
//         words.insert(s);
//     }
//     st.insert(beginWord);
//     q.push(beginWord);
//     int res = 0;
//     while (q.size())
//     {
//         int n = q.size();
//         res++;
//         while (n--)
//         {
//             string s = q.front();
//             q.pop();
//             if (s == endWord)
//                 return res;
//             string t;
//             for (int i = 0; i < s.size(); i++)
//             {
//                 t = s;
//                 for (int j = 'a'; j <= 'z'; j++)
//                 {
//                     t[i] = j;
//                     if (words.count(t) and !st.count(t))
//                     {
//                         st.insert(t);
//                         q.push(t);
//                     }
//                 }
//             }
//         }
//     }
//     return 0;
// }

// int ladderLength(string beginWord, string endWord, vector<string> &wordList)
// {
//     queue<pair<string, int>> q;
//     q.push({beginWord, 1});
//     unordered_set<string> st(wordList.begin(), wordList.end());
//     st.erase(beginWord);
//     while (!q.empty())
//     {
//         string word = q.front().first;
//         int steps = q.front().second;
//         q.pop();
//         if (word == endWord)
//             return steps;
//         for (int i = 0; i < word.size(); i++)
//         {
//             char ogWord = word[i];
//             for (char j = 'a'; j <= 'z'; j++)
//             {
//                 word[i] = j;
//                 if (st.count(word))
//                 {
//                     q.push({word, steps + 1});
//                     st.erase(word);
//                 }
//             }
//             word[i] = ogWord;
//         }
//     }
//     return 0;
// }

// 126. Word Ladder II:

// for interview ok but lc gives tle:

// vector<vector<string>> findLadders(string beginWord, string endWord, vector<string> &wordList)
// {
//     queue<vector<string>> q;
//     vector<vector<string>> ans;
//     unordered_set<string> st(wordList.begin(), wordList.end());
//     vector<string> usedOnLvl;
//     usedOnLvl.push_back(beginWord);
//     q.push({beginWord});
//     int lvl = 0;
//     while (!q.empty())
//     {
//         vector<string> vec = q.front();
//         q.pop();
//         if (vec.size() > lvl)
//         {
//             lvl++;
//             for (auto it : usedOnLvl)
//             {
//                 st.erase(it);
//             }
//             usedOnLvl.clear();
//         }
//         string word = vec.back();
//         if (word == endWord)
//         {
//             if (ans.size() == 0)
//             {
//                 ans.push_back(vec);
//             }
//             else if (ans[0].size() == vec.size())
//             {
//                 ans.push_back(vec);
//             }
//         }
//         for (int i = 0; i < word.size(); i++)
//         {
//             char og = word[i];
//             for (char c = 'a'; c <= 'z'; c++)
//             {
//                 word[i] = c;
//                 if (st.count(word))
//                 {
//                     vec.push_back(word);
//                     q.push(vec);
//                     usedOnLvl.push_back(word);
//                     vec.pop_back();
//                 }
//             }
//             word[i] = og;
//         }
//     }
//     return ans;
// }

// cp approach:

// unordered_map<string, int> mpp;
// vector<vector<string>> ans;
// string b;
// void dfs(string word, vector<string> &seq)
// {
//     if (word == b)
//     {
//         reverse(seq.begin(), seq.end());
//         ans.push_back(seq);
//         reverse(seq.begin(), seq.end());
//         return;
//     }
//     int steps = mpp[word];
//     for (int i = 0; i < b.size(); i++)
//     {
//         char og = word[i];
//         for (char c = 'a'; c <= 'z'; c++)
//         {
//             word[i] = c;
//             if (mpp.find(word) != mpp.end() and mpp[word] + 1 == steps)
//             {
//                 seq.push_back(word);
//                 dfs(word, seq);
//                 seq.pop_back();
//             }
//         }
//         word[i] = og;
//     }
// }
// vector<vector<string>> findLadders(string beginWord, string endWord, vector<string> &wordList)
// {
//     unordered_set<string> st(wordList.begin(), wordList.end());
//     queue<string> q;
//     b = beginWord;
//     q.push({beginWord});
//     mpp[beginWord] = 1;
//     int sz = beginWord.size();
//     st.erase(beginWord);
//     while (!q.empty())
//     {
//         string word = q.front();
//         int steps = mpp[word];
//         q.pop();
//         if (word == endWord)
//             break;
//         for (int i = 0; i < sz; i++)
//         {
//             char og = word[i];
//             for (char c = 'a'; c <= 'z'; c++)
//             {
//                 word[i] = c;
//                 if (st.count(word))
//                 {
//                     q.push(word);
//                     st.erase(word);
//                     mpp[word] = steps + 1;
//                 }
//             }
//             word[i] = og;
//         }
//     }
//     if (mpp.find(endWord) != mpp.end())
//     {
//         vector<string> seq;
//         seq.push_back(endWord);
//         dfs(endWord, seq);
//     }
//     return ans;
// }

// Given a non-empty 2D array grid of 0's and 1's, an island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical). You may assume all four edges of the grid are surrounded by water. Count the number of distinct islands. An island is considered to be the same as another if and only if one island has the same shape as another island (and not rotated or reflected).

// string bfsPath(vector<vector<int>> &grid, int i, int j, string path)
// {
//     // O invalid/water
//     // X current position
//     // R,L,U,D
//     if (i < 0 or j < 0 or i >= grid.size() or j >= grid[0].size() or grid[i][j] == 0)
//     {
//         return path + "O";
//     }
//     grid[i][j] = 0;
//     string l = bfsPath(grid, i, j - 1, "L");
//     string u = bfsPath(grid, i - 1, j, "U");
//     string r = bfsPath(grid, i, j + 1, "R");
//     string d = bfsPath(grid, i + 1, j, "D");
//     return path + l + r + u + d;
// }

// int numberofDistinctIslands(vector<vector<int>> &grid)
// {
//     if (grid.size() == 0)
//         return 0;
//     unordered_set<string> s;
//     for (int i = 0; i < grid.size(); i++)
//     {
//         for (int j = 0; j < grid[i].size(); j++)
//         {
//             if (grid[i][j] == 1)
//             {
//                 s.insert(bfsPath(grid, i, j, "X"));
//             }
//         }
//     }
//     return s.size();
// }

// Given a non-empty 2D array grid of 0's and 1's, an island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water. Count the number of distinct islands. An island is considered to be the same as another if they have the same shape, or have the same shape after rotation (90, 180, or 270 degrees only) or reflection (left/right direction or up/down direction).

// void bfs(vector<vector<char>> &grid, int row, int col)
// {
//     queue<pair<int, int>> q;
//     q.push({row, col});
//     int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
//     int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
//     grid[row][col] = '#';
//     while (!q.empty())
//     {
//         int r = q.front().first;
//         int c = q.front().second;
//         q.pop();
//         for (int k = 0; k < 8; k++)
//         {
//             int newr = r + dx[k];
//             int newc = c + dy[k];
//             if (newr >= 0 and newc >= 0 and newr < grid.size() and newc < grid[0].size() and grid[newr][newc] == '1')
//             {
//                 grid[row][col] = '#';
//                 q.push({newr, newc});
//             }
//         }
//     }
// }

// int numIslands(vector<vector<char>> &grid)
// {
//     int island = 0;
//     for (int i = 0; i < grid.size(); i++)
//     {
//         for (int j = 0; j < grid[i].size(); j++)
//         {
//             if (grid[i][j] == '1')
//             {
//                 bfs(grid, i, j);
//                 island++;
//             }
//         }
//     }
//     return island;
// }

// original answer:

// https://algo.monster/liteproblems/711 try to understand

// void dfs(vector<vector<int>> &grid, int i, int j, vector<pair<int, int>> &shape)
// {
//     shape.push_back({i, j});
//     grid[i][j] = 0;
//     vector<int> dir = {0, 1, 0, -1, 0};
//     for (int k = 0; k < 4; k++)
//     {
//         int newi = dir[k] + i;
//         int newj = dir[k + 1] + j;
//         if (newi >= 0 and newj >= 0 and newi < grid.size() and newj < grid[0].size() and grid[newi][newj] == 1)
//         {
//             dfs(grid, newi, newj, shape);
//         }
//     }
// }

// vector<pair<int, int>> normalised(vector<pair<int, int>> &island)
// {
//     vector<vector<pair<int, int>>> shapes(8);
//     for (auto p : island)
//     {
//         int x = p.first;
//         int y = p.second;
//         shapes[0].push_back({x, y});
//         shapes[1].push_back({-x, y});
//         shapes[2].push_back({x, -y});
//         shapes[3].push_back({-x, -y});
//         shapes[4].push_back({y, x});
//         shapes[5].push_back({-y, x});
//         shapes[6].push_back({y, -x});
//         shapes[7].push_back({-y, -x});
//     }
//     for (auto &e : shapes)
//     {
//         sort(e.begin(), e.end());
//         int basex = e[0].first;
//         int basey = e[0].second;
//         for (auto &t : e)
//         {
//             t.first -= basex;
//             t.second -= basey;
//         }
//     }
//     sort(shapes.begin(), shapes.end());
//     return shapes[0];
// }

// int numDistinctIslands2(vector<vector<int>> &grid)
// {
//     set<vector<pair<int, int>>> set;
//     for (int i = 0; i < grid.size(); i++)
//     {
//         for (int j = 0; j < grid[0].size(); j++)
//         {
//             if (grid[i][j])
//             {
//                 vector<pair<int, int>> shape;
//                 dfs(grid, i, j, shape);
//                 set.insert(normalised(shape));
//             }
//         }
//     }
//     return set.size();
// }

// 785. Is Graph Bipartite?

// There is an undirected graph with n nodes, where each node is numbered between 0 and n - 1. You are given a 2D array graph, where graph[u] is an array of nodes that node u is adjacent to. More formally, for each v in graph[u], there is an undirected edge between node u and node v. The graph has the following properties:There are no self-edges (graph[u] does not contain u).
// There are no parallel edges (graph[u] does not contain duplicate values).
// If v is in graph[u], then u is in graph[v] (the graph is undirected).
// The graph may not be connected, meaning there may be two nodes u and v such that there is no path between them.
// A graph is bipartite if the nodes can be partitioned into two independent sets A and B such that every edge in the graph connects a node in set A and a node in set B.Return true if and only if it is bipartite.

// bool dfs(vector<vector<int>> &graph, int col, int node, vector<int> &color)
// {
//     color[node] = col;
//     for (auto it : graph[node])
//     {
//         if (color[it] == -1)
//         {
//             if (dfs(graph, !col, it, color) == false)
//             {
//                 return false;
//             }
//         }
//         else if (color[it] == col)
//             return false;
//     }
//     return true;
// }

// bool isBipartite(vector<vector<int>> &graph)
// {
//     vector<int> color(graph.size(), -1);
//     for (int i = 0; i < graph.size(); i++)
//     {
//         if (color[i] == -1)
//         {
//             if (dfs(graph, 1, i, color) == false)
//                 return false;
//         }
//     }
//     return true;
// }

// bfs way:

// bool isBipartite(vector<vector<int>> &graph)
// {
//     vector<int> colors(graph.size(), 0);
//     for (int i = 0; i < graph.size(); i++)
//     {
//         if (colors[i] != 0)
//             continue;
//         queue<int> q;
//         q.push(i);
//         colors[i] = 1;
//         while (!q.empty())
//         {
//             int cur = q.front();
//             q.pop();
//             for (auto it : graph[cur])
//             {
//                 if (colors[it] == 0)
//                 {
//                     colors[it] = -colors[cur];
//                     q.push(it);
//                 }
//                 else if (colors[it] == colors[cur])
//                 {
//                     return false;
//                 }
//             }
//         }
//     }
//     return true;
// }

// Detect cycle in a directed graph (using DFS):

// bool dfs(int node, vector<int> adj[], vector<int> &visi, vector<int> &pathVisi)
// {
//     visi[node] = 1;
//     pathVisi[node] = 1;
//     for (auto it : adj[node])
//     {
//         if (!visi[it])
//         {
//             if (dfs(it, adj, visi, pathVisi) == true)
//             {
//                 return true;
//             }
//         }
//         else if (pathVisi[it])
//         {
//             // visi che
//             return true;
//         }
//     }
//     pathVisi[node] = 0;
//     return false;
// }

// bool isCyclic(int V, vector<int> adj[])
// {
//     vector<int> visi(V, 0), pathVisi(V, 0);
//     for (int i = 0; i < V; i++)
//     {
//         if (!visi[i])
//         {
//             if (dfs(i, adj, visi, pathVisi))
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// void dfs(int node, vector<int> adj[], stack<int> &st, vector<int> &vis)
// {
//     vis[node] = 1;
//     for (auto it : adj[node])
//     {
//         if (!vis[it])
//         {
//             dfs(it, adj, st, vis);
//         }
//     }
//     st.push(node);
// }

// vector<int> topoSort(int V, vector<int> adj[])
// {
//     vector<int> vis(V, 0);
//     stack<int> st;
//     for (int i = 0; i < V; i++)
//     {
//         if (!vis[i])
//         {
//             dfs(i, adj, st, vis);
//         }
//     }
//     vis.clear();
//     while (!st.empty())
//     {
//         vis.push_back(st.top());
//         st.pop();
//     }
//     return vis;
// }

//  A DAG G has at least one vertex with in-degree 0 and one vertex with out-degree 0.bfs:

// vector<int> topoSort(int V, vector<int> adj[])
// {
//     vector<int> inDeg(V, 0);
//     for (int u = 0; u < V; u++)
//     {
//         for (auto it : adj[u])
//         {
//             inDeg[it]++;
//         }
//     }
//     queue<int> q;
//     for (int i = 0; i < V; i++)
//     {
//         if (inDeg[i] == 0)
//         {
//             q.push(i);
//         }
//     }
//     vector<int> ans;
//     while (!q.empty())
//     {
//         int front = q.front();
//         ans.push_back(front);
//         q.pop();
//         for (auto it : adj[front])
//         {
//             inDeg[it]--;
//             if (inDeg[it] == 0)
//             {
//                 q.push(it);
//             }
//         }
//     }
//     return ans;
// }

// 207. Course Schedule:There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want to take course ai.For example, the pair [0, 1], indicates that to take course 0 you have to first take course 1.Return true if you can finish all courses. Otherwise, return false.

// bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
// {
//     vector<vector<int>> adj(numCourses);
//     vector<int> inDeg(numCourses, 0);
//     for (auto it : prerequisites)
//     {
//         adj[it[1]].push_back(it[0]);
//     }
//     for (int u = 0; u < numCourses; u++)
//     {
//         for (auto it : adj[u])
//         {
//             inDeg[it]++;
//         }
//     }
//     queue<int> q;
//     for (int i = 0; i < numCourses; i++)
//     {
//         if (inDeg[i] == 0)
//         {
//             q.push(i);
//         }
//     }
//     while (!q.empty())
//     {
//         int front = q.front();
//         q.pop();
//         numCourses--;
//         for (auto it : adj[front])
//         {
//             inDeg[it]--;
//             if (inDeg[it] == 0)
//             {
//                 q.push(it);
//             }
//         }
//     }
//     return numCourses == 0;
// }

// vector<int> findOrder(int numCourses, int m, vector<vector<int>> prerequisites)
// {
//     vector<vector<int>> adj(numCourses);
//     vector<int> inDeg(numCourses, 0);
//     for (auto it : prerequisites)
//     {
//         adj[it[1]].push_back(it[0]);
//     }
//     for (int u = 0; u < numCourses; u++)
//     {
//         for (auto it : adj[u])
//         {
//             inDeg[it]++;
//         }
//     }
//     queue<int> q;
//     for (int i = 0; i < numCourses; i++)
//     {
//         if (inDeg[i] == 0)
//         {
//             q.push(i);
//         }
//     }
//     vector<int> ans;
//     while (!q.empty())
//     {
//         int front = q.front();
//         ans.push_back(front);
//         q.pop();
//         for (auto it : adj[front])
//         {
//             inDeg[it]--;
//             if (inDeg[it] == 0)
//             {
//                 q.push(it);
//             }
//         }
//     }
//     return ans;
// }

// // optimised:

// bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
// {
//     vector<vector<int>> adj(numCourses);
//     for (auto it : prerequisites)
//     {
//         adj[it[1]].push_back(it[0]);
//     }
//     vector<int> inDeg(numCourses, 0);
//     for (int u = 0; u < numCourses; u++)
//     {
//         for (auto it : adj[u])
//         {
//             inDeg[it]++;
//         }
//     }
//     for (int i = 0; i < numCourses; i++)
//     {
//         int j = 0;
//         for (; j < numCourses; j++)
//         {
//             if (!inDeg[j])
//             {
//                 break;
//             }
//         }
//         if (j == numCourses)
//         {
//             return false;
//         }
//         inDeg[j]--;
//         for (int v : adj[j])
//         {
//             inDeg[v]--;
//         }
//     }
//     return true;
// }

// 802. Find Eventual Safe States:There is a directed graph of n nodes with each node labeled from 0 to n - 1. The graph is represented by a 0-indexed 2D integer array graph where graph[i] is an integer array of nodes adjacent to node i, meaning there is an edge from node i to each node in graph[i]. A node is a terminal node if there are no outgoing edges. A node is a safe node if every possible path starting from that node leads to a terminal node (or another safe node).Return an array containing all the safe nodes of the graph. The answer should be sorted in ascending order.

// vector<int> eventualSafeNodes(vector<vector<int>> &graph)
// {
//     vector<vector<int>> graph2(graph.size());
//     vector<int> indeg(graph.size());
//     for (int i = 0; i < graph.size(); i++)
//     {
//         for (auto it : graph[i])
//         {
//             graph2[it].push_back(i);
//             indeg[i]++;
//         }
//     }
//     queue<int> q;
//     for (int i = 0; i < indeg.size(); i++)
//     {
//         if (indeg[i] == 0)
//         {
//             q.push(i);
//         }
//     }
//     vector<int> ans;
//     while (!q.empty())
//     {
//         int f = q.front();
//         ans.push_back(f);
//         q.pop();
//         for (auto it : graph2[f])
//         {
//             indeg[it]--;
//             if (indeg[it] == 0)
//             {
//                 q.push(it);
//             }
//         }
//     }
//     sort(ans.begin(), ans.end());
//     return ans;
// }

// vector<int> eventualSafeNodes(vector<vector<int>> &graph)
// {
//     queue<int> q;
//     vector<vector<int>> R(graph.size());
//     vector<int> outdeg(graph.size(), 0);
//     for (int i = 0; i < graph.size(); i++)
//     {
//         for (auto it : graph[i])
//         {
//             R[it].push_back(i);
//         }
//         outdeg[i] += graph[i].size();
//         if (outdeg[i] == 0)
//         {
//             q.push(i);
//         }
//     }
//     vector<int> ans;
//     while (!q.empty())
//     {
//         int front = q.front();
//         q.pop();
//         ans.push_back(front);
//         for (int v : R[front])
//         {
//             outdeg[v]--;
//             if (outdeg[v] == 0)
//                 q.push(v);
//         }
//     }
//     sort(ans.begin(), ans.end());
//     return ans;
// }

// There is a new alien language which uses the latin alphabet. However, the order among letters are unknown to you. You receive a list of non-empty words from the dictionary, where words are sorted lexicographically by the rules of this new language. Derive the order of letters in this language.

// lintcode:

// string alienOrder(vector<string> &words)
// {
//     unordered_map<char, unordered_set<char>> adj;
//     unordered_map<char, int> indg;
//     for (auto it : words)
//     {
//         for (char c : it)
//         {
//             indg[c];
//             adj[c];
//         }
//     }
//     for (int i = 0; i < words.size() - 1; i++)
//     {
//         string w1 = words[i], w2 = words[i + 1];
//         if (w1.size() > w2.size() and w1.substr(0, w2.size()) == w2)
//         {
//             return "";
//         }
//         for (int j = 0; j < min(w1.size(), w2.size()); j++)
//         {
//             if (w1[j] != w2[j])
//             {
//                 if (adj[w1[j]].find(w2[j]) == adj[w1[j]].end())
//                 {
//                     adj[w1[j]].insert(w2[j]);
//                     indg[w2[j]]++;
//                 }
//                 break;
//             }
//         }
//     }
//     priority_queue<char, vector<char>, greater<char>> q;
//     for (auto it : indg)
//     {
//         if (it.second == 0)
//         {
//             q.push(it.first);
//         }
//     }
//     string ans = "";
//     while (!q.empty())
//     {
//         char f = q.top();
//         q.pop();
//         ans += f;
//         for (auto it : adj[f])
//         {
//             indg[it]--;
//             if (indg[it] == 0)
//             {
//                 q.push(it);
//             }
//         }
//     }
//     if (ans.size() < indg.size())
//     {
//         return "";
//     }
//     return ans;
// }

// gfg:

// string bfs(int K, vector<int> adj[])
// {
//     queue<int> q;
//     vector<int> ind(K, 0);
//     for (int i = 0; i < K; i++)
//     {
//         for (auto it : adj[i])
//         {
//             ind[it]++;
//         }
//     }
//     for (int i = 0; i < K; i++)
//     {
//         if (ind[i] == 0)
//         {
//             q.push(i);
//         }
//     }
//     string ans = "";
//     while (!q.empty())
//     {
//         int front = q.front();
//         q.pop();
//         ans = ans + char(front + 'a');
//         for (auto it : adj[front])
//         {
//             ind[it]--;
//             if (ind[it] == 0)
//             {
//                 q.push(it);
//             }
//         }
//     }
//     return ans;
// }

// string findOrder(string words[], int N, int K)
// {
//     vector<int> adj[K];
//     for (int i = 0; i < N - 1; i++)
//     {
//         string w1 = words[i];
//         string w2 = words[i + 1];
//         int len = min(w1.size(), w2.size());
//         int ptr = 0;
//         while (ptr < len)
//         {
//             if (w1[ptr] == w2[ptr])
//             {
//                 ptr++;
//                 continue;
//             }
//             else
//             {
//                 adj[w1[ptr] - 'a'].push_back(w2[ptr] - 'a');
//                 break;
//             }
//         }
//     }
//     return bfs(K, adj);
// }

// Shortest path in Undirected Graph having unit distance: You are given an Undirected Graph having unit weight, Find the shortest path from src to all the vertex and if it is unreachable to reach any vertex, then return -1 for that vertex.

// vector<int> shortestPath(vector<vector<int>> &edges, int N, int M, int src)
// {
//     vector<int> adj[N];
//     vector<int> dist(N, 1e9);
//     for (auto it : edges)
//     {
//         adj[it[0]].push_back(it[1]);
//         adj[it[1]].push_back(it[0]);
//     }
//     dist[src] = 0;
//     queue<int> q;
//     q.push(src);
//     while (!q.empty())
//     {
//         int front = q.front();
//         q.pop();
//         for (auto it : adj[front])
//         {
//             if (dist[it] > dist[front] + 1)
//             {
//                 q.push(it);
//                 dist[it] = dist[front] + 1;
//             }
//         }
//     }
//     for (int i = 0; i < dist.size(); i++)
//     {
//         if (dist[i]==1e9)
//         {
//             dist[i]=-1;
//         }
//     }
//     return dist;
// }

// Given a Directed Acyclic Graph of N vertices from 0 to N-1 and a 2D Integer array(or vector) edges[ ][ ] of length M, where there is a directed edge from edge[i][0] to edge[i][1] with a distance of edge[i][2] for all i.Find the shortest path from src(0) vertex to all the vertices and if it is impossible to reach any vertex, then return -1 for that vertex.

// by self:)))

// vector<int> shortestPath(int N, int M, vector<vector<int>> &edges)
// {
//     vector<int> adj[N];
//     vector<int> dist(N, 1e9);
//     map<pair<int, int>, int> mp;
//     for (auto it : edges)
//     {
//         adj[it[0]].push_back(it[1]);
//         mp[{it[0], it[1]}] = it[2];
//     }
//     dist[0] = 0;
//     queue<int> q;
//     q.push(0);
//     while (!q.empty())
//     {
//         int front = q.front();
//         q.pop();
//         for (auto it : adj[front])
//         {
//             if (dist[it] > dist[front] + mp[{front, it}])
//             {
//                 dist[it] = dist[front] + mp[{front, it}];
//                 q.push(it);
//             }
//         }
//     }
//     for (int i = 0; i < dist.size(); i++)
//     {
//         if (dist[i] == 1e9)
//         {
//             dist[i] = -1;
//         }
//     }
//     return dist;
// }

// vector<int> shortestPath(int N, int M, vector<vector<int>> &edges)
// {
//     // {v,wt}
//     vector<pair<int, int>> adj[N];
//     for (auto it : edges)
//     {
//         adj[it[0]].push_back({it[1], it[2]});
//     }
//     // {u,dist}
//     queue<pair<int, int>> q;
//     vector<int> dis(N, 1e9);
//     dis[0] = 0;
//     q.push({0, 0});
//     while (!q.empty())
//     {
//         int node = q.front().first;
//         int dist = q.front().second;
//         q.pop();
//         for (auto it : adj[node])
//         {
//             if (dis[it.first] > dist + it.second)
//             {
//                 q.push({it.first, dist + it.second});
//                 dis[it.first] = dist + it.second;
//             }
//         }
//     }
//     for(int i=0;i<dis.size();i++)
//     {
//         if(dis[i]==1e9)
//         {
//             dis[i]=-1;
//         }
//     }
//     return dis;
// }

// dfs:

// void topoSort(int node, vector<pair<int, int>> adj[], stack<int> &s, vector<int> &vis)
// {
//     vis[node] = 1;
//     for (auto it : adj[node])
//     {
//         if (!vis[it.first])
//         {
//             topoSort(it.first, adj, s, vis);
//         }
//         s.push(node);
//     }
// }

// vector<int> shortestPath(int N, int M, vector<vector<int>> &edges)
// {
//     vector<pair<int, int>> adj[N];
//     vector<int> vis(N, 0);
//     for (auto it : edges)
//     {
//         adj[it[0]].push_back({it[1], it[2]});
//     }
//     stack<int> s;
//     for (int i = 0; i < N; i++)
//     {
//         if (!vis[i])
//         {
//             topoSort(i, adj, s, vis);
//         }
//     }
//     vis.clear();
//     vis.resize(N, 1e9);
//     vis[0] = 0;
//     while (!s.empty())
//     {
//         int top = s.top();
//         s.pop();
//         for (auto it : adj[top])
//         {
//             int w = it.second;
//             int v = it.first;
//             if (vis[v] > vis[top] + w)
//             {
//                 vis[v] = vis[top] + w;
//             }
//         }
//     }
//     for (int i = 0; i < N; i++)
//     {
//         if (vis[i] == 1e9)
//         {
//             vis[i] = -1;
//         }
//     }
//     return vis;
// }

// vector<int> shortestPath(int N, int M, vector<vector<int>> &edges)
// {
//     vector<int> dis(N, 1e9);
//     dis[0] = 0;
//     for (int i = 0; i < N - 1; i++)
//     {
//         for (auto it : edges)
//         {
//             if (dis[it[0]] != 1e9 and dis[it[1]] > dis[it[0]] + it[2])
//             {
//                 dis[it[1]] = dis[it[0]] + it[2];
//             }
//         }
//     }
//     for (int i = 0; i < dis.size(); i++)
//     {
//         if (dis[i] == 1e9)
//         {
//             dis[i] = -1;
//         }
//     }
//     return dis;
// }

// Djikstra's Shortest Path Algorithm using Priority Queue:Given a weighted, undirected, and connected graph of V vertices and an adjacency list adj where adj[i] is a list of lists containing two integers where the first integer of each list j denotes there is an edge between i and j, second integers corresponds to the weight of that edge. You are given the source vertex S and You have to Find the shortest distance of all the vertex from the source vertex S. You have to return a list of integers denoting the shortest distance between each node and Source vertex S.

// vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
// {
//     // node ,dist to reach it
//     set<pair<int, int>> st;
//     vector<int> dis(V, 1e9);
//     dis[S] = 0;
//     st.insert({0, 0});
//     while (!st.empty())
//     {
//         auto it = *(st.begin());
//         int node = it.first;
//         int dist = it.second;
//         st.erase(it);
//         for (auto bt : adj[node])
//         {
//             int adjNod = bt[0];
//             int wt = bt[1];
//             if (dis[adjNod] > dist + wt)
//             {
//                 if (dis[adjNod] != 1e9)
//                 {
//                     st.erase({adjNod, dis[adjNod]});
//                 }
//                 dis[adjNod] = dist + wt;
//                 st.insert({adjNod, dis[adjNod]});
//             }
//         }
//     }
//     return dis;
// }

// using proirity queue:

// vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
// {
//     vector<int> dis(V, 1e9);
//     dis[S] = 0;
//     // {dist,node}
//     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
//     q.push({0, S});
//     while (!q.empty())
//     {
//         auto it = q.top();
//         q.pop();
//         int distan = it.first;
//         int node = it.second;
//         for (auto it : adj[node])
//         {
//             if (dis[it[0]] > distan + it[1])
//             {
//                 dis[it[0]] = distan +  it[1] ;
//                 q.push({dis[it[0]], it[0]});
//             }
//         }
//     }
//     return dis;
// }

// 1091. Shortest Path in Binary Matrix:Given an n x n binary matrix grid, return the length of the shortest clear path in the matrix. If there is no clear path, return -1.A clear path in a binary matrix is a path from the top-left cell (i.e., (0, 0)) to the bottom-right cell (i.e., (n - 1, n - 1)) such that:All the visited cells of the path are 0.All the adjacent cells of the path are 8-directionally connected (i.e., they are different and they share an edge or a corner).The length of a clear path is the number of visited cells of this path.

// int shortestPathBinaryMatrix(vector<vector<int>> &grid)
// {
//     if (grid[0][0] == 1 || grid[grid.size() - 1][(grid[0].size() - 1)] == 1)
//     {
//         return -1;
//     }
//     int n = grid.size();
//     int m = grid[0].size();
//     queue<pair<int, pair<int, int>>> q;
//     vector<vector<int>> dis(n, vector<int>(m, 1e9));
//     dis[0][0] = 0;
//     // dist ,cell cordinates
//     q.push({1, {0, 0}});
//     int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
//     int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
//     while (!q.empty())
//     {
//         auto it = q.front();
//         q.pop();
//         int distance = it.first;
//         int r = it.second.first;
//         int c = it.second.second;
//         if (r == n - 1 and c == m - 1)
//         {
//             return distance;
//         }
//         for (int i = 0; i < 8; i++)
//         {
//             int newr = r + dx[i];
//             int newc = c + dy[i];
//             if (newr >= 0 and newr < n and newc >= 0 and newc < m and grid[newr][newc] == 0 and dis[newr][newc] > distance + 1)
//             {
//                 dis[newr][newc] = distance + 1;
//                 if (newr == n - 1 and newc == m - 1)
//                 {
//                     return distance + 1;
//                 }
//                 q.push({distance + 1, {newr, newc}});
//             }
//         }
//     }
//     return -1;
// }

// int shortestPathBinaryMatrix(vector<vector<int>> &grid)
// {
//     int n = grid.size();
//     int m = grid[0].size();
//     if (grid[0][0] || grid[n - 1][m - 1])
//     {
//         return -1;
//     }
//     queue<pair<int, int>> q;
//     vector<vector<int>> dir = {{1, 1},
//                                {0, 1},
//                                {1, 0},
//                                {0, -1},
//                                {-1, 0},
//                                {-1, -1},
//                                {1, -1},
//                                {-1, 1}};
//     q.push({0, 0});
//     int ans = 0;
//     grid[0][0] = 1;
//     while (!q.empty())
//     {
//         int sz = q.size();
//         for (int i = 0; i < sz; i++)
//         {
//             auto it = q.front();
//             q.pop();
//             int x = it.first;
//             int y = it.second;
//             if (x == n - 1 and y == m - 1)
//             {
//                 return grid[x][y];
//             }
//             for (auto it : dir)
//             {
//                 int newr = x + it[0];
//                 int newc = y + it[1];
//                 if (newr >= 0 and newr < n and newc >= 0 and newc < m and !grid[newr][newc])
//                 {
//                     q.push({newr, newc});
//                     grid[newr][newc] = grid[x][y] + 1;
//                 }
//             }
//             ans++;
//         }
//     }
//     return -1;
// }

// 1631. Path With Minimum EffortYou are a hiker preparing for an upcoming hike. You are given heights, a 2D array of size rows x columns, where heights[row][col] represents the height of cell (row, col). You are situated in the top-left cell, (0, 0), and you hope to travel to the bottom-right cell, (rows-1, columns-1) (i.e., 0-indexed). You can move up, down, left, or right, and you wish to find a route that requires the minimum effort.A route's effort is the maximum absolute difference in heights between two consecutive cells of the route.Return the minimum effort required to travel from the top-left cell to the bottom-right cell.

int minimumEffortPath(vector<vector<int>> &heights)
{
    vector<vector<int>> dis(heights.size(), vector<int>(heights[0].size(), 1e9));
    dis[0][0] = 0;
    // diff, cell corditnates
    int n = heights.size();
    int m = heights[0].size();
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;
    q.push({0, {0, 0}});
    int dir[] = {0, 1, 0, -1, 0};
    while (!q.empty())
    {
        int sz = q.size();
        for (int i = 0; i < sz; i++)
        {
            auto it = q.top();
            q.pop();
            int diffe = it.first;
            int x = it.second.first;
            int y = it.second.second;
            if (x == n - 1 and y == m - 1)
                return dis[x][y];
            for (int i = 0; i < 4; i++)
            {
                int newx = x + dir[i];
                int newy = y + dir[i + 1];
                if (newx >= 0 and newx < n and newy >= 0 and newy < m)
                {
                    int effr = max(abs(heights[newx][newy] - heights[x][y]), diffe);
                    if (dis[newx][newy] > effr)
                    {
                        dis[newx][newy] = effr;
                        q.push({dis[newx][newy], {newx, newy}});
                    }
                }
            }
        }
    }
    return dis[n - 1][m - 1];
}

// bool help(int i, int j, int effort, vector<vector<int>> &heights, vector<int> &dir, vector<vector<int>> &vis, int val)
// {
//     if (i < 0 or i >= heights.size() or j < 0 or j >= heights[0].size() or vis[i][j] or abs(heights[i][j] - val) > effort)
//     {
//         return false;
//     }
//     if (i == heights.size() - 1 and j == heights[0].size() - 1)
//     {
//         return true;
//     }
//     vis[i][j] = 1;
//     for (int m = 0; m < 4; m++)
//     {
//         int newx = i + dir[m];
//         int newy = j + dir[m + 1];
//         if (help(newx, newy, effort, heights, dir, vis, heights[i][j]))
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int minimumEffortPath(vector<vector<int>> &heights)
// {
//     int lo = 0;
//     int ans;
//     int hi = 1e6;
//     vector<int> dir = {0, 1, 0, -1, 0};
//     while (lo <= hi)
//     {
//         vector<vector<int>> vis(100, vector<int>(100, 0));
//         int effort = (lo + hi) / 2;
//         if (help(0, 0, effort, heights, dir, vis, heights[0][0]))
//         {
//             ans = effort;
//             hi = effort - 1;
//         }
//         else
//         {
//             lo = effort + 1;
//         }
//     }
//     return ans;
// }

// bellmanford way:

// int minimumEffortPath(vector<vector<int>> &heights)
// {
//     int r = heights.size();
//     int c = heights[0].size();
//     vector<vector<int>> dp(r, vector<int>(c, 1e9));
//     vector<int> dir = {0, 1, 0, -1, 0};
//     dp[0][0] = 0;
//     bool relaxed = true;
//     for (int i = 0; i < (r * c )- 1 and relaxed; i++)
//     {
//         relaxed = false;
//         for (int j = 0; j < r; j++)
//         {
//             for (int k = 0; k < c; k++)
//             {
//                 for (int l = 0; l < 4; i++)
//                 {
//                     int newr = j + dir[l];
//                     int newc = k + dir[l + 1];
//                     if (newr >= r or newr < 0 or newc >= c or newc < 0 or dp[j][k] >= dp[newr][newc])
//                     {
//                         continue;
//                     }
//                     int diff = abs(heights[j][k] - heights[newr][newc]);
//                     if (dp[newr][newc] > max(dp[j][k], diff))
//                     {
//                         dp[newr][newc] = max(dp[j][k], diff);
//                         relaxed = true;
//                     }
//                 }
//             }
//         }
//     }
//     return dp[r - 1][c - 1];
// }

// 787. Cheapest Flights Within K Stops:There are n cities connected by some number of flights. You are given an array flights where flights[i] = [fromi, toi, pricei] indicates that there is a flight from city fromi to city toi with cost pricei.You are also given three integers src, dst, and k, return the cheapest price from src to dst with at most k stops. If there is no such route, return -1.

// int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int k)
// {
//     vector<vector<pair<int, int>>> adj(n, vector<pair<int, int>>());
//     vector<int> dist(n, 1e9);
//     // stops,node ,dist
//     queue<pair<int, pair<int, int>>> q;
//     for (auto it : flights)
//     {
//         adj[it[0]].push_back({it[1], it[2]});
//     }
//     dist[src] = 0;
//     q.push({0, {src, 0}});
//     while (!q.empty())
//     {
//         auto it = q.front();
//         q.pop();
//         int stopss = it.first;
//         int nodee = it.second.first;
//         int distancee = it.second.second;
//         if (stopss > k)
//             continue;
//         for (auto it : adj[nodee])
//         {
//             int adjj = it.first;
//             int wadjj = it.second;
//             if (dist[adjj] > wadjj + distancee and stopss <= k)
//             {
//                 dist[adjj] = wadjj + distancee;
//                 q.push({stopss + 1, {adjj, dist[adjj]}});
//             }
//         }
//     }
//     if (dist[dst] != 1e9)
//     {
//         return dist[dst];
//     }
//     return -1;
// }

// bellman ford algo:

// int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int k)
// {
//     vector<int> cost(n, 1e9);
//     cost[src] = 0;
//     for (int i = 0; i <= k; i++)
//     {
//         vector<int> temp(cost);
//         for (int i = 0; i < flights.size(); i++)
//         {
//             int cur = flights[i][0];
//             int next = flights[i][1];
//             int price = flights[i][2];
//             if (cost[cur] == 1e9)
//             {
//                 continue;
//             }
//             temp[next] = min(temp[next], price + cost[cur]);
//         }
//         cost = temp;
//     }
//     return cost[dst] == 1e9 ? -1 : cost[dst];
// }

// 743. Network Delay Time:You are given a network of n nodes, labeled from 1 to n. You are also given times, a list of travel times as directed edges times[i] = (ui, vi, wi), where ui is the source node, vi is the target node, and wi is the time it takes for a signal to travel from source to target.We will send a signal from a given node k. Return the minimum time it takes for all the n nodes to receive the signal. If it is impossible for all the n nodes to receive the signal, return -1.

// int networkDelayTime(vector<vector<int>> &times, int n, int k)
// {
//     using pii = pair<int, int>;
//     int mini = -1e9;
//     // dist ,node
//     priority_queue<pii, vector<pii>, greater<pii>> q;
//     vector<vector<pii>> adj(n  );
//     for (auto it : times)
//     {
//         adj[it[0]-1].push_back({it[1]-1, it[2]});
//     }
//     vector<int> dist(n , 1e9);
//     dist[k-1] = 0;
//     q.push({0, k-1});
//     while (!q.empty())
//     {
//         auto it = q.top();
//         q.pop();
//         int node = it.second;
//         int d = it.first;
//         for (auto it : adj[node])
//         {
//             int adjnode = it.first;
//             int adjwt = it.second;
//             if (dist[adjnode] > d + adjwt)
//             {
//                 dist[adjnode] = d + adjwt;
//                 q.push({dist[adjnode], adjnode});
//             }
//         }
//     }
//     for (int i = 0; i < dist.size(); i++)
//     {
//         if (dist[i] == 1e9)
//             return -1;
//         mini = max(mini, dist[i]);
//     }
//     return mini;
// }

// int networkDelayTime(vector<vector<int>> &times, int n, int k)
// {
//     vector<int> dis(n + 1, 1e9);
//     dis[k] = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (auto it : times)
//         {
//             int u = it[0], v = it[1], w = it[2];
//             dis[v] = min(dis[v], dis[u] + w);
//         }
//     }
//     int maxi = -1e9;
//     for (int i = 1; i < dis.size(); i++)
//     {
//         if (dis[i] == 1e9)
//             return -1;
//         maxi = max(maxi, dis[i]);
//     }
//     return maxi;
// }

// 1976. Number of Ways to Arrive at Destination:You are in a city that consists of n intersections numbered from 0 to n - 1 with bi-directional roads between some intersections. The inputs are generated such that you can reach any intersection from any other intersection and that there is at most one road between any two intersections.You are given an integer n and a 2D integer array roads where roads[i] = [ui, vi, timei] means that there is a road between intersections ui and vi that takes timei minutes to travel. You want to know in how many ways you can travel from intersection 0 to intersection n - 1 in the shortest amount of time.Return the number of ways you can arrive at your destination in the shortest amount of time. Since the answer may be large, return it modulo 109 + 7.

// typedef pair<long long, long long> pll;
// typedef pair<int, int> pii;
// int countPaths(int n, vector<vector<int>> &roads)
// {
//     vector<vector<pii>> adj(n);
//     for (auto it : roads)
//     {
//         adj[it[0]].push_back({it[1], it[2]});
//         adj[it[1]].push_back({it[0], it[2]});
//     }
//     vector<long long> dis(n, LONG_MAX);
//     vector<long long> ways(n, 0);
//     ways[0] = 1;
//     dis[0] = 0;
//     // dist ,node
//     priority_queue<pll, vector<pll>, greater<pll>> q;
//     q.push({0, 0});
//     int mod = (int)(1e9 + 7);
//     while (!q.empty())
//     {
//         auto it = q.top();
//         q.pop();
//         long long dist = it.first;
//         int nodee = it.second;
//         for (auto it : adj[nodee])
//         {
//             int adjnode = it.first;
//             long long adjwt = it.second;
//             if (dis[adjnode] > (adjwt + dist))
//             {
//                 dis[adjnode] = adjwt + dist;
//                 ways[adjnode] = ways[nodee];
//                 q.push({dis[adjnode], adjnode});
//             }
//             else if (dis[adjnode] == adjwt + dist)
//             {
//                 ways[adjnode] = (ways[adjnode] + ways[nodee]) % mod;
//             }
//         }
//     }
//     return ways[n - 1];
// }

// G-39: Minimum Multiplications to Reach End Given start, end, and an array arr of n numbers. At each step, the start is multiplied by any number in the array and then a mod operation with 100000 is done to get the new start. Your task is to find the minimum steps in which the end can be achieved starting from the start. If it is not possible to reach the end, then return -1.

// just saw the intution code jate ho bhai ;)

// int minimumMultiplications(vector<int> &arr, int start, int end)
// {
//     vector<int> dis(100000, 1e9);
//     // cost,node
//     queue<pair<int, int>> q;
//     q.push({0, start});
//     int mode = 100000;
//     while (!q.empty())
//     {
//         auto it = q.front();
//         q.pop();
//         int node = it.second;
//         int cost = it.first;
//         if (node == end)
//         {
//             return cost;
//         }
//         for (auto it : arr)
//         {
//             int newnode = (it * node) % mode;
//             if (dis[newnode] > cost + 1)
//             {
//                 dis[newnode] = cost + 1;
//                 q.push({cost + 1, newnode});
//             }
//         }
//     }
//     return -1;
// }

// Distance from the Source (Bellman-Ford Algorithm):Given a weighted and directed graph of V vertices and E edges, Find the shortest distance of all the vertex's from the source vertex S. If a vertices can't be reach from the S then mark the distance as 10^8. Note: If the Graph contains a negative cycle then return an array consisting of only -1.

// vector<int> bellman_ford(int V, vector<vector<int>> &edges, int S)
// {
//     vector<int> dis(V, 1e8);
//     dis[S] = 0;
//     for (int i = 0; i < V - 1; i++)
//     {
//         for (int i = 0; i < edges.size(); i++)
//         {
//             int u = edges[i][0];
//             int v = edges[i][1];
//             int wtt = edges[i][2];
//             if (dis[u] != 1e8 and dis[v] > dis[u] + wtt)
//             {
//                 dis[v] = dis[u] + wtt;
//             }
//         }
//     }
//     for (int i = 0; i < edges.size(); i++)
//     {
//         int u = edges[i][0];
//         int v = edges[i][1];
//         int wtt = edges[i][2];
//         if (dis[u] != 1e8 and dis[v] > dis[u] + wtt)
//         {
//             return {-1};
//         }
//     }
//     return dis;
// }

// Floyd Warshall Algorithm: G-42:Problem Statement: The problem is to find the shortest distances between every pair of vertices in a given edge-weighted directed graph. The graph is represented as an adjacency matrix of size n*n. Matrix[i][j] denotes the weight of the edge from i to j. If Matrix[i][j]=-1, it means there is no edge from i to j.Do it in place.

// void shortest_distance(vector<vector<int>> &matrix)
// {
//     int n = matrix.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (matrix[i][j] == -1)
//             {
//                 matrix[i][j] = 1e4;
//             }
//         }
//     }
//     for (int k = 0; k < n; k++)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
//             }
//         }
//     }
//     return;
// }

// 1334. Find the City With the Smallest Number of Neighbors at a Threshold Distance:There are n cities numbered from 0 to n-1. Given the array edges where edges[i] = [fromi, toi, weighti] represents a bidirectional and weighted edge between cities fromi and toi, and given the integer distanceThreshold.Return the city with the smallest number of cities that are reachable through some path and whose distance is at most distanceThreshold, If there are multiple such cities, return the city with the greatest number.Notice that the distance of a path connecting cities i and j is equal to the sum of the edges' weights along that path.

// int findTheCity(int n, vector<vector<int>> &edges, int distanceThreshold)
// {
//     // apply floyd warshalls algo to get the matrix:
//     vector<vector<int>> ma(n, vector<int>(n, 1e9));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i == j)
//             {
//                 ma[i][j] = 0;
//             }
//         }
//     }
//     for (auto it : edges)
//     {
//         int u = it[0];
//         int v = it[1];
//         int wtt = it[2];
//         ma[u][v] = wtt;
//         ma[v][u] = wtt;
//     }
//     for (int k = 0; k < n; k++)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 ma[i][j] = min(ma[i][j], ma[i][k] + ma[k][j]);
//             }
//         }
//     }
//     pair<int, int> p;
//     p.first = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         int cnt = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (ma[i][j] <= distanceThreshold)
//             {
//                 cnt++;
//             }
//         }
//         if (p.first >= cnt)
//         {
//             p.first = cnt;
//             p.second = i;
//         }
//     }
//     return p.second;
// }

// void spfa(int n, vector<vector<pair<int, int>>> &adj, vector<int> &dis, int src)
// {
//     queue<int> q;
//     vector<int> times(n, 0);
//     q.push(src);
//     while (!q.empty())
//     {
//         int u = q.front();
//         q.pop();
//         for (auto it : adj[u])
//         {
//             int v = it.first;
//             int newwt = it.second;
//             if (dis[v] > dis[u] + newwt)
//             {
//                 dis[v] = dis[u] + newwt;
//                 q.push(v);
//                 times[v]++;
//                 if (times[v] > n)
//                 {
//                     cout << "error";
//                 }
//             }
//         }
//     }
// }

// int findTheCity(int n, vector<vector<int>> &edges, int distanceThreshold)
// {
//     vector<vector<pair<int, int>>> adj(n);
//     for (auto it : edges)
//     {
//         int u = it[0];
//         int v = it[1];
//         int wt = it[2];
//         adj[u].push_back({v, wt});
//         adj[v].push_back({u, wt});
//     }
//     vector<vector<int>> dis(n, vector<int>(n, 1e9 + 7));
//     for (int i = 0; i < n; i++)
//     {
//         dis[i][i] = 0;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         spfa(n, adj, dis[i], i);
//     }
//         pair<int, int> p;
//         p.first = INT_MAX;
//         for (int i = 0; i < n; i++)
//         {
//             int cnt = 0;
//             for (int j = 0; j < n; j++)
//             {
//                 if (dis[i][j] <= distanceThreshold)
//                 {
//                     cnt++;
//                 }
//             }
//             if (p.first >= cnt)
//             {
//                 p.first = cnt;
//                 p.second = i;
//             }
//         }
//         return p.second;
// }

// Given a weighted, undirected and connected graph of V vertices and E edges. The task is to find the sum of weights of the edges of the Minimum Spanning Tree. Given adjacency list adj as input parameters . Here adj[i] contains vectors of size 2, where the first integer in that vector denotes the end of the edge and the second integer denotes the edge weight.Prim’s Algorithm – Minimum Spanning Tree

// int spanningTree(int V, vector<vector<int>> adj[])
// {
//     int sum = 0;
//     // dist, node
//     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> q;
//     q.push({0, 0});
//     vector<bool> vis(V, false);
//     while (!q.empty())
//     {
//         auto it = q.top();
//         q.pop();
//         int node = it.second;
//         int wt = it.first;
//         if (!vis[node])
//         {
//             vis[node] = true;
//             sum += wt;
//             for (auto it : adj[node])
//             {
//                 int newnode = it[0];
//                 int newwt = it[1];
//                 q.push({newwt, newnode});
//             }
//         }
//     }
//     return sum;
// }

// to store mst:

// void spanningTree(int V, vector<vector<int>> adj[])
// {
//     // wt ,node,parent
//     priority_queue<vector<int>, vector<vector<int>>, greater<>> q;
//     q.push({0, 0, -1});
//     vector<bool> vis(V, false);
//     vector<pair<int, int>> mst;
//     while (!q.empty())
//     {
//         auto top = q.top();
//         q.pop();
//         int wt = top[0];
//         int node = top[1];
//         int parentnode = top[2];
//         if (vis[node])
//         {
//             continue;
//         }
//         vis[node] = true;
//         mst.push_back({parentnode, node});
//         for (auto it : adj[node])
//         {
//             int newnode = it[0];
//             int newwt = it[1];
//             q.push({newwt, newnode, node});
//         }
//     }
//     for (auto it : mst)
//     {
//         cout << it.first << "-" << it.second << endl;
//     }
// }

// Disjoint Set :Union by Rank : we will connect the ultimate parent with a smaller rank to the other ultimate parent with a larger rank. But if the ranks are equal, we can connect any parent to the other parent and we will increase the rank by one for the parent node to whom we have connected the other one.

class DisjointSet
{
    // vector<int> rank, parent, size;

public:
    // for one question kept  public:
    vector<int> rank, parent, size;
    DisjointSet(int n)
    {
        size.resize(n + 1, 1);
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }
    int findUPar(int node)
    {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }
    void unionByRank(int u, int v)
    {
        int pu = findUPar(u);
        int pv = findUPar(v);
        if (pu == pv)
            return;
        int rankpu = rank[pu];
        int rankpv = rank[pv];
        if (rankpu > rankpv)
        {
            // pv smaller
            parent[pv] = pu;
        }
        else if (rankpu < rankpv)
        {
            parent[pu] = pv;
        }
        else
        {
            parent[pu] = pv;
            rank[pv]++;
        }
    }
    void unionBySize(int u, int v)
    {
        int pu = findUPar(u);
        int pv = findUPar(v);
        if (pu == pv)
            return;
        int sizeu = size[pu];
        int sizev = size[pv];
        if (sizeu > sizev)
        {
            // pv smaller
            parent[pv] = pu;
            size[pu] += size[pv];
        }
        else
        {
            parent[pu] = pv;
            size[pv] += size[pu];
        }
    }
};

// Kruskal’s Algorithm – Minimum Spanning Tree:Given a weighted, undirected, and connected graph of V vertices and E edges. The task is to find the sum of weights of the edges of the Minimum Spanning Tree.

// int spanningTree(int V, vector<vector<int>> adj[])
// {
//     // wt,u,v
//     vector<vector<int>> edge;
//     for (int i = 0; i < V; i++)
//     {
//         for (auto it : adj[i])
//         {
//             int u = i;
//             int v = it[0];
//             int wt = it[1];
//             edge.push_back({wt, u, v});
//         }
//     }
//     int ans = 0;
//     sort(edge.begin(), edge.end());
//     DisjointSet ds(V);
//     for (auto it : edge)
//     {
//         int u = it[1];
//         int v = it[2];
//         int wt = it[0];
//         if (ds.findUPar(u) != ds.findUPar(v))
//         {
//             ds.unionByRank(u, v);
//             ans+=wt;
//         }
//     }
//     return ans;
// }

// 1319. Number of Operations to Make Network Connected:There are n computers numbered from 0 to n - 1 connected by ethernet cables connections forming a network where connections[i] = [ai, bi] represents a connection between computers ai and bi. Any computer can reach any other computer directly or indirectly through the network.You are given an initial computer network connections. You can extract certain cables between two directly connected computers, and place them between any pair of disconnected computers to make them directly connected.Return the minimum number of times you need to do this in order to make all the computers connected. If it is not possible, return -1.

// int makeConnected(int n, vector<vector<int>> &connections)
// {
//     // We need to find extra edges and remove from that and join the disconnected componenets:
//     int extra = 0;
//     DisjointSet ds(n);
//     for (auto it : connections)
//     {
//         int u = it[0];
//         int v = it[1];
//         if (ds.findUPar(u) == ds.findUPar(v))
//         {
//             extra++;
//         }
//         else
//         {
//             ds.unionByRank(u, v);
//         }
//     }
//     int dc = 0;
//     // find disconnected components:
//     for (int i = 0; i < n; i++)
//     {
//         if (ds.findUPar(i) == i)
//         {
//             dc++;
//         }
//     }
//     dc--;
//     if (dc > extra)
//     {
//         return -1;
//     }
//     else
//     {
//         return dc;
//     }
// }

// 947. Most Stones Removed with Same Row or Column :On a 2D plane, we place n stones at some integer coordinate points. Each coordinate point may have at most one stone.A stone can be removed if it shares either the same row or the same column as another stone that has not been removed.Given an array stones of length n where stones[i] = [xi, yi] represents the location of the ith stone, return the largest possible number of stones that can be removed.

// int removeStones(vector<vector<int>> &stones)
// {
//     int maxrow = 0, maxcol = 0;
//     for (auto it : stones)
//     {
//         maxrow = max(maxrow, it[0]);
//         maxcol = max(maxcol, it[1]);
//     }
//     DisjointSet ds(maxrow + maxcol + 1);
//     unordered_map<int, int> mp;
//     set<int>s;
//     for (auto it : stones)
//     {
//         int u = it[0], v = it[1] + maxrow + 1;
//         mp[u]++;
//         s.insert(u);s.insert(v);
//         mp[v]++;
//         ds.unionByRank(u, v);
//     }
//     int grp = 0;
//     // for (auto it : mp)
//     // {
//     //     if (ds.findUPar(it.first) == it.first)
//     //     {
//     //         grp++;
//     //     }
//     // }
//     for(auto it: s)
//     {
//         if (ds.findUPar(it) == it)
//         {
//             grp++;
//         }
//     }
//     return stones.size() - grp;
// }

// 721. Accounts Merge:Given a list of accounts where each element accounts[i] is a list of strings, where the first element accounts[i][0] is a name, and the rest of the elements are emails representing emails of the account.Now, we would like to merge these accounts. Two accounts definitely belong to the same person if there is some common email to both accounts. Note that even if two accounts have the same name, they may belong to different people as people could have the same name. A person can have any number of accounts initially, but all of their accounts definitely have the same name.After merging the accounts, return the accounts in the following format: the first element of each account is the name, and the rest of the elements are emails in sorted order. The accounts themselves can be returned in any order.

// vector<vector<string>> accountsMerge(vector<vector<string>> &accounts)
// {
//     // email ,index
//     unordered_map<string, int> mp;
//     int n = accounts.size();
//     DisjointSet ds(n);
//     int ind = 0;
//     for (auto it : accounts)
//     {
//         // it will be vector of string
//         for (int i = 1; i < it.size(); i++)
//         {
//             if (mp.find(it[i]) == mp.end())
//             {
//                 mp[it[i]] = ind;
//             }
//             else
//             {
//                 ds.unionByRank(ind, mp[it[i]]);
//             }
//         }
//         ind++;
//     }
//     vector<string> mergedMail[n];
//     for (auto it : mp)
//     {
//         string emaill = it.first;
//         int indexx = it.second;
//         int uindexx = ds.findUPar(indexx);
//         mergedMail[uindexx].push_back(emaill);
//     }
//     vector<vector<string>> ans;
//     for (int i = 0; i < n; i++)
//     {
//         vector<string> mergemailVector = mergedMail[i];
//         if (mergemailVector.size() == 0)
//             continue;
//         sort(mergemailVector.begin(), mergemailVector.end());
//         vector<string> tAns;
//         tAns.push_back(accounts[i][0]);
//         tAns.insert(tAns.end(), mergemailVector.begin(), mergemailVector.end());
//         ans.push_back(tAns);
//     }
//     return ans;
// }

// dfs :

// void dfs(vector<string> &tans, string mail, unordered_map<string, vector<string>> &adjacent, unordered_set<string> &visited)
// {
//     visited.insert(mail);
//     tans.push_back(mail);
//     for (auto it : adjacent[mail])
//     {
//         if (visited.find(it) == visited.end())
//         {
//             dfs(tans, it, adjacent, visited);
//         }
//     }
// }

// vector<vector<string>> accountsMerge(vector<vector<string>> &accounts)
// {
//     unordered_set<string> visited;
//     unordered_map<string, vector<string>> adjacent;
//     int n = accounts.size();
//     for (auto it : accounts)
//     {
//         string firstEmail = it[1];
//         for (int i = 2; i < it.size(); i++)
//         {
//             adjacent[firstEmail].push_back(it[i]);
//             adjacent[it[i]].push_back(firstEmail);
//         }
//     }
//     vector<vector<string>> ans;
//     for (auto it : accounts)
//     {
//         string name = it[0];
//         string firstMail = it[1];
//         if (visited.find(firstMail) == visited.end())
//         {
//             vector<string> tAns;
//             tAns.push_back(name);
//             dfs(tAns, firstMail, adjacent, visited);
//             sort(tAns.begin() + 1, tAns.end());
//             ans.push_back(tAns);
//         }
//     }
//     return ans;
// }

// Number of Islands – II – Online Queries:You are given an n, m which means the row and column of the 2D matrix, and an array of size k denoting the number of operations. Matrix elements are 0 if there is water or 1 if there is land. Originally, the 2D matrix is all 0 which means there is no land in the matrix. The array has k operator(s) and each operator has two integers A[i][0], A[i][1] means that you can change the cell matrix[A[i][0]][A[i][1]] from sea to island. Return how many islands are there in the matrix after each operation. You need to return an array of size k. An island means a group of 1s such that they share a common side.

// vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators)
// {
//     int grp = 0;
//     DisjointSet ds((n * m)  );
//     int k = operators.size();
//     vector<int> ans(k, 0);
//     vector<int> visi((n * m) , 0);
//     int ind = 0;
//     vector<int> dir = {0, 1, 0, -1, 0};
//     for (auto it : operators)
//     {
//         int u = it[0];
//         int v = it[1];
//         if (!visi[u * m + v])
//         {
//             visi[u * m + v] = 1;
//             grp++;
//             for (int i = 0; i < 4; i++)
//             {
//                 int newu = u + dir[i];
//                 int newv = v + dir[i + 1];
//                 if (newu >= 0 and newv >= 0 and newv < m and newu < n and visi[newu * m + newv] and ds.findUPar(u * m + v) != ds.findUPar(newu * m + newv))
//                 {
//                     grp--;
//                     ds.unionByRank(u * m + v, newu * m + newv);
//                 }
//             }
//         }
//         ans[ind++] = grp;
//     }
//     return ans;
// }

// 827. Making A Large Island:You are given an n x n binary matrix grid. You are allowed to change at most one 0 to be 1.Return the size of the largest island in grid after applying this operation.An island is a 4-directionally connected group of 1s.

// int check(vector<vector<int>> &grid, int x, int y)
// {
//     int dir[] = {0, -1, 0, 1, 0};
//     unordered_set<int> seen;
//     int n = grid.size();
//     stack<int> st;
//     st.push(x * n + y);
//     seen.insert(x * n + y);
//     while (!st.empty())
//     {
//         int top = st.top();
//         st.pop();
//         int r = top / n;
//         int c = top % n;
//         for (int k = 0; k < 4; k++)
//         {
//             int newr = r + dir[k];
//             int newc = c + dir[k + 1];
//             if (newr >= 0 and newc >= 0 and newr < n and newc < n and grid[newr][newc] == 1 and !seen.count(newr * n + newc))
//             {
//                 st.push(newr * n + newc);
//                 seen.insert(newr * n + newc);
//             }
//         }
//     }
//     return seen.size();
// }
// int largestIsland(vector<vector<int>> &grid)
// {
//     int n = grid.size();
//     int maxi = 0;
//     bool haszero = false;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (grid[i][j] == 0)
//             {
//                 haszero = true;
//                 grid[i][j] = 1;
//                 maxi = max(maxi, check(grid, i, j));
//                 grid[i][j] = 0;
//             }
//         }
//     }
//     if (!haszero)
//     {
//         return n * n;
//     }
//     return maxi;
// }

// int dfs(int r, int c, int index, vector<vector<int>> &grid)
// {
//     int dir[] = {0, -1, 0, 1, 0};
//     int ans = 1;
//     int n = grid.size();
//     grid[r][c] = index;
//     for (int k = 0; k < 4; k++)
//     {
//         int newr = r + dir[k];
//         int newc = c + dir[k + 1];
//         if (newr >= 0 and newr < n and newc >= 0 and newc < n and grid[newr][newc] == 1)
//         {
//             grid[newr][newc] = index;
//             ans += dfs(newr, newc, index, grid);
//         }
//     }
//     return ans;
// }
// int largestIsland(vector<vector<int>> &grid)
// {
//     int dir[] = {0, -1, 0, 1, 0};
//     int index = 2;
//     int n = grid.size();
//     vector<int> area(n * n + 2, 0);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (grid[i][j] == 1)
//             {
//                 area[index] = dfs(i, j, index, grid);
//                 index++;
//             }
//         }
//     }
//     int ans = 0;
//     for (int i = 0; i < n * n + 2; i++)
//     {
//         ans = max(ans, area[i]);
//     }
//     for (int r = 0; r < n; r++)
//     {
//         for (int c = 0; c < n; c++)
//         {
//             if (grid[r][c] == 0)
//             {
//                 set<int> s;
//                 for (int k = 0; k < 4; k++)
//                 {
//                     int newr = r + dir[k];
//                     int newc = c + dir[k + 1];
//                     if (newr >= 0 and newc >= 0 and newr < n and newc < n and grid[newr][newc] > 1)
//                     {
//                         s.insert(grid[newr][newc]);
//                     }
//                 }
//                 int temp = 1;
//                 for (auto it : s)
//                 {
//                     temp += area[it];
//                 }
//                 ans = max(ans, temp);
//             }
//         }
//     }
//     return ans;
// }

// int largestIsland(vector<vector<int>> &grid)
// {
//     bool hasOneZero=false;
//     int n = grid.size();
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(grid[i][j]==0)
//             {
//                 hasOneZero=true;break;
//             }
//         }
//     }
//     if(!hasOneZero)
//     return n*n;
//     DisjointSet ds(n * n + 1);
//     vector<int> dir = {0, 1, 0, -1, 0};
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (grid[i][j] == 1)
//             {
//                 for (int k = 0; k < 4; k++)
//                 {
//                     int newi = i + dir[k];
//                     int newj = j + dir[k + 1];
//                     if (newi >= 0 and newj >= 0 and newi < n and newj < n and grid[newi][newj] == 1)
//                     {
//                         ds.unionBySize(j + i * n, newj + newi * n);
//                     }
//                 }
//             }
//         }
//     }
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (grid[i][j] == 0)
//             {
//                 int tans = 1;
//                 set<int> st;
//                 for (int k = 0; k < 4; k++)
//                 {
//                     int newi = i + dir[k];
//                     int newj = j + dir[k + 1];
//                     if (newi >= 0 and newj >= 0 and newi < n and newj < n and grid[newi][newj] == 1)
//                     {
//                         st.insert(ds.findUPar(newj + newi * n));
//                     }
//                 }
//                 for (auto it : st)
//                 {
//                     tans += ds.size[it];
//                 }
//                 ans = max(ans, tans);
//             }
//         }
//     }
//     return ans;
// }

// 778. Swim in Rising Water:You are given an n x n integer matrix grid where each value grid[i][j] represents the elevation at that point (i, j).The rain starts to fall. At time t, the depth of the water everywhere is t. You can swim from a square to another 4-directionally adjacent square if and only if the elevation of both squares individually are at most t. You can swim infinite distances in zero time. Of course, you must stay within the boundaries of the grid during your swim.Return the least time until you can reach the bottom right square (n - 1, n - 1) if you start at the top left square (0, 0).

// int swimInWater(vector<vector<int>> &grid)
// {
//     // lvl,cordinates:
//     priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> q;
//     int n = grid.size();
//     int m = grid[0].size();
//     vector<vector<bool>> vis(n, vector<bool>(m, false));
//     int dir[] = {0, 1, 0, -1, 0};
//     q.push({grid[0][0], {0, 0}});
//     int ans = grid[0][0];
//     vis[0][0] = true;
//     while (!q.empty())
//     {
//         int sz = q.size();
//         for (int i = 0; i < sz; i++)
//         {
//             auto it = q.top();
//             q.pop();
//             int tempt = it.first;
//             ans = max(ans, tempt);
//             int x = it.second.first;
//             int y = it.second.second;
//             if (x == n - 1 and y == m - 1)
//                 return ans;
//             for (int i = 0; i < 4; i++)
//             {
//                 int newx = x + dir[i];
//                 int newy = y + dir[i + 1];
//                 if (newx >= 0 and newx < n and newy >= 0 and newy < m and vis[newx][newy] == false)
//                 {
//                     q.push({grid[newx][newy], {newx, newy}});
//                     vis[newx][newy] = true;
//                 }
//             }
//         }
//     }
//     return ans;
// }

// Using union find:

// int swimInWater(vector<vector<int>> &grid)
// {
//     int n = grid.size();
//     pair<int, int> locationsReachable[n * n];
//     vector<vector<int>> vis(n, vector<int>(n, 0));
//     DisjointSet ds(n * n);
//     int dir[] = {0, 1, 0, -1, 0};
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             locationsReachable[grid[i][j]] = {i, j};
//         }
//     }
//     for (int time = 0; time < n * n; time++)
//     {
//         int x = locationsReachable[time].first;
//         int y = locationsReachable[time].second;
//         vis[x][y] = 1;
//         for (int k = 0; k < 4; k++)
//         {
//             int newx = x + dir[k];
//             int newy = dir[k + 1] + y;
//             if (newx >= 0 and newx < n and newy >= 0 and newy < n and vis[newx][newy])
//             {
//                 ds.unionByRank(x * n + y, newx * n + newy);
//             }
//         }
//         if (ds.findUPar(0) == ds.findUPar(n * n - 1))
//             return time;
//     }
//     return n * n - 1;
// }

// 1192. Critical Connections in a Network:There are n servers numbered from 0 to n - 1 connected by undirected server-to-server connections forming a network where connections[i] = [ai, bi] represents a connection between servers ai and bi. Any server can reach other servers directly or indirectly through the network.A critical connection is a connection that, if removed, will make some servers unable to reach some other server.Return all critical connections in the network in any order.

// void dfs(int node, int parent, int &time, vector<int> adj[], vector<int> &vis, int tin[], int low[], vector<vector<int>> &bridges)
// {
//     vis[node] = 1;
//     tin[node] = low[node] = time;
//     time++;
//     for (auto it : adj[node])
//     {
//         if (it == parent)
//             continue;
//         if (vis[it] == 0)
//         {
//             dfs(it, node, time, adj, vis, tin, low, bridges);
//             if (low[it] > tin[node])
//             {
//                 bridges.push_back({it, node});
//             }
//         }
//         else
//             low[node] = min(low[node], low[it]);
//     }
// }

// vector<vector<int>> criticalConnections(int n, vector<vector<int>> &connections)
// {
// vector<int> adj[n];
// for (auto it : connections)
// {
//     int u = it[0];
//     int v = it[1];
//     adj[u].push_back(v);
//     adj[v].push_back(u);
// }
//     vector<int> vis(n, 0);
//     int tin[n];
//     int low[n];
//     int time = 0;
//     vector<vector<int>> bridges;
//     dfs(0, -1, time, adj, vis, tin, low, bridges);
//     return bridges;
// }

// void dfs(int node, int parent, vector<int> &tin, vector<int> adj[], int &time, vector<int> &vis, vector<vector<int>> &res)
// {
//     time++;
//     tin[node] = time;
//     vis[node] = 1;
//     int currentTime = time;
//     for (auto it : adj[node])
//     {
//         if (it == parent)
//             continue;
//         if (!vis[it])
//             dfs(it, node, tin, adj, time, vis, res);
//         tin[node] = min(tin[node], tin[it]);
//         if (currentTime < tin[it])
//         {
//             res.push_back({node, it});
//         }
//     }
// }

// vector<vector<int>> criticalConnections(int n, vector<vector<int>> &connections)
// {
//     vector<int> adj[n];
//     for (auto it : connections)
//     {
//         int u = it[0];
//         int v = it[1];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     int time = 0;
//     vector<int> vis(n, 0);
//     vector<vector<int>> res;
//     vector<int> tin(n);
//     dfs(0, -1, tin, adj, time, vis, res);
//     return res;
// }

// void dfs(int node, int parent, vector<int> &tin, vector<int> &low, vector<int> adj[], int &time, vector<int> &vis, vector<int> &res)
// {
//     time++;
//     int child = 0;
//     vis[node] = 1;
//     tin[node] = low[node] = time;
//     for (auto it : adj[node])
//     {
//         if (it == parent)
//             continue;
//         if (!vis[it])
//         {
//             dfs(it, node, tin, low, adj, time, vis, res);
//             low[node] = min(low[node], low[it]);
//             if (low[it] >= tin[node] and parent != -1)
//             {
//                 res[node] = 1;
//             }
//             child++;
//         }
//         else
//         {
//             low[node] = min(low[node], tin[it]);
//         }
//     }
//     if (child > 1 and parent == -1)
//         res[node] = 1;
// }

// vector<int> articulationPoints(int n, vector<int> adj[])
// {
//     vector<int> mark(n, 0);
//     vector<int> ans;
//     vector<int> vis(n, 0);
//     vector<int> tin(n);
//     vector<int> low(n);
//     int timer = -1;
//     int parent = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (!vis[i])
//         {
//             dfs(i, -1, tin, low, adj, timer, vis, mark);
//         }
//     }
//     for (int i = 0; i < mark.size(); i++)
//     {
//         if (mark[i] == 1)
//         {
//             ans.push_back(i);
//         }
//     }
//     if (ans.size() == 0)
//         return {-1};
//     return ans;
// }





int main()
{

    return 0;
}