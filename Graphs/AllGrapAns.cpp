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

// Shortest Path in Directed Acyclic Graph Topological Sort:Given a DAG, find the shortest path from the source to all other nodes in this DAG. In this problem statement, we have assumed the source vertex to be ‘0’. You will be given the weighted edges of the graph.

vector<int> shortestPath(int N, int M, vector<vector<int>> &edges)
{
    
}

int main()
{
    return 0;
}