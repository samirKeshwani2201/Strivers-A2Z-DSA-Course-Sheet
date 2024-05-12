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
//             MAXI = max(ans, MAXI);
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























int main()
{

    return 0;
}