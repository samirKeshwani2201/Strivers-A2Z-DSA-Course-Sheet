#include <bits/stdc++.h>
using namespace std;

//  Nth Fibonacci Number
// The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
//     F(n) = F(n - 1) + F(n - 2),
//     Where, F(1) = 1, F(2) = 1
// Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.
// "Indexing is start from 1"

// {
//     int helper(int n)
//     {
//         if (n == 1 || n == 2)
//             return 1;
//         return helper(n - 1) + helper(n - 2);
//     }
//     int main()
//     {
//         int n;
//         cin >> n;
//         cout << helper(n);
//         return 0;
//     }
//     //
//     int fibo(int n, vector<int> &dp)
//     {
//         if (n <= 1)
//             return n;
//         if (dp[n] != -1)
//             return dp[n];
//         return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
//     }
//     int main()
//     {
//         int n;
//         cin >> n;
//         vector<int> dp(n + 1, -1);
//         cout << fibo(n, dp);
//     }
//     // tabulation :
//     int main()
//     {
//         int n;
//         cin >> n;
//         vector<int> dp(n + 1, -1);
//         dp[0] = 0;
//         dp[1] = 1;
//         for (int i = 2; i <= n; i++)
//         {
//             dp[i] = dp[i - 1] + dp[i - 2];
//         }
//         return dp[n];
//     }
//     // space optimised :
//     int main()
//     {
//         int n;
//         cin >> n;
//         int prev = 1;
//         int prev2 = 0;
//         for (int i = 2; i <= n; i++)
//         {
//             int cur = prev + prev2;
//             prev2 = prev;
//             prev = cur;
//         }
//         return prev;
//     }
// }

// 70. Climbing Stairs
// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
// bottom up
// int help(int cur, int n, vector<int> &memo)
// {
//     if (cur == n)
//     {
//         return 1;
//     }
//     if (cur > n)
//     {
//         return 0;
//     }
//     if (memo[cur] != -1)
//         return memo[cur];
//     return memo[cur] = help(cur + 1, n, memo) + help(cur + 2, n, memo);
// }
// int climbStairs(int n)
// {
//     vector<int> memo(n, -1);
//     return help(0, n, memo);
// }
// top down
// int help(int n, vector<int> &dp)
// {
//     if (n < 0)
//         return 0;
//     if (n == 0)
//     {
//         return 1;
//     }
//     if (dp[n-1] != -1)
//     {
//         return dp[n-1];
//     }
//     return dp[n-1] = help(n - 1, dp) + help(n - 2, dp);
// }
// int climbStairs(int n)
// {
//     vector<int> dp(n, -1);
//     return help(n, dp);
// }
// int climbStairs(int n)
// {
//     if (n <= 0)
//         return 0;
//     if (n == 1)
//     {
//         return 1;
//     }
//     if (n == 2)
//     {
//         return 2;
//     }
//     int one_step_before = 2;
//     int two_step_before = 1;
//     int allways = 0;
//     for (int i = 2; i < n; i++)
//     {
//         allways = one_step_before + two_step_before;
//         two_step_before = one_step_before;
//         one_step_before = allways;
//     }
//     return allways;
// }

// space optimized :

// int climbStairs(int n)
// {
//     if (n <= 0)
//         return 0;
//     if (n == 1)
//     {
//         return 1;
//     }
//     if (n == 2)
//     {
//         return 2;
//     }
//     int one_step_before = 2;
//     int two_step_before = 1;
//     int allways = 0;
//     for (int i = 2; i < n; i++)
//     {
//         allways = one_step_before + two_step_before;
//         two_step_before = one_step_before;
//         one_step_before = allways;
//     }
//     return allways;
// }

//  Frog Jump:There is a frog on the '1st' step of an 'N' stairs long staircase. The frog wants to reach the 'Nth' stair. 'HEIGHT[i]' is the height of the '(i+1)th' stair.If Frog jumps from 'ith' to 'jth' stair, the energy lost in the jump is given by absolute value of ( HEIGHT[i-1] - HEIGHT[j-1] ). If the Frog is on 'ith' staircase, he can jump either to '(i+1)th' stair or to '(i+2)th' stair. Your task is to find the minimum total energy used by the frog to reach from '1st' stair to 'Nth' stair. For Example If the given ‘HEIGHT’ array is [10,20,30,10], the answer 20 as the frog can jump from 1st stair to 2nd stair (|20-10| = 10 energy lost) and then a jump from 2nd stair to last stair (|10-20| = 10 energy lost). So, the total energy lost is 20.

// int helpp(int index, int sum, int n, vector<int> &heigths)
// {
//     if (index == n)
//     {
//         return sum;
//     }
//     if (index > n)
//     {
//         return INT_MAX;
//     }
//     int one = helpp(index + 1, sum + abs(heigths[index - 1] - heigths[index]), n,
//                     heigths);
//     int two = helpp(index + 2, sum + abs(heigths[index - 1] - heigths[index + 1]),
//                     n, heigths);
//     return min(one, two);
// }

// int frogJump(int n, vector<int> &heights) { return helpp(1, 0, n, heights); }

// int helpp(int index, int n, vector<int> &heigths, vector<int> &dp)
// {
//     if (index == n - 1)
//     {
//         return 0;
//     }
//     if (dp[index] != -1)
//         return dp[index];
//     int one = index + 1 < n ? helpp(index + 1, n,
//                                     heigths, dp) +
//                                   abs(heigths[index] - heigths[index + 1])
//                             : INT_MAX;
//     int two = index + 2 < n ? helpp(index + 2,
//                                     n, heigths, dp) +
//                                   abs(heigths[index] - heigths[index + 2])
//                             : INT_MAX;
//     return dp[index] = min(one, two);
// }
// int frogJump(int n, vector<int> &heights)
// {
//     vector<int> dp(n + 1, -1);
//     return helpp(0, n, heights, dp);
// }

// top down

// int help(int index, int n, vector<int> &heigths, vector<int> &dp)
// {
//     if (index == 0)
//     {
//         return 0;
//     }
//     if (dp[index] != -1)
//     {
//         return dp[index];
//     }
//     // one jump before
//     int one = index - 1 >= 0 ? help(index - 1, n, heigths, dp) + abs(heigths[index] - heigths[index - 1]) : INT_MAX;
//     int two = index - 2 >= 0 ? help(index - 2, n, heigths, dp) + abs(heigths[index] - heigths[index - 2]) : INT_MAX;
//     return dp[index] = min(one, two);
// }

// int frogJump(int n, vector<int> &heights)
// {
//     vector<int> dp(n + 1, -1);
//     return help(n - 1, n, heights, dp);
// }

// tabulation approach :

// int frogJump(int n, vector<int> &heights)
// {
//     vector<int> dp(n + 1, -1);
//     dp[0] = 0;
//     for (int ind = 1; ind < n; ind++)
//     {
//         int j2 = INT_MAX;
//         if (ind > 1)
//             j2 = dp[ind - 2] + (abs(heights[ind] - heights[ind - 2]));
//         int j1 = dp[ind - 1] + (abs(heights[ind] - heights[ind - 1]));
//         dp[ind] = min(j1, j2);
//     }
//     return dp[n - 1];
// }

// space optimised :

// int frogJump(int n, vector<int> &heights)
// {
//     int prev = 0;
//     int pprev = prev;
//     for (int i = 1; i < n; i++)
//     {
//         int j2 = INT_MAX;
//         if (i > 1)
//         {
//             j2 = pprev + (abs(heights[i] - heights[i - 2]));
//         }
//         int j1 = prev + (abs(heights[i] - heights[i - 1]));
//         int cur = min(j2, j1);
//         pprev = prev;
//         prev = cur;
//     }
//     return prev;
// }

// There is an array of heights corresponding to 'n' stones. You have to reach from stone 1 to stone ‘n’.
// From stone 'i', it is possible to reach stones 'i'+1, ‘i’+2… ‘i’+'k' , and the cost incurred will be | Height[i]-Height[j] |, where 'j' is the landing stone. Return the minimum possible total cost incurred in reaching the stone ‘n’.
// Follow up question :

// simple recursion :
// int help(int n, int k, vector<int> &ht)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     vector<int> ji(k + 1, INT_MAX);
//     for (int i = 1; i <= k; i++)
//     {
//         if (n - i >= 0)
//             ji[i] = help(n - i, k, ht) + abs(ht[n] - ht[n - i]);
//     }
//     return *min_element(ji.begin(), ji.end());
// }

// int minimizeCost(int n, int k, vector<int> &height)
// {
//     return help(n - 1, k, height);
// }

// dp:

// int help(int n, int k, vector<int> &ht, vector<int> &dp)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (dp[n] != -1)
//         return dp[n];
//     vector<int> ji(k + 1, INT_MAX);
//     for (int i = 1; i <= k; i++)
//     {
//         if (n - i >= 0)
//             ji[i] = help(n - i, k, ht, dp) + abs(ht[n] - ht[n - i]);
//     }
//     return dp[n] = *min_element(ji.begin(), ji.end());
// }

// int minimizeCost(int n, int k, vector<int> &height)
// {
//     vector<int> dp(n + 1, -1);
//     return help(n - 1, k, height, dp);
// }

// tabulation :

// int minimizeCost(int n, int k, vector<int> &ht)
// {
//     vector<int> dp(n, -1);
//     dp[0] = 0;
//     for (int i = 1; i < n; i++)
//     {
//         vector<int> ji(k + 1, INT_MAX);
//         for (int j = 1; j <= k; j++)
//         {
//             if (i - j >= 0)
//                 ji[j] = dp[i - j] + abs(ht[i] - ht[i - j]);
//         }
//         dp[i] = *min_element(ji.begin(), ji.end());
//     }
//     return dp[n - 1];
// }

// 198. House Robber:You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

// simple reursion:

// int help(int n, vector<int> &nums)
// {
//     if (n == 0)
//     {
//         return nums[0];
//     }
//     if (n < 0)
//     {
//         return 0;
//     }
//     // pick current :
//     int pick = nums[n] + help(n - 2, nums);
//     int notPick = help(n - 1, nums);
//     return max(pick, notPick);
// }

// int rob(vector<int> &nums)
// {
//     return help(nums.size() - 1, nums);
// }

// dp:

// int help(int n, vector<int> &nums, vector<int> &dp)
// {
//     if (n == 0)
//     {
//         return dp[n]= nums[0];
//     }
//     if (n < 0)
//     {
//         return 0;
//     }
//     if (dp[n] != -1)
//         return dp[n];
//     // pick current :
//     int pick = nums[n] + help(n - 2, nums, dp);
//     int notPick = help(n - 1, nums, dp);
//     return dp[n] = max(pick, notPick);
// }

// int rob(vector<int> &nums)
// {
//     vector<int> dp(nums.size(), -1);
//     return help(nums.size() - 1, nums, dp);
// }

// // tabulation:

// int rob(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> dp(n, -1);
//     dp[0] = nums[0];
//     for (int i = 1; i < n; i++)
//     {
//         int pick = nums[i];
//         if (i - 2 >= 0)
//             pick += dp[i - 2];
//         int notPick = dp[i - 1];
//         dp[i] = max(pick, notPick);
//     }
//     return dp[n - 1];
// }

// // space optimised :

// int rob(vector<int> &nums)
// {
//     int n = nums.size();
//     int prev = nums[0], pprev = 0;
//     for (int i = 1; i < n; i++)
//     {
//         int pick = nums[i];
//         if (i - 2 >= 0)
//             pick += pprev;
//         int notPick = prev;
//         int cur = max(pick, notPick);
//         pprev = prev;
//         prev = cur;
//     }
//     return prev;
// }

// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses were broken into on the same night.Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

// int help(int n, vector<int> &nums, vector<int> &dp)
// {
//     if (n == 0)
//     {
//         return dp[n] = nums[0];
//     }
//     if (n < 0)
//     {
//         return 0;
//     }
//     if (dp[n] != -1)
//         return dp[n];
//     // pick current :
//     int pick = nums[n] + help(n - 2, nums, dp);
//     int notPick = help(n - 1, nums, dp);
//     return dp[n] = max(pick, notPick);
// }

// int rob(vector<int> &nums)
// {
//     int n = nums.size();
//     if (nums.size() == 1)
//         return nums[0];
//     vector<int> nums1, nums2;
//     for (int i = 0; i < nums.size() - 1; i++)
//     {
//         nums1.push_back(nums[i]);
//     }
//     for (int i = 1; i < nums.size(); i++)
//     {
//         nums2.push_back(nums[i]);
//     }
//     vector<int> dp(n, -1);
//     int ans1 = help(n - 2, nums1, dp);
//     vector<int> dp1(n, -1);
//     int ans2 = help(n - 2, nums2, dp1);
//     return max(ans1, ans2);
// }

// int robUtil(vector<int> &nums)
// {
//     int n = nums.size();
//     int prev = nums[0], pprev = 0;
//     for (int i = 1; i < n; i++)
//     {
//         int pick = nums[i];
//         if (i - 2 >= 0)
//             pick += pprev;
//         int notPick = prev;
//         int cur = max(pick, notPick);
//         pprev = prev;
//         prev = cur;
//     }
//     return prev;
// }

// int rob(vector<int> &nums)
// {
//     vector<int> nums1, nums2;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (i != 0)
//             nums1.push_back(nums[i]);
//         if (i != nums.size() - 1)
//         {
//             nums2.push_back(nums[i]);
//         }
//     }
//     return max(robUtil(nums1), robUtil(nums2));
// }

// Ninja is planing this ‘N’ days-long training schedule. Each day, he can perform any one of these three activities. (Running, Fighting Practice or Learning New Moves). Each activity has some merit points on each day. As Ninja has to improve all his skills, he can’t do the same activity in two consecutive days. Can you help Ninja find out the maximum merit points Ninja can earn?  You are given a 2D array of size N*3 ‘POINTS’ with the points corresponding to each day and activity. Your task is to calculate the maximum number of merit points that Ninja can earn.

// A Ninja has an ‘N’ Day training schedule. He has to perform one of these three activities (Running, Fighting Practice, or Learning New Moves) each day. There are merit points associated with performing an activity each day. The same activity can’t be performed on two consecutive days. We need to find the maximum merit points the ninja can attain in N Days.We are given a 2D Array POINTS of size ‘N*3’ which tells us the merit point of specific activity on that particular day. Our task is to calculate the maximum number of merit points that the ninja can earn.

//  memoization:

// int help(int ind, vector<vector<int>> &points, int option, vector<vector<int>> &dp)
// {
//     if (dp[ind][option] != -1)
//         return dp[ind][option];
//     if (ind == 0)
//     {
//         int maxi = 0;
//         for (int i = 0; i <= 2; i++)
//         {
//             if (i != option)
//             {
//                 maxi = max(maxi, points[0][i]);
//             }
//         }
//         return dp[ind][option] = maxi;
//     }
//     int maxi = 0;
//     for (int i = 0; i <= 2; i++)
//     {
//         if (i != option)
//         {
//             int act = points[ind][i] + help(ind - 1, points, i, dp);
//             maxi = max(maxi, act);
//         }
//     }
//     return dp[ind][option] = maxi;
// }

// int ninjaTraining(int n, vector<vector<int>> &points)
// {
//     vector<vector<int>> dp(n, vector<int>(4, -1));
//     return help(n - 1, points, 3, dp);
// }

// Tabulation approach :bottom up approach

// int ninjaTraining(int n, vector<vector<int>> &points)
// {
//     vector<vector<int>> dp(n, vector<int>(4, 0));
//     dp[0][0] = max(points[0][1], points[0][2]);
//     dp[0][1] = max(points[0][0], points[0][2]);
//     dp[0][2] = max(points[0][0], points[0][1]);
//     dp[0][3] = max(points[0][2], max(points[0][0], points[0][1]));
//     for (int ind = 1; ind < n; ind++)
//     {
//         for (int last = 0; last < 4; last++)
//         {
//             int maxi = 0;
//             for (int i = 0; i <= 2; i++)
//             {
//                 if (i != last)
//                 {
//                     int act = points[ind][i] + dp[ind - 1][i];
//                     maxi = max(maxi, act);
//                 }
//             }
//             dp[ind][last] = maxi;
//         }
//     }
//     return dp[n - 1][3];
// }

// Space optimised :

// int ninjaTraining(int n, vector<vector<int>> &points)
// {
//     // (day,last)
//     vector<int> dp(4, 0);
//     dp[0] = max(points[0][1], points[0][2]);
//     dp[1] = max(points[0][0], points[0][2]);
//     dp[2] = max(points[0][0], points[0][1]);
//     dp[3] = max(points[0][2], max(points[0][0], points[0][1]));
//     for (int ind = 1; ind < n; ind++)
//     {
//         vector<int> current(4, 0);
//         for (int last = 0; last < 4; last++)
//         {
//             for (int i = 0; i <= 2; i++)
//             {
//                 if (i != last)
//                 {
//                     int act = points[ind][i] + dp[i];
//                     current[last] = max(current[last], act);
//                 }
//             }
//         }
//         dp = current;
//     }
//     return dp[3];
// }

// There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.The test cases are generated so that the answer will be less than or equal to 2 * 109.

// recursion:

// int help(int row, int col, int m, int n)
// {
//     if (row == m && col == n)
//     {
//         return 1;
//     }
//     if (row > m or col > n)
//     {
//         return 0;
//     }
//     // down or right at a time :
//     int down = help(row + 1, col, m, n);
//     int right = help(row, col + 1, m, n);
//     return right + down;
// }

// int uniquePaths(int m, int n)
// {
//     return help(1, 1, m, n);
// }

// memoization:bottom up

// int help(int row, int col, int m, int n, vector<vector<int>> &dp)
// {
//     if (row > m or col > n)
//     {
//         return 0;
//     }
//     if (dp[row][col] != -1)
//     {
//         return dp[row][col];
//     }
//     if (row == m && col == n)
//     {
//         return dp[row][col] = 1;
//     }
//     // down or right at a time :
//     int down = help(row + 1, col, m, n, dp);
//     int right = help(row, col + 1, m, n, dp);
//     return dp[row][col] = right + down;
// }

// int uniquePaths(int m, int n)
// {
//     vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
//     return help(1, 1, m, n, dp);
// }

// top down :
// left or up 2 options :

// int help(int row, int col, int m, int n, vector<vector<int>> &dp)
// {
//     if (row < 0 or col < 0)
//     {
//         return 0;
//     }
//     if (dp[row][col] != -1)
//     {
//         return dp[row][col];
//     }
//     if (row == 0 && col == 0)
//     {
//         return dp[row][col] = 1;
//     }
//     // left or up 2 options
//     int up = help(row - 1, col, m, n, dp);
//     int left = help(row, col - 1, m, n, dp);
//     return dp[row][col] = left + up;
// }

// int uniquePaths(int m, int n)
// {
//     vector<vector<int>> dp(m  , vector<int>(n , -1));
//     return help(m - 1, n - 1, m, n, dp);
// }

// tabulation:bottom up

// int uniquePaths(int m, int n)
// {
//     vector<vector<int>> dp(m, vector<int>(n, 0));
//     dp[0][0] = 1;
//     for (int row = 0; row < m; row++)
//     {
//         for (int col = 0; col < n; col++)
//         {
//             int up = 0, left = 0;
//             if (row - 1 >= 0)
//                 up = dp[row - 1][col];
//             if (col - 1 >= 0)
//                 left = dp[row][col - 1];
//             dp[row][col] = max(dp[row][col], left + up);
//         }
//     }
//     return dp[m - 1][n - 1];
// }

// space optimization:

// int uniquePaths(int m, int n)
// {
//     vector<int> prev(n, 0);
//     prev[0] = 1;
//     for (int row = 0; row < m; row++)
//     {
//         vector<int> cur(n, 0);
//         for (int col = 0; col < n; col++)
//         {
//             int up = 0, left = 0;
//             up = prev[col];
//             if (col - 1 >= 0)
//                 left = cur[col - 1];
//             cur[col] = max(cur[col], left + up);
//         }
//         prev = cur;
//     }
//     return prev[n - 1];
// }

// combinatorial way:

// For the eg., given in question, 3x7 matrix, robot needs to take 2+6 = 8 steps with 2 down and 6 right in any order. That is nothing but a permutation problem. Denote down as 'D' and right as 'R', following is one of the path :-
// D R R R D R R R
// We have to tell the total number of permutations of the above given word. So, decrease both m & n by 1 and apply following formula:-
// Total permutations = (m+n)! / (m! * n!)
// If the matrix is 3x7, we have 10 grids to reach the finish because 3 + 7 = 10
// The maximum right direction moves we can have is 3 since it's a 3x7 matrix.
// The maximum down moves we can have is 7 since it's a 3x7 matrix.
// No. of ways in which we can choose the right turn? It's C(10,3) = 10! / (7! * 3!) => (m+n)! / (m!*n!)

// int uniquePaths(int m, int n)
// {
//     if (m == 1 and n == 1)
//     {
//         return 1;
//     }
//     m--, n--;
//     int j = 1;
//     long res = 1;
//     for (int i = m + 1; i <= m + n; i++, j++)
//     {
//         res *= i;
//         res /= j;
//     }
//     return (int)res;
// }

// 63. Unique Paths II:
// You are given an m x n integer array grid. There is a robot initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.  An obstacle and space are marked as 1 or 0 respectively in grid. A path that the robot takes cannot include any square that is an obstacle. Return the number of possible unique paths that the robot can take to reach the bottom-right corner. The testcases are generated so that the answer will be less than or equal to 2 * 109.

// recursion:

// int help(int row, int col, vector<vector<int>> &obstacleGrid)
// {
//     if (row == 0 and col == 0)
//     {
//         return 1;
//     }
//     if (row < 0 or col < 0 or obstacleGrid[row][col] == 1)
//     {
//         return 0;
//     }

//     // up or left :
//     int up = help(row - 1, col, obstacleGrid);
//     int left = help(row, col - 1, obstacleGrid);
//     return left + up;
// }

// int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
// {
//     int m = obstacleGrid.size();
//     int n = obstacleGrid[0].size();
//     return help(m - 1, n - 1, obstacleGrid);
// }

// memorization:

// int help(int row, int col, vector<vector<int>> &obstacleGrid, vector<vector<int>> &dp)
// {
//     if (row == 0 and col == 0)
//     {
//         return dp[row][col] = 1;
//     }
//     if (row < 0 or col < 0 or obstacleGrid[row][col] == 1)
//     {
//         return 0;
//     }
//     if (dp[row][col] != -1)
//         return dp[row][col];
//     // up or left :
//     int up = help(row - 1, col, obstacleGrid, dp);
//     int left = help(row, col - 1, obstacleGrid, dp);
//     return dp[row][col] = left + up;
// }

// int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
// {
//     if(obstacleGrid[0][0]==1)return 0;
//     int m = obstacleGrid.size();
//     int n = obstacleGrid[0].size();
//     vector<vector<int>> dp(m, vector<int>(n, -1));
//     return help(m - 1, n - 1, obstacleGrid, dp);
// }

// tabulation :

// int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
// {
//     if (obstacleGrid[0][0] == 1)
//         return 0;
//     int m = obstacleGrid.size();
//     int n = obstacleGrid[0].size();
//     vector<vector<int>> dp(m, vector<int>(n, -1));
//     dp[0][0] = 1;
//     for (int row = 0; row < m; row++)
//     {
//         for (int col = 0; col < n; col++)
//         {
//             if (obstacleGrid[row][col] == 1)
//             {
//                 dp[row][col] = 0;
//                 continue;
//             }
//             int up = 0, left = 0;
//             if (row - 1 >= 0)
//                 up = dp[row - 1][col];
//             if (col - 1 >= 0)
//                 left = dp[row][col - 1];
//             dp[row][col] = max(up + left, dp[row][col]);
//         }
//     }
//     return dp[m - 1][n - 1];
// }

// Space optimization :

// int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
// {
//     if (obstacleGrid[0][0] == 1)
//         return 0;
//     int m = obstacleGrid.size();
//     int n = obstacleGrid[0].size();
//     vector<int> prev(n, 0);
//     prev[0] = 1;
//     for (int row = 0; row < m; row++)
//     {
//         vector<int> cur(n, 0);
//         for (int col = 0; col < n; col++)
//         {
//             if (obstacleGrid[row][col] == 1)
//             {
//                 cur[col] = 0;
//                 continue;
//             }
//             int up = 0, left = 0;
//             up = prev[col];
//             if (col - 1 >= 0)
//                 left = cur[col - 1];
//             cur[col] = max(up + left, cur[col]);
//         }
//         prev = cur;
//     }
//     return prev[n - 1];
// }

// Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path. Note: You can only move either down or right at any point in time.

// Recursion:

// int help(int row, int col, vector<vector<int>> &grid)
// {
//     if (row == 0 and col == 0)
//     {
//         return grid[row][col];
//     }
//     if (row < 0 or col < 0)
//     {
//         return INT_MAX;
//     }
//     long long  up = 0, left = 0;
//     up = help(row - 1, col, grid) + (long long)grid[row][col];
//     left = help(row, col - 1, grid) + (long long)grid[row][col];
//     return (int)min(up, left);
// }
// int minPathSum(vector<vector<int>> &grid)
// {
//     int m = grid.size();
//     int n = grid[0].size();
//     return help(m - 1, n - 1, grid);
// }

// Memoization:

// int help(int row, int col, vector<vector<int>> &grid, vector<vector<int>> &dp)
// {
//     if (row == 0 and col == 0)
//     {
//         return grid[row][col];
//     }
//     if (row < 0 or col < 0)
//     {
//         return INT_MAX;
//     }
//     if (dp[row][col] != -1)
//     {
//         return dp[row][col];
//     }
//     long long up = 0, left = 0;
//     up = help(row - 1, col, grid, dp) + (long long)grid[row][col];
//     left = help(row, col - 1, grid, dp) + (long long)grid[row][col];
//     return dp[row][col] = (int)min(up, left);
// }

// int minPathSum(vector<vector<int>> &grid)
// {
//     int m = grid.size();
//     int n = grid[0].size();
//     vector<vector<int>> dp(m, vector<int>(n, -1));
//     return help(m - 1, n - 1, grid, dp);
// }

// Tabulation :

// int minPathSum(vector<vector<int>> &grid)
// {
//     int m = grid.size();
//     int n = grid[0].size();
//     vector<vector<int>> dp(m, vector<int>(n, -1));
//     dp[0][0] = grid[0][0];
//     for (int row = 0; row < m; row++)
//     {
//         for (int col = 0; col < n; col++)
//         {
//             if (row == 0 and col == 0)
//                 continue;
//             long long up = INT_MAX, left = INT_MAX;
//             if (row - 1 >= 0)
//                 up = dp[row - 1][col] + (long long)grid[row][col];
//             if (col - 1 >= 0)
//                 left = dp[row][col - 1] + (long long)grid[row][col];
//             dp[row][col] = (int)min(up, left);
//         }
//     }
//     return dp[m - 1][n - 1];
// }

// Space Optimization:

// int minPathSum(vector<vector<int>> &grid)
// {
//     int m = grid.size();
//     int n = grid[0].size();
//     vector<int> prev(n, 0);
//     for (int row = 0; row < m; row++)
//     {
//         vector<int> cur(n, 0);
//         for (int col = 0; col < n; col++)
//         {
//             if (row == 0 and col == 0)
//             {
//                 cur[0] = grid[0][0];
//                 continue;
//             }
//             long long up = INT_MAX, left = INT_MAX;
//             if (row - 1 >= 0)
//                 up = prev[col] + (long long)grid[row][col];
//             if (col - 1 >= 0)
//                 left = cur[col - 1] + (long long)grid[row][col];
//             cur[col] = (int)min(up, left);
//         }
//         prev = cur;
//     }
//     return prev[n - 1];
// }

// 120. Triangle:Given a triangle array, return the minimum path sum from top to bottom.For each step, you may move to an adjacent number of the row below. More formally, if you are on index i on the current row, you may move to either index i or index i + 1 on the next row.

// Recursion:

// int help(int row, int col, vector<vector<int>> &triangle)
// {
//     if (row >= triangle.size() or col >= triangle[row].size())
//     {
//         return INT_MAX;
//     }
//     if (row == triangle.size() - 1)
//     {
//         return triangle[row][col];
//     }
//     int down = INT_MAX, diagonal = INT_MAX;
//     down = triangle[row][col] + help(row + 1, col, triangle);
//     diagonal = triangle[row][col] + help(row + 1, col + 1, triangle);
//     return min(down, diagonal);
// }

// int minimumTotal(vector<vector<int>> &triangle)
// {
//     return help(0, 0, triangle);
// }

// Memoization:top down

// int help(int row, int col, vector<vector<int>> &triangle, vector<vector<int>> &dp)
// {
//     if (row >= triangle.size() or col >= triangle[row].size())
//     {
//         return INT_MAX;
//     }
//     if (row == triangle.size() - 1)
//     {
//         return dp[row][col] = triangle[row][col];
//     }
//     if (dp[row][col] != -1)
//         return dp[row][col];
//     int down = INT_MAX, diagonal = INT_MAX;
//     down = triangle[row][col] + help(row + 1, col, triangle, dp);
//     diagonal = triangle[row][col] + help(row + 1, col + 1, triangle, dp);
//     return dp[row][col] = min(down, diagonal);
// }

// int minimumTotal(vector<vector<int>> &triangle)
// {
//     vector<vector<int>> dp(triangle.size(), vector<int>(triangle.size(), -1));
//     return help(0, 0, triangle, dp);
// }

// Tabulation :bottom up

// int minimumTotal(vector<vector<int>> &triangle)
// {
//     int n = triangle.size();
//     vector<vector<int>> dp(n, vector<int>(n, -1));
//     for (int col = 0; col < triangle[n - 1].size(); col++)
//     {
//         dp[n - 1][col] = triangle[n - 1][col];
//     }
//     for (int row = n - 2; row >= 0; row--)
//     {
//         for (int col = row; col >= 0; col--)
//         {
//             int down = INT_MAX, diagonal = INT_MAX;
//             if (row + 1 < n)
//                 down = triangle[row][col] + dp[row + 1][col];
//             if (row + 1 < n and col + 1 < n)
//                 diagonal = triangle[row][col] + dp[row + 1][col + 1];
//             dp[row][col] = min(down, diagonal);
//         }
//     }
//     return dp[0][0];
// }

// Space Optimization:

// int minimumTotal(vector<vector<int>> &triangle)
// {
//     int n = triangle.size();
//     vector<int> next(n, -1);
//     for (int col = 0; col < triangle[n - 1].size(); col++)
//     {
//         next[col] = triangle[n - 1][col];
//     }
//     for (int row = n - 2; row >= 0; row--)
//     {
//         vector<int> cur(n, -1);
//         for (int col = row; col >= 0; col--)
//         {
//             int down = INT_MAX, diagonal = INT_MAX;
//             if (row + 1 < n)
//                 down = triangle[row][col] + next[col];
//             if (row + 1 < n and col + 1 < n)
//                 diagonal = triangle[row][col] + next[col + 1];
//             cur[col] = min(down, diagonal);
//         }
//         next = cur;
//     }
//     return next[0];
// }

// 931. Minimum Falling Path Sum Given an n x n array of integers matrix, return the minimum sum of any falling path through matrix.A falling path starts at any element in the first row and chooses the element in the next row that is either directly below or diagonally left/right. Specifically, the next element from position (row, col) will be (row + 1, col - 1), (row + 1, col), or (row + 1, col + 1).

// Memoization  :

// int help(int row, int col, int n, vector<vector<int>> &matrix, vector<vector<int>> &dp)
// {
//     if (col >= n or col < 0)
//         return 1e9;
//     if (row == 0)
//         return matrix[row][col];
//     if (dp[row][col] != -1e5)
//         return dp[row][col];
//     int up = matrix[row][col] + help(row - 1, col, n, matrix, dp);
//     int d1 = matrix[row][col] + help(row - 1, col - 1, n, matrix, dp);
//     int d2 = matrix[row][col] + help(row - 1, col + 1, n, matrix, dp);
//     return dp[row][col] = min(up, min(d1, d2));
// }

// int minFallingPathSum(vector<vector<int>> &matrix)
// {
//     int n = matrix.size();
//     int ans = INT_MAX;
//     vector<vector<int>> dp(n, vector<int>(n, -1e5));
//     for (int i = 0; i < n; i++)
//     {
//         ans = min(ans, help(n - 1, i, n, matrix, dp));
//     }
//     return (int)ans;
// }

// Tabulation :

// int minFallingPathSum(vector<vector<int>> &matrix)
// {
//     int n = matrix.size();
//     int ans = INT_MAX;
//     vector<vector<int>> dp(n, vector<int>(n, -1));
//     for (int col = 0; col < n; col++)
//     {
//         dp[0][col] = matrix[0][col];
//     }
//     for (int row = 1; row < n; row++)
//     {
//         for (int col = 0; col < n; col++)
//         {
//             int up = 1e9;
//             int d1 = 1e9;
//             int d2 = 1e9;
//             if (row - 1 >= 0)
//                 up = matrix[row][col] + dp[row - 1][col];
//             if (row - 1 >= 0 and col - 1 >= 0)
//                 d1 = matrix[row][col] + dp[row - 1][col - 1];
//             if (row - 1 >= 0 and col + 1 < n)
//                 d2 = matrix[row][col] + dp[row - 1][col + 1];
//             dp[row][col] = min(up, min(d1, d2));
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         ans = min(ans, dp[n - 1][i]);
//     }
//     return ans;
// }

// Space Optimization:

// int minFallingPathSum(vector<vector<int>> &matrix)
// {
//     int n = matrix.size();
//     int ans = INT_MAX;
//     vector<int> prev(n, 0);
//     for (int col = 0; col < n; col++)
//     {
//         prev[col] = matrix[0][col];
//     }
//     for (int row = 1; row < n; row++)
//     {
//         vector<int> cur(n, 0);
//         for (int col = 0; col < n; col++)
//         {
//             int up = 1e9;
//             int d1 = 1e9;
//             int d2 = 1e9;
//             if (row - 1 >= 0)
//                 up = matrix[row][col] + prev[col];
//             if (row - 1 >= 0 and col - 1 >= 0)
//                 d1 = matrix[row][col] + prev[col - 1];
//             if (row - 1 >= 0 and col + 1 < n)
//                 d2 = matrix[row][col] + prev[col + 1];
//             cur[col] = min(up, min(d1, d2));
//         }
//         prev = cur;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         ans = min(ans, prev[i]);
//     }
//     return ans;
// }

// Extra :

// int minFallingPathSum(vector<vector<int>> &matrix)
// {
//     int n = matrix.size();
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             matrix[i][j] += min({matrix[i - 1][j], matrix[i - 1][max(0, j - 1)], matrix[i - 1][min(j + 1, n - 1)]});
//         }
//     }
//     return *min_element(matrix[n - 1].begin(), matrix[n - 1].end());
// }

// Chocolates Pickup:You are given an r rows and c cols matrix grid representing a field of chocolates where grid[i][j] represents the number of chocolates that you can collect from the (i, j) cell.You have two robots that can collect chocolates for you:Robot #1 is located at the top-left corner (0, 0), and Robot #2 is located at the top-right corner (0, cols - 1).Return the maximum number of chocolates collection using both robots by following the rules below:From a cell (i, j), robots can move to cell (i + 1, j - 1), (i + 1, j), or (i + 1, j + 1). When any robot passes through a cell, It picks up all chocolates, and the cell becomes an empty cell. When both robots stay in the same cell, only one takes the chocolates. Both robots cannot move outside of the grid at any moment. Both robots should reach the bottom row in grid.
// IMPORTANT:     !!!!!!!!!!!!!!!!!!!!!!!!(Revise)!!!!!!!!!!!!!!!!!!!!!!!!
// Recursion:

// int help(int i, int j1, int j2, int n, int m, vector<vector<int>> &grid)
// {
//     if (j1 >= m or j1 < 0 or j2 >= m or j2 < 0)
//     {
//         return -1e9;
//     }
//     if (i == n - 1)
//     {
//         if (j1 == j2)
//             return grid[i][j1];
//         return grid[i][j1] + grid[i][j2];
//     }
//     int ans = INT_MIN;
//     int MAXI = INT_MIN;
//     for (int dj1 = -1; dj1 <= 1; dj1++)
//     {
//         for (int dj2 = -1; dj2 <= 1; dj2++)
//         {
//             if (j1 == j2)
//             {
//                 ans = grid[i][j1] + help(i+1, j1 + dj1, j2 + dj2, n, m, grid);
//             }
//             else
//             {
//                 ans = grid[i][j1] + grid[i][j2] + help(i+1, j1 + dj1, j2 + dj2, n, m, grid);
//             }
//              MAXI = max(ans, MAXI);
//         }
//     }
//     return MAXI;
// }

// int solve(int n, int m, vector<vector<int>> &grid)
// {
//     return help(0, 0, m - 1, n, m, grid);
// }

// Memoization:3d dp

// int help(int i, int j1, int j2, int n, int m, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp)
// {
//     if (j1 >= m or j1 < 0 or j2 >= m or j2 < 0)
//     {
//         return -1e9;
//     }
//     if (dp[i][j1][j2] != -1)
//         return dp[i][j1][j2];
//     if (i == n - 1)
//     {
//         if (j1 == j2)
//             return dp[i][j1][j2] = grid[i][j1];
//         return dp[i][j1][j2] = grid[i][j1] + grid[i][j2];
//     }
//     int ans = INT_MIN;
//     int MAXI = INT_MIN;
//     for (int dj1 = -1; dj1 <= 1; dj1++)
//     {
//         for (int dj2 = -1; dj2 <= 1; dj2++)
//         {
//             if (j1 == j2)
//             {
//                 ans = grid[i][j1] + help(i + 1, j1 + dj1, j2 + dj2, n, m, grid, dp);
//             }
//             else
//             {
//                 ans = grid[i][j1] + grid[i][j2] + help(i + 1, j1 + dj1, j2 + dj2, n, m, grid, dp);
//             }
//             MAXI = max(ans, MAXI);
//         }
//     }
//     return dp[i][j1][j2] = MAXI;
// }

// int solve(int n, int m, vector<vector<int>> &grid)
// {
//     vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));
//     return help(0, 0, m - 1, n, m, grid, dp);
// }

// Tabulation :bottom up so here reverse do go from last row to first row

// int solve(int n, int m, vector<vector<int>> &grid)
// {
//     vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));
//     for (int j1 = 0; j1 < m; j1++)
//     {
//         for (int j2 = 0; j2 < m; j2++)
//         {
//             if (j1 == j2)
//             {
//                 dp[n - 1][j1][j1] = grid[n - 1][j1];
//             }
//             else
//             {
//                 dp[n - 1][j1][j2] = grid[n - 1][j1] + grid[n - 1][j2];
//             }
//         }
//     }
//     for (int i = n - 2; i >= 0; i--)
//     {
//         for (int j1 = m - 1; j1 >= 0; j1--)
//         {
//             for (int j2 = m - 1; j2 >= 0; j2--)
//             {
//                 int MAXI = INT_MIN;
//                 for (int dj1 = -1; dj1 <= 1; dj1++)
//                 {
//                     for (int dj2 = -1; dj2 <= 1; dj2++)
//                     {
//                         int ans = INT_MIN;
//                         if (j1 == j2)
//                         {
//                             if (j1 + dj1 < m and j2 + dj2 < m and j1 + dj1 >= 0 and j2 + dj2 >= 0)
//                                 ans = grid[i][j1] + dp[i + 1][j1 + dj1][j2 + dj2];
//                         }
//                         else
//                         {
//                             if (j1 + dj1 < m and j2 + dj2 < m and j1 + dj1 >= 0 and j2 + dj2 >= 0)
//                                 ans = grid[i][j1] + grid[i][j2] + dp[i + 1][j1 + dj1][j2 + dj2];
//                         }
//                         MAXI = max(ans, MAXI);
//                     }
//                 }
//                 dp[i][j1][j2] = MAXI;
//             }
//         }
//     }
//     return dp[0][0][m - 1];
// }

// Space Optimised : 3d to 2d array :

// int solve(int n, int m, vector<vector<int>> &grid)
// {
//     vector<vector<int>> next(m, vector<int>(m, -1));
//     for (int j1 = 0; j1 < m; j1++)
//     {
//         for (int j2 = 0; j2 < m; j2++)
//         {
//             if (j1 == j2)
//             {
//                 next[j1][j1] = grid[n - 1][j1];
//             }
//             else
//             {
//                 next[j1][j2] = grid[n - 1][j1] + grid[n - 1][j2];
//             }
//         }
//     }
//     for (int i = n - 2; i >= 0; i--)
//     {
//         vector<vector<int>> cur(m, vector<int>(m, -1));
//         for (int j1 = m - 1; j1 >= 0; j1--)
//         {
//             for (int j2 = m - 1; j2 >= 0; j2--)
//             {
//                 int MAXI = INT_MIN;
//                 for (int dj1 = -1; dj1 <= 1; dj1++)
//                 {
//                     for (int dj2 = -1; dj2 <= 1; dj2++)
//                     {
//                         int ans = INT_MIN;
//                         if (j1 == j2)
//                         {
//                             if (j1 + dj1 < m and j2 + dj2 < m and j1 + dj1 >= 0 and j2 + dj2 >= 0)
//                                 ans = grid[i][j1] + next[j1 + dj1][j2 + dj2];
//                         }
//                         else
//                         {
//                             if (j1 + dj1 < m and j2 + dj2 < m and j1 + dj1 >= 0 and j2 + dj2 >= 0)
//                                 ans = grid[i][j1] + grid[i][j2] + next[j1 + dj1][j2 + dj2];
//                         }
//                         MAXI = max(ans, MAXI);
//                     }
//                 }
//                 cur[j1][j2] = MAXI;
//             }
//         }
//         next = cur;
//     }
//     return next[0][m - 1];
// }

// Subset Sum Problem:Given an array of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum.

// Memonization :

// bool help(int ind, int target, vector<int> &arr, vector<vector<int>> &dp)
// {
//     if (ind == 0)
//     {
//         return dp[ind][target] = arr[ind] == target;
//     }
//     if (target == 0)
//         return dp[ind][target] = true;
//     if (dp[ind][target] != -1)
//         return dp[ind][target];
//     bool pick = false;
//     if (arr[ind] <= target)
//         pick = help(ind - 1, target - arr[ind], arr, dp);
//     if (pick)
//         return dp[ind][target] = pick;
//     bool notPick = help(ind - 1, target, arr, dp);
//     return dp[ind][target] = notPick;
// }

// bool isSubsetSum(vector<int> arr, int sum)
// {
//     vector<vector<int>> dp(arr.size(), vector<int>(sum + 1, -1));
//     return help(arr.size() - 1, sum, arr, dp);
// }

// Tabulation : bottom up apporach

// bool isSubsetSum(vector<int> arr, int sum)
// {
//     vector<vector<bool>> dp(arr.size(), vector<bool>(sum + 1, false));
//     if (arr[0] <= sum)
//         dp[0][arr[0]] = true;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         dp[i][0] = true;
//     }
//     for (int ind = 1; ind < arr.size(); ind++)
//     {
//         for (int target = 1; target <= sum; target++)
//         {
//             bool pick = false;
//             bool notPick = dp[ind - 1][target];
//             if (arr[ind] <= target)
//             {
//                 pick = dp[ind - 1][target - arr[ind]];
//             }
//             dp[ind][target] = notPick | pick;
//         }
//     }
//     return dp[arr.size() - 1][sum];
// }

// // Space Optimization :

// bool isSubsetSum(vector<int> arr, int sum)
// {
//     vector<bool> prev(sum + 1, false);
//     if (arr[0] <= sum)
//         prev[arr[0]] = true;
//     prev[0] = true;
//     for (int ind = 1; ind < arr.size(); ind++)
//     {
//         vector<bool> cur(sum + 1, false);
//         cur[0] = true;
//         for (int target = 1; target <= sum; target++)
//         {
//             bool pick = false;
//             bool notPick = prev[target];
//             if (arr[ind] <= target)
//             {
//                 pick = prev[target - arr[ind]];
//             }
//             cur[target] = notPick | pick;
//         }
//         prev = cur;
//     }
//     return prev[sum];
// }

// 416. Partition Equal Subset Sum:Given an integer array nums, return true if you can partition the array into two subsets such that the sum of the elements in both subsets is equal or false otherwise.

// bool help(int ind, int sum, vector<vector<int>> &dp, vector<int> &nums)
// {
//     if (sum == 0)
//         return true;
//     if (ind == 0)
//     {
//         return (sum == nums[ind]);
//     }
//     if (dp[ind][sum] != -1)
//         return dp[ind][sum];
//     bool pick = false;
//     if (sum >= nums[ind])
//         pick = help(ind - 1, sum - nums[ind], dp, nums);
//     bool notPick = help(ind - 1, sum, dp, nums);
//     return dp[ind][sum] = notPick || pick;
// }

// bool canPartition(vector<int> &nums)
// {
//     int target = 0;
//     int n = nums.size();
//     for (auto it : nums)
//     {
//         target += it;
//     }
//     if (target % 2 == 1)
//         return false;
//     target /= 2;
//     vector<vector<int>> dp(n, vector<int>(target + 1, -1));
//     return help(n - 1, target, dp, nums);
// }

// Tabulation : bottom up approach :

// bool canPartition(vector<int> &nums)
// {
//     int target = 0;
//     int n = nums.size();
//     for (auto it : nums)
//     {
//         target += it;
//     }
//     if (target % 2 == 1)
//         return false;
//     target /= 2;
//     vector<vector<bool>> dp(n, vector<bool>(target + 1, false));
//     if (nums[0] <= target)
//         dp[0][nums[0]] = true;
//     for (int ind = 0; ind < n; ind++)
//     {
//         dp[ind][0] = true;
//     }
//     for (int ind = 1; ind < n; ind++)
//     {
//         for (int sum = 1; sum <= target; sum++)
//         {
//             bool pick = false;
//             if (sum >= nums[ind])
//                 pick = dp[ind - 1][sum - nums[ind]];
//             bool notPick = dp[ind - 1][sum];
//             dp[ind][sum] = notPick || pick;
//         }
//     }
//     return dp[n - 1][target];
// }

// Space Optimization :

// bool canPartition(vector<int> &nums)
// {
//     int target = 0;
//     int n = nums.size();
//     for (auto it : nums)
//     {
//         target += it;
//     }
//     if (target % 2 == 1)
//         return false;
//     target /= 2;
//     vector<bool> prev(target + 1, false);
//     if (nums[0] <= target)
//         prev[nums[0]] = true;
//     prev[0] = true;
//     for (int ind = 1; ind < n; ind++)
//     {
//         vector<bool> cur(target + 1, false);
//         cur[0] = true;
//         for (int sum = 1; sum <= target; sum++)
//         {
//             bool pick = false;
//             if (sum >= nums[ind])
//                 pick = prev[sum - nums[ind]];
//             bool notPick = prev[sum];
//             cur[sum] = notPick || pick;
//         }
//         prev = cur;
//     }
//     return prev[target];
// }

// Meet in the middle algorithm :
// 1755. Closest Subsequence Sum :You are given an integer array nums and an integer goal.You want to choose a subsequence of nums such that the sum of its elements is the closest possible to goal. That is, if the sum of the subsequence's elements is sum, then you want to minimize the absolute difference abs(sum - goal).Return the minimum possible value of abs(sum - goal).Note that a subsequence of an array is an array formed by removing some elements (possibly all or none) of the original array.

// void find(vector<int> &v, int i, int e, int sum, vector<int> &sumv)
// {
//     if (i == e)
//     {
//         sumv.push_back(sum);
//         return;
//     }
//     find(v, i + 1, e, sum + v[i], sumv);
//     find(v, i + 1, e, sum, sumv);
// }

//   int minAbsDifference(vector<int> &nums, int goal)
// {
//     int n = nums.size();
//     vector<int> A, B;
//     for (int i = 0; i < n / 2; i++)
//     {
//         A.push_back(nums[i]);
//     }
//     for (int i = n / 2; i < n; i++)
//     {
//         B.push_back(nums[i]);
//     }
//     vector<int> sumA, sumB;
//     find(A, 0, A.size(), 0, sumA);
//     find(B, 0, B.size(), 0, sumB);
//     sort(sumA.begin(), sumA.end());
//     sort(sumB.begin(), sumB.end());
//     int ans = INT_MAX;
//     for (int i = 0; i < sumA.size(); i++)
//     {
//         int s = sumA[i];
//         int l = 0;
//         int r = sumB.size() - 1;
//         while (l <= r)
//         {
//             int mid = l + (r - l) / 2;
//             int sum = s + sumB[mid];
//             if (sum == goal)
//             {
//                 return 0;
//             }
//             ans = min(ans, abs(sum - goal));
//             if (sum > goal)
//             {
//                 r = mid - 1;
//             }
//             else
//             {
//                 l = mid + 1;
//             }
//         }
//     }
//     return ans;
// }

// 2035. Partition Array Into Two Arrays to Minimize Sum Difference You are given an integer array nums of 2 * n integers. You need to partition nums into two arrays of length n to minimize the absolute difference of the sums of the arrays. To partition nums, put each element of nums into one of the two arrays. Return the minimum possible absolute difference

// Works only for positive numbers and not for negative numbers :

// bool help(int ind, int sum, vector<vector<int>> &dp, vector<int> &nums)
// {
//     if (ind == 0)
//     {
//         return dp[ind][sum] = nums[ind] == sum;
//     }
//     if (sum == 0)
//         return dp[ind][sum] = true;
//     if (dp[ind][sum] != -1)
//     {
//         return dp[ind][sum];
//     }
//     bool pick = false, notPick = false;
//     if (sum >= nums[ind])
//     {
//         pick = help(ind - 1, sum - nums[ind], dp, nums);
//     }
//     notPick = help(ind - 1, sum, dp, nums);
//     return dp[ind][sum] = pick || notPick;
// }

// int minimumDifference(vector<int> &nums)
// {
//     int totSum = 0;
//     for (auto it : nums)
//         totSum += it;
//     vector<vector<int>>dp(nums.size(),vector<int>(totSum + 1, -1));
//     for (int i = 0; i <= totSum; i++)
//     {
//         help(nums.size()-1, i, dp, nums);
//     }
//     int ans = 1e9;
//     for (int i = 0; i <= totSum/2; i++)
//     {
//         if (dp[nums.size() - 1][i]==true)
//         {
//             ans = min(ans, (abs(i - (totSum - i))));
//         }
//     }
//     return ans;
// }

// int minimumDifference(vector<int> &nums)
// {
//     int n = nums.size();
//     int res = 0;
//     int sum = 0;
//     sum = accumulate(nums.begin(), nums.end(), 0);
//     int N = (n / 2);
//     vector<vector<int>> left(N + 1), right(N + 1);
//     for (int mask = 0; mask<(1 << N); ++mask)
//     {
//         int sz = 0, l = 0, r = 0;
//         for (int i = 0; i < N; i++)
//         {
//             if (mask & (1 << i))
//             {
//                 sz++;
//                 l += nums[i];
//                 r += nums[N + i];
//             }
//         }
//         left[sz].push_back(l);
//         right[sz].push_back(r);
//     }
//     for (int sz = 0; sz <= N; sz++)
//     {
//         sort(right[sz].begin(), right[sz].end());
//     }
//     res = min(abs(sum - 2 * left[N][0]), abs(sum - 2 * right[N][0]));
//     for (int sz = 1; sz < N; ++sz)
//     {
//         for (auto &a : left[sz])
//         {
//             int b = (sum / 2) - a;
//             int rsz = N - sz;
//             auto &v = right[rsz];
//             auto itr = lower_bound(v.begin(), v.end(), b);
//             if (itr != v.end())
//             {
//                 res = min(res, abs(sum - 2 * (a + (*itr))));
//             }
//             if (itr != v.begin())
//             {
//                 auto it = itr;
//                 --it;
//                 res = min(res, abs(sum - 2 * (a + (*it))));
//             }
//         }
//     }
//     return res;
// }

// Count Subsets with Sum K (DP - 17) :Perfect Sum Problem: Given an array arr of size n of non-negative integers and an integer sum, the task is to count all subsets of the given array with a sum equal to a given sum.Note: Answer can be very large, so, output answer modulo 109+7.

// int help(int arr[], int n, int ind, int curSum)
// {
//     if (curSum == 0)
//     {
//         return 1;
//     }
//     if (ind == 0)
//     {
//         return (curSum == arr[ind]) ? 1 : 0;
//     }
//     int notPick = help(arr, n, ind - 1, curSum);
//     int pick = 0;
//     if (arr[ind] <= curSum)
//         pick = help(arr, n, ind - 1, curSum - arr[ind]);
//     return pick + notPick;
// }

// int perfectSum(int arr[], int n, int sum)
// {
//     int MOD = 1e9 + 7;
//     int ind = n - 1;
//     int curSum = sum;
//     return help(arr, n, ind, curSum) % MOD;
// }

// Memoization 10 31 9 7 0 3 9 8 6 5 7 6

// int help(int arr[],   int ind, int curSum, vector<vector<int>> &dp)
// {
//     if (curSum == 0)
//     {
//         return dp[ind][curSum] = 1;
//     }
//     if (ind == 0)
//     {
//         return dp[ind][curSum] = (curSum == arr[ind]) ? 1 : 0;
//     }
//     if (dp[ind][curSum] != -1)
//         return dp[ind][curSum];
//     int notPick = help(arr,  ind - 1, curSum, dp);
//     int pick = 0;
//     if (arr[ind] <= curSum)
//         pick = help(arr,  ind - 1, curSum - arr[ind], dp);
//     return dp[ind][curSum] = pick + notPick;
// }

// int perfectSum(int arr[], int n, int sum)
// {
//     int MOD = 1e9 + 7;
//     vector<vector<int>> dp(n, vector<int>(sum+1, -1));
//     return help(arr,  n - 1, sum, dp) % MOD;
// }

// Tabulation :

// int perfectSum(int arr[], int n, int sum)
// {
//     int MOD = 1000000007;
//     vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
//     for (int i = 0; i <= n; i++)
//     {
//         dp[i][0] = 1;
//     }
//     if (arr[0] <= sum)
//         dp[0][arr[0]] = 1;
//     for (int ind = 1; ind < n; ind++)
//     {
//         for (int s = 0; s <= sum; s++)
//         {
//             int notPick = (dp[ind - 1][s]) % MOD;
//             int pick = 0;
//             if (arr[ind] <= s)
//                 pick = (dp[ind - 1][s - arr[ind]]) % MOD;
//             dp[ind][s] = (pick + notPick) % MOD;
//         }
//     }
//     return dp[n][sum];
// }

// int perfectSum(int arr[], int n, int sum)
// {
//     // Your code goes here
//     long dp[n + 1][sum + 1] = {}, i, j, mod = 1000000007;
//     for (i = 0; i <= n; i++)
//     {
//         dp[i][0] = 1;
//     }
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 0; j <= sum; j++)
//         {
//             if (arr[i - 1] <= j)
//             {
//                 dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - arr[i - 1]]) % mod;
//             }
//             else
//             {
//                 dp[i][j] = dp[i - 1][j];
//             }
//         }
//     }
//     return dp[n][sum];
// }

// Space optimization :

// int perfectSum(int arr[], int n, int sum)
// {
//     int MOD = 1000000007;
//     vector<int> prev(sum + 1, 0), cur(sum + 1, 0);
//     prev[0] = cur[0] = 1;
//     if (arr[0] <= sum)
//         prev[arr[0]] = 1;
//     for (int ind = 1; ind < n; ind++)
//     {
//         vector<int> cur(sum + 1, -1);
//         cur[0] = 1;
//         for (int s = 0; s <= sum; s++)
//         {
//             int notPick = prev[s];
//             int pick = 0;
//             if (arr[ind] <= s)
//                 pick = prev[s - arr[ind]];
//             cur[s] = pick + notPick;
//         }
//         prev = cur;
//     }
//     return prev[sum] % MOD;
// }

// Partitions with Given Difference Given an array arr, partition it into two subsets(possibly empty) such that each element must belong to only one subset. Let the sum of the elements of these two subsets be S1 and S2. Given a difference d, count the number of partitions in which S1 is greater than or equal to S2 and the difference between S1 and S2 is equal to d. Since the answer may be large return it modulo 109 + 7.

// int mod = (int)1e9 + 7;

// int help(vector<int> arr, int ind, int curSum, vector<vector<int>> &dp)
// {
//     if (ind == 0)
//     {
//         if (curSum == 0 && arr[0] == 0)
//             return 2;
//         if (curSum == 0 || arr[0] == curSum)
//             return 1;
//         return 0;
//     }
//     if (dp[ind][curSum] != -1)
//         return dp[ind][curSum];
//     int notPick = help(arr, ind - 1, curSum, dp);
//     int pick = 0;
//     if (arr[ind] <= curSum)
//         pick = help(arr, ind - 1, curSum - arr[ind], dp);
//     return dp[ind][curSum] = (pick + notPick) % mod;
// }

// int perfectSum(vector<int> arr, int n, int sum)
// {
//     int MOD = 1e9 + 7;
//     vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
//     return help(arr, n - 1, sum, dp) % MOD;
// }

// int countPartitions(int n, int d, vector<int> &arr)
// {
//     int totalsum = accumulate(arr.begin(), arr.end(), 0);
//     int requiredTarget = (totalsum - d) / 2;
//     if (totalsum - d < 0)
//         return 0;
//     if ((totalsum - d) % 2 == 1)
//         return 0;
//     return perfectSum(arr, n, requiredTarget);
// }

// 0/1 Knapsack (DP - 19) A thief wants to rob a store. He is carrying a bag of capacity W. The store has ‘n’ items. Its weight is given by the ‘wt’ array and its value by the ‘val’ array. He can either include an item in its knapsack or exclude it but can’t partially have it as a fraction. We need to find the maximum value of items that the thief can steal.

// int help(int ind, int W, vector<int> &wt, vector<int> &val, vector<vector<int>> &dp)
// {
//     if (W == 0)
//     {
//         return dp[ind][W] = 0;
//     }
//     if (ind == 0)
//     {
//         if (W >= wt[0])
//         {
//             return dp[ind][W] = val[0];
//         }
//         return dp[ind][W] = 0;
//     }
//     if (dp[ind][W] != -1)
//         return dp[ind][W];
//     int taken = 0;
//     int notTaken = help(ind - 1, W, wt, val, dp);
//     if (wt[ind] <= W)
//     {
//         taken = val[ind] + help(ind - 1, W - wt[ind], wt, val, dp);
//     }
//     else
//     {
//         taken = -1e9;
//     }
//     return dp[ind][W] = max(notTaken, taken);
// }

// int knapsack(vector<int> &wt, vector<int> val, int n, int W)
// {
//     vector<vector<int>> dp(101, vector<int>(1001, -1));
//     return help(n - 1, W, wt, val, dp);
// }

// Tabulation :

// int knapsack(vector<int> &wt, vector<int> val, int n, int W)
// {
//     vector<vector<int>> dp(101, vector<int>(1001, -1));
//     for (int i = wt[0]; i <= W; i++)
//     {
//         dp[0][i] = val[0];
//     }
//     for (int ind = 1; ind < n; ind++)
//     {
//         for (int w = 0; w <= W; w++)
//         {
//             int taken = 0;
//             int notTaken = dp[ind - 1][w];
//             if (wt[ind] <= w)
//             {
//                 taken = val[ind] + dp[ind - 1][w - wt[ind]];
//             }
//             else
//             {
//                 taken = -1e9;
//             }
//               dp[ind][w] = max(notTaken, taken);
//         }
//     }
//     return dp[n - 1][W];
// }

// Space Optimization : Single Row yup!!

// int knapsack(vector<int> &wt, vector<int> val, int n, int W)
// {
//     vector<int> prev(W + 1, 0);
//     for (int i = wt[0]; i <= W; i++)
//     {
//         prev[i] = val[0];
//     }
//     for (int ind = 1; ind < n; ind++)
//     {
//         for (int w = W; w >= 0; w--)
//         {
//             int taken = -1e9;
//             int notTaken = prev[w];
//             if (wt[ind] <= w)
//             {
//                 taken = val[ind] + prev[w - wt[ind]];
//             }
//             else
//             {
//                 taken = -1e9;
//             }
//             prev[w] = max(notTaken, taken);
//         }
//     }
//     return prev[W];
// }

// 322. Coin Change You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money. Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.You may assume that you have an infinite number of each kind of coin.

// memoization :

// int help(int ind, int amount, vector<int> &coins, vector<vector<int>> &dp)
// {
//     if (ind == 0)
//     {
//         if (amount % coins[0] == 0)
//             return dp[ind][amount] = amount / coins[0];
//         return dp[ind][amount] = 1e9;
//     }
//     if (dp[ind][amount] != -1)
//     {
//         return dp[ind][amount];
//     }
//     int notTake = help(ind - 1, amount, coins, dp);
//     int take = 1e9;
//     if (amount >= coins[ind])
//     {
//         take = 1 + help(ind, amount - coins[ind], coins, dp);
//     }
//     return dp[ind][amount] = min(take, notTake);
// }

// int coinChange(vector<int> &coins, int amount)
// {
//     int n = coins.size();
//     vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
//     int ans = help(coins.size() - 1, amount, coins, dp);
//     return ans >= 1e9 ? -1 : ans;
// }

// Tabultaion:

// int coinChange(vector<int> &coins, int amount)
// {
//     int n = coins.size();
//     vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
//     for (int a = 0; a <= amount; a++)
//     {
//         if (a % coins[0] == 0)
//         {
//             dp[0][a] = a / coins[0];
//         }
//         else
//         {
//             dp[0][a] = 1e9;
//         }
//     }
//     for (int ind = 1; ind < n; ind++)
//     {
//         for (int a = 0; a <= amount; a++)
//         {
//             int notTake = dp[ind - 1][a];
//             int take = 1e9;
//             if (a >= coins[ind])
//             {
//                 take = 1 + dp[ind][a - coins[ind]];
//             }
//             dp[ind][a] = min(take, notTake);
//         }
//     }
//     int ans = dp[n - 1][amount];
//     return ans >= 1e9 ? -1 : ans;
// }

// Space Optimization :

// int coinChange(vector<int> &coins, int amount)
// {
//     int n = coins.size();
//     vector<int> prev(amount + 1, -1);
//     vector<int> cur(amount + 1, -1);
//     for (int a = 0; a <= amount; a++)
//     {
//         if (a % coins[0] == 0)
//         {
//             prev[a] = a / coins[0];
//         }
//         else
//         {
//             prev[a] = 1e9;
//         }
//     }
//     for (int ind = 1; ind < n; ind++)
//     {
//         for (int a = 0; a <= amount; a++)
//         {
//             int notTake = prev[a];
//             int take = 1e9;
//             if (a >= coins[ind])
//             {
//                 take = 1 + cur[a - coins[ind]];
//             }
//             cur[a] = min(take, notTake);
//         }
//         prev = cur;
//     }
//     int ans = prev[amount];
//     return ans >= 1e9 ? -1 : ans;
// }

// 494. Target Sum:You are given an integer array nums and an integer target.You want to build an expression out of nums by adding one of the symbols '+' and '-' before each integer in nums and then concatenate all the integers.For example, if nums = [2, 1], you can add a '+' before 2 and a '-' before 1 and concatenate them to build the expression "+2-1".Return the number of different expressions that you can build, which evaluates to target.

// memoization :

// int help(int ind, int target, vector<int> &nums, vector<vector<int>> &dp)
// {
//     if (ind == 0)
//     {
//         if (target == 0 and nums[0] == 0)
//             return 2;
//         if (target == nums[0] or target == 0)
//         {
//             return 1;
//         }
//         return 0;
//     }

//     if (dp[ind][target] != -1)
//     {
//         return dp[ind][target];
//     }

//     int nottake = help(ind - 1, target, nums, dp);
//     int take = 0;
//     if (nums[ind] <= target)
//     {
//         take = help(ind - 1, target - nums[ind], nums, dp);
//     }
//     return dp[ind][target] = take + nottake;
// }

// int findTargetSumWays(vector<int> &nums, int target)
// {

//     int total = accumulate(nums.begin(), nums.end(), 0);
//     if (target > total)
//         return 0;
//     if ((total - target) % 2 == 1)
//     {
//         return 0;
//     }
//     int s2 = (total - target) / 2;

//     vector<vector<int>> dp(nums.size(), vector<int>(s2 + 1, -1));
//     return help(nums.size() - 1, s2, nums, dp);
// }

// Tabulation approach :

// int findTargetSumWays(vector<int> &nums, int target)
// {
//     int total = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         total += nums[i];
//     }
//     if (target > total)
//         return 0;
//     if ((total - target) % 2 == 1)
//     {
//         return 0;
//     }
//     int s2 = (total - target) / 2;
//     vector<vector<int>> dp(nums.size(), vector<int>(s2 + 1, 0));
//     // return help(nums.size() - 1, s2, nums, dp);
//     if (nums[0] == 0)
//     {
//         dp[0][0] = 2;
//     }
//     else
//     {
//         dp[0][0] = 1;
//     }
//     if (nums[0] != 0 and nums[0] <= s2)
//     {
//         dp[0][nums[0]] = 1;
//     }
//     for (int ind = 1; ind < nums.size(); ind++)
//     {
//         for (int s = 0; s <= s2; s++)
//         {
//             int nottake = dp[ind - 1][s];
//             int take = 0;
//             if (nums[ind] <= s)
//             {
//                 take = dp[ind - 1][s - nums[ind]];
//             }
//             dp[ind][s] = nottake + take;
//         }
//     }
//     return dp[nums.size() - 1][s2];
// }

// Space Optimization:

// int findTargetSumWays(vector<int> &nums, int target)
// {
//     int total = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         total += nums[i];
//     }
//     if (target > total)
//         return 0;
//     if ((total - target) % 2 == 1)
//     {
//         return 0;
//     }
//     int s2 = (total - target) / 2;
//     // vector<vector<int>> dp(nums.size(), vector<int>(s2 + 1, 0));
//     vector<int> prev(s2 + 1, 0);
//     // return help(nums.size() - 1, s2, nums, dp);
//     if (nums[0] == 0)
//     {
//         prev[0] = 2;
//     }
//     else
//     {
//         prev[0] = 1;
//     }
//     if (nums[0] != 0 and nums[0] <= s2)
//     {
//         prev[nums[0]] = 1;
//     }
//     for (int ind = 1; ind < nums.size(); ind++)
//     {
//         vector<int> cur(s2 + 1, 0);
//         cur[0] = 1;
//         for (int s = 0; s <= s2; s++)
//         {
//             int nottake = prev[s];
//             int take = 0;
//             if (nums[ind] <= s)
//             {
//                 take = prev[s - nums[ind]];
//             }
//             cur[s] = nottake + take;
//         }
//         prev = cur;
//     }
//     return prev[s2];
// }

// 518. Coin Change II :You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.Return the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the coins, return 0.You may assume that you have an infinite number of each kind of coin.The answer is guaranteed to fit into a signed 32-bit integer.

// Memoization :

// int help(int ind, int total, vector<int> &coins, vector<vector<int>> &dp)
// {
//     if (ind == 0)
//     {
//         if (total == 0)
//         {
//             return dp[ind][total] = 1;
//         }
//         if (total % coins[ind] == 0)
//         {
//             return dp[ind][total] = 1;
//         }
//         return dp[ind][total] = 0;
//     }
//     if (dp[ind][total] != -1)
//         return dp[ind][total];
//     int notTake = help(ind - 1, total, coins, dp);
//     int take = 0;
//     if (coins[ind] <= total)
//     {
//         take = help(ind  , total - coins[ind], coins, dp);
//     }
//     return dp[ind][total] = take + notTake;
// }

// int change(int amount, vector<int> &coins)
// {
//     int n = coins.size();
//     vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
//     return help(n - 1, amount, coins, dp);
// }
// Tabulation :

// Tabulation:

// int change(int amount, vector<int> &coins)
// {
//     int n = coins.size();
//     vector<vector<int>> dp(n, vector<int>(amount + 1, 0));
//     dp[0][0] = 1;
//     for (int t = 1; t <= amount; t++)
//     {
//         if (t % coins[0] == 0)
//             dp[0][t] = 1;
//     }
//     for (int ind = 1; ind < n; ind++)
//     {
//         for (int t = 0; t <= amount; t++)
//         {
//             int notTake = dp[ind - 1][t];
//             int take = 0;
//             if (coins[ind] <= t)
//             {
//                 take = dp[ind][t - coins[ind]];
//             }
//             dp[ind][t] = take + notTake;
//         }
//     }
//     return dp[n - 1][amount];
// }

// Space Optimization :

// int change(int amount, vector<int> &coins)
// {
//     int n = coins.size();
//     vector<int> prev(amount + 1, 0), cur(amount + 1, 0);
//     prev[0] = 1;
//     for (int t = 1; t <= amount; t++)
//     {
//         if (t % coins[0] == 0)
//             prev[t] = 1;
//     }
//     for (int ind = 1; ind < n; ind++)
//     {
//         for (int t = 0; t <= amount; t++)
//         {
//             int notTake = prev[t];
//             int take = 0;
//             if (coins[ind] <= t)
//             {
//                 take = cur[t - coins[ind]];
//             }
//             cur[t] = take + notTake;
//         }
//         prev = cur;
//     }
//     return prev[amount];
// }

// Knapsack with Duplicate Items : Given a set of N items, each with a weight and a value, represented by the array w and val respectively. Also, a knapsack with weight limit W.The task is to fill the knapsack in such a way that we can get the maximum profit. Return the maximum profit.Note: Each item can be taken any number of times.

// int help(int ind, int total, int val[], int wt[], vector<vector<int>> &dp)
// {
//     if (ind == 0)
//     {
//         return dp[ind][total] = (total / wt[ind]) * val[ind];
//     }
//     if (dp[ind][total] != -1)
//         return dp[ind][total];
//     int notTake = help(ind - 1, total, val, wt, dp);
//     int take = 0;
//     if (wt[ind] <= total)
//     {
//         take = val[ind] + help(ind, total - wt[ind], val, wt, dp);
//     }
//     return dp[ind][total] = max(take, notTake);
// }

// int knapSack(int N, int W, int val[], int wt[])
// {
//     vector<vector<int>> dp(N, vector<int>(W + 1, -1));
//     return help(N - 1, W, val, wt, dp);
// }

// Tabultation :

// int knapSack(int N, int W, int val[], int wt[])
// {
//     vector<vector<int>> dp(N, vector<int>(W + 1, 0));
//     for (int w = wt[0]; w <= W; w++)
//     {
//         dp[0][w] = (w / wt[0]) * val[0];
//     }
//     for (int ind = 1; ind < N; ind++)
//     {
//         for (int w = 0; w <= W; w++)
//         {
//             int notTake = dp[ind - 1][w];
//             int take = INT_MIN;
//             if (wt[ind] <= w)
//             {
//                 take = val[ind] + dp[ind][w - wt[ind]];
//             }
//             dp[ind][w] = max(take, notTake);
//         }
//     }
//     return dp[N - 1][W];
// }

// Space Optimization :

// int knapSack(int N, int W, int val[], int wt[])
// {
//     vector<int> cur(W + 1, 0);
//     for (int w = wt[0]; w <= W; w++)
//     {
//         cur[w] = (w / wt[0]) * val[0];
//     }
//     for (int ind = 1; ind < N; ind++)
//     {
//         for (int w = 0; w <= W; w++)
//         {
//             int notTake = cur[w];
//             int take = INT_MIN;
//             if (wt[ind] <= w)
//             {
//                 take = val[ind] + cur[w - wt[ind]];
//             }
//             cur[w] = max(take, notTake);
//         }
//     }
//     return cur[W];
// }

// Rod Cutting:Given a rod of length N inches and an array of prices, price[]. price[i] denotes the value of a piece of length i. Determine the maximum value obtainable by cutting up the rod and selling the pieces.

// int help(int ind, int length, int price[], vector<vector<int>> &dp)
// {
//     if (ind == 0)
//     {
//         return dp[ind][length] = length * price[ind];
//     }
//     if (dp[ind][length] != -1)
//     {
//         return dp[ind][length];
//     }
//     int notTake = help(ind - 1, length, price, dp);
//     int take = 0;
//     if (length >= (ind + 1))
//     {
//         take = price[ind] + help(ind, length - (ind + 1), price, dp);
//     }
//     return dp[ind][length] = max(take, notTake);
// }

// int cutRod(int price[], int n)
// {
//     vector<vector<int>> dp(n, vector<int>(n + 1, -1));
//     return help(n - 1, n, price, dp);
// }

// Tabulation :

// int cutRod(int price[], int n)
// {
//     vector<vector<int>> dp(n, vector<int>(n + 1, -1));
//     for (int length = 0; length <= n; length++)
//     {
//         dp[0][length] = length * price[0];
//     }
//     for (int ind = 1; ind < n; ind++)
//     {
//         for (int length = 0; length <= n; length++)
//         {
//             int notTake = dp[ind - 1][length];
//             int take = 0;
//             if (length >= (ind + 1))
//             {
//                 take = price[ind] + dp[ind][length - (ind + 1)];
//             }
//             dp[ind][length] = max(take, notTake);
//         }
//     }
//     return dp[n - 1][n];
// }

// Space Optimization:

// int cutRod(int price[], int n)
// {
//     vector<int> prev(n + 1, -1);
//     for (int length = 0; length <= n; length++)
//     {
//         prev[length] = length * price[0];
//     }
//     for (int ind = 1; ind < n; ind++)
//     {
//         for (int length = 0; length <= n; length++)
//         {
//             int notTake = prev[length];
//             int take = 0;
//             if (length >= (ind + 1))
//             {
//                 take = price[ind] + prev[length - (ind + 1)];
//             }
//             prev[length] = max(take, notTake);
//         }
//     }
//     return prev[n];
// }

// 1143. Longest Common Subsequence: Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0. A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters. For example, "ace" is a subsequence of "abcde". A common subsequence of two strings is a subsequence that is common to both strings.

// memoization

// int helper(vector<vector<int>> &dp, string &a, string &b, int ind1, int ind2)
// {
//     if (ind1 < 0 || ind2 < 0)
//         return 0;
//         if(dp[ind1][ind2]!=-1)
//         return dp[ind1][ind2];
// if (a[ind1] == b[ind2])
// {
//     return dp[ind1][ind2] = 1 + helper(dp, a, b, ind1 - 1, ind2 - 1);
// }

// return dp[ind1][ind2] = max(helper(dp, a, b, ind1 - 1, ind2), helper(dp, a, b, ind1, ind2 - 1));
// }

// int longestCommonSubsequence(string text1, string text2)
// {
//     int m = text1.size();
//     int n = text2.size();
//     vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
//     return helper(dp, text1, text2, m - 1, n - 1);
// }

// Tabulation:Index shifting concept is thier revise it

// int longestCommonSubsequence(string text1, string text2)
// {
//     int m = text1.size();
//     int n = text2.size();
//     vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
//     for (int i = 0; i <= n; i++)
//     {
//         dp[0][i] = 0;
//     }
//     for (int i = 0; i <= m; i++)
//     {
//         dp[i][0] = 0;
//     }
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (text1[i - 1] == text2[j - 1])
//             {
//                 dp[i][j] = 1 + dp[i - 1][j - 1];
//             }
//             else

//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//         }
//     }
//     return dp[m][n];
// }

// Space optimization to two vectors

// int longestCommonSubsequence(string text1, string text2)
// {
//     int m = text1.size();
//     int n = text2.size();
//     vector<int> prev(n + 1, 0);
//     vector<int> cur(n + 1, 0);
//     for (int i = 0; i <= n; i++)
//     {
//         prev[i] = 0;
//     }
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (text1[i - 1] == text2[j - 1])
//             {
//                 cur[j] = 1 + prev[j - 1];
//             }
//             else

//                 cur[j] = max(prev[j], cur[j - 1]);
//         }
//         prev = cur;
//     }
//     return prev[n];
// }

// Print Longest Common Subsequence

// int longestCommonSubsequence(string s1, string s2)
// {
//     int n = s1.size();
//     int m = s2.size();

//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//     for (int i = 0; i <= n; i++)
//     {
//         dp[i][0] = 0;
//     }
//     for (int i = 0; i <= m; i++)
//     {
//         dp[0][i] = 0;
//     }

//     for (int ind1 = 1; ind1 <= n; ind1++)
//     {
//         for (int ind2 = 1; ind2 <= m; ind2++)
//         {
//             if (s1[ind1 - 1] == s2[ind2 - 1])
//                 dp[ind1][ind2] = 1 + dp[ind1 - 1][ind2 - 1];
//             else
//                 dp[ind1][ind2] = 0 + max(dp[ind1 - 1][ind2], dp[ind1][ind2 - 1]);
//         }
//     }

//     int len = dp[n][m];
//     int i = n;
//     int j = m;
//     int index = len = 1;

//     string str = "";
//     for (int k = 1; k <= len; k++)
//     {
//         str += "$";
//     }

//     while (i > 0 && j > 0)
//     {
//         if (s1[i - 1] == s2[j - 1])
//         {
//             str[index] = s1[i - 1];
//             index--;
//             i--;
//             j--;
//         }
//         else if (dp[i - 1] == dp[j - 1])
//         {
//             i--;
//         }
//         else
//         {
//             j--;
//         }
//     }

//     // str have the required subsequencen
// }

// Given two strings str1 and str2, find the length of their longest common substring.A substring is a contiguous sequence of characters within a string.

// int longestCommonSubstr(string s1, string s2)
// {
//     int n = s1.size();
//     int m = s2.size();

//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//     for (int i = 0; i <= n; i++)
//     {
//         dp[i][0] = 0;
//     }
//     for (int i = 0; i <= m; i++)
//     {
//         dp[0][i] = 0;
//     }
//     int ans = INT_MIN;
//     for (int ind1 = 1; ind1 <= n; ind1++)
//     {
//         for (int ind2 = 1; ind2 <= m; ind2++)
//         {
//             if (s1[ind1 - 1] == s2[ind2 - 1])
//             {
//                 dp[ind1][ind2] = 1 + dp[ind1 - 1][ind2 - 1];
//                 ans = max(ans, dp[ind1][ind2]);
//             }
//             else
//                 dp[ind1][ind2] = 0;
//         }
//     }
//     return ans;
// }

// 516. Longest Palindromic Subsequence Given a string s, find the longest palindromic subsequence's length in s. A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.

int longestCommonSubsequence(string text1, string text2)
{
    int m = text1.size();
    int n = text2.size();
    vector<int> prev(n + 1, 0);
    vector<int> cur(n + 1, 0);
    for (int i = 0; i <= n; i++)
    {
        prev[i] = 0;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (text1[i - 1] == text2[j - 1])
            {
                cur[j] = 1 + prev[j - 1];
            }
            else

                cur[j] = max(prev[j], cur[j - 1]);
        }
        prev = cur;
    }
    return prev[n];
}

int longestPalindromeSubseq(string s)
{
    string revS = s;
    reverse(revS.begin(), revS.end());
    return longestCommonSubsequence(revS, s);
}

// 1312. Minimum Insertion Steps to Make a String Palindrome :Given a string s. In one step you can insert any character at any index of the string.Return the minimum number of steps to make s palindrome.A Palindrome String is one that reads the same backward as well as forward.

int minInsertions(string s)
{
    int size = s.size();
    return size - longestPalindromeSubseq(s);
}

int main()
{
    return 0;
}