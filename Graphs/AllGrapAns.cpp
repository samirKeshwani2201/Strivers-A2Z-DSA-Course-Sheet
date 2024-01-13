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



int main()
{
    return 0;
}