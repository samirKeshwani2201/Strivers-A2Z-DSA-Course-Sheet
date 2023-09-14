#include <bits/stdc++.h>
using namespace std;

// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
// You must write an algorithm with O(log n) runtime complexity.

// int binarySearch(vector<int> arr, int key, int low, int high)
// {
//     int mid;
//     while (low < high)
//     {
//         mid = low + (high - low) / 2;
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] > key)
//         {
//             high = mid;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return -1;
// }

// int search(vector<int> &nums, int target)
// {
//     binarySearch(nums, target, 0, nums.size());
// }

// you-are-given-an-array-arr-sorted-in-non-decreasing-order-and-a-number-x-find-the-lower-bound-of-x

// int binarySearch(vector<int> arr, int key, int low, int high)
// {
//     int mid;
//     while (low <= high)
//     {
//         mid = low + (high - low) / 2;
//         if (arr[mid] == key)
//         {
//             while (mid - 1 >= 0 && arr[mid] == arr[mid - 1])
//             {
//                 mid -= 1;
//             }
//             return mid;
//         }
//         else if (arr[mid] < key)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return low;
// }

// int binarySearch(vector<int> arr, int key, int low, int high)
// {
//     int mid;
//     int ans = arr.size();
//     while (low <= high)
//     {
//         mid = low + (high - low) / 2;
//         if (arr[mid] >= key)
//         {
//             ans = mid;
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// int lowerBound(vector<int> arr, int n, int x)
// {
//     return binarySearch(arr, x, 0, arr.size() - 1);
// }

// int binarySearch(vector<int> arr, int key, int low, int high)
// {
//     int mid;
//     int ans = arr.size();
//     while (low <= high && high < arr.size())
//     {
//         mid = low + (high - low) / 2;
//         if (arr[mid] <= key)
//         {
//             // ans = mid + 1;
//             low = mid + 1;
//         }
//         else
//         {
//             // arr[mid] > key
//             ans = mid;
//             high = mid - 1;
//         }
//     }
//     return ans;
// }

// int upperBound(vector<int> &arr, int x, int n)
// {
//     return binarySearch(arr, x, 0, arr.size() - 1);
// }

// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
// You must write an algorithm with O(log n) runtime complexity.

// int binarySearch(vector<int> arr, int key, int low, int high)
// {
//     int mid;
//     while (low < high)
//     {
//         mid = low + (high - low) / 2;
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] > key)
//         {
//             high = mid;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return low;
// }

// int searchInsert(vector<int> &nums, int target)
// {
//     return binarySearch(nums, target, 0, nums.size());
// }

// You're given on unsorted array 'A'of ’N'
// integers and an integer ’X'. Find the floor
// and ceiling of 'X' in 'A[O..N—1]'.
// Floor of 'X' is the largest element in the
// array which is smaller than or equal to
// 'X‘.
// Ceiling of 'X' is the smallest element in
// the array greater than or equal to 'X'.

// int getFloor(int arr[], int n, int tar)
// {
//     int low = 0;
//     int high = n;
//     int ans = -1;
//     while (low < high)
//     {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] <= tar)
//         {
//             ans = arr[mid];
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid;
//         }
//     }
//     return ans;
// }

// int geetCeil(int arr[], int n, int tar)
// {
//     int ans = -1;
//     int low = 0;
//     int high = n;
//     while (low < high)
//     {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] >= tar)
//         {
//             ans = arr[mid];
//             high = mid;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }
// pair<int, int> getFloorAndCeil(int arr[], int n, int x)
// {
//     pair<int, int> ans;
//     int f = -1, c;
//     sort(arr, arr + n);
//     f = getFloor(arr, n, x);
//     c = geetCeil(arr, n, x);
//     ans.first = f;
//     ans.second = c;
//     return ans;
// }

// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

// int getStart(vector<int> &nums, int target)
// {
//     int low = 0;
//     int high = nums.size();
//     int ans = -1;
//     while (low < high)
//     {
//         int mid = low + (high - low) / 2;
//         if (nums[mid] == target)
//         {
//             ans = mid;
//             high = mid;
//         }
//         else if (nums[mid] > target)
//         {
//             high = mid;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// int getEnd(vector<int> &nums, int target)
// {
//     int low = 0;
//     int high = nums.size();
//     int ans = -1;
//     while (low < high)
//     {
//         int mid = low + (high - low) / 2;
//         if (nums[mid] == target)
//         {
//             ans = mid;
//             low = mid + 1;
//         }
//         else if (nums[mid] > target)
//         {
//             high = mid;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// vector<int> searchRange(vector<int> &nums, int target)
// {
//     int start = -1;
//     int ending = -1;
//     start = getStart(nums, target);
//     if (start != -1)
//     {
//         ending = getEnd(nums, target);
//     }
//     return {start, ending};
// }

// You have been given a sorted array/list of
// integers ’arr' of size 'n’ and integer 'x’.
// Find the total number of occurrences of
// 'x' in the array/list.

// int count(vector<int> &arr, int n, int x)
// {
//     int ans = 0;
//     int low = 0;
//     int high = arr.size();
//     while (low < high)
//     {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] == x)
//         {
//             ans += 1;
//             int t = mid + 1;
//             while (t < n && arr[mid] == arr[t])
//             {
//                 ans += 1;
//                 t += 1;
//             }
//             t = mid - 1;
//             while (t >= 0 && arr[mid] == arr[t])
//             {
//                 ans += 1;
//                 t -= 1;
//             }
//             return ans;
//         }
//         else if (arr[mid] > x)
//         {
//             high = mid;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// int getStart(vector<int> &nums, int target)
// {
//     int low = 0;
//     int high = nums.size();
//     int ans = -1;
//     while (low < high)
//     {
//         int mid = low + (high - low) / 2;
//         if (nums[mid] == target)
//         {
//             ans = mid;
//             high = mid;
//         }
//         else if (nums[mid] > target)
//         {
//             high = mid;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// int getEnd(vector<int> &nums, int target)
// {
//     int low = 0;
//     int high = nums.size();
//     int ans = -1;
//     while (low < high)
//     {
//         int mid = low + (high - low) / 2;
//         if (nums[mid] == target)
//         {
//             ans = mid;
//             low = mid + 1;
//         }
//         else if (nums[mid] > target)
//         {
//             high = mid;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// vector<int> searchRange(vector<int> &nums, int target)
// {
//     int start = -1;
//     int ending = -1;
//     start = getStart(nums, target);
//     if (start != -1)
//     {
//         ending = getEnd(nums, target);
//     }
//     return {start, ending};
// }

// int count(vector<int> &arr, int n, int x)
// {
//     vector<int> a = searchRange(arr, x);
//     if (a[0] != -1)
//     {
//         return a[1] - a[0] + 1;
//     }
//     return 0;
// }

// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.
// int binarySearch(vector<int> arr, int key, int low, int high)
// {
//     int mid;
//     while (low < high)
//     {
//         mid = low + (high - low) / 2;
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] > key)
//         {
//             high = mid;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return -1;
// }

// int getPivot(vector<int> nums)
// {
//     int low = 0;
//     int ans = 0;
//     int high = nums.size();
//     while (low < high)
//     {
//         int mid = low + (high - low) / 2;
//         if (nums[mid] >= nums[0])
//         {
//             low = mid + 1;
//         }
//         else if (nums[mid] < nums[0])
//         {
//             ans = mid;
//             high = mid;
//         }
//     }
//     return ans;
// }

// int search(vector<int> &nums, int target)
// {
//     int pivot = getPivot(nums);
//     int a = binarySearch(nums, target, 0, pivot);
//     int b = binarySearch(nums, target, pivot, nums.size());
//     if (a != -1)
//     {
//         return a;
//     }
//     return b;
// }

// int search(vector<int> &nums, int target)
// {
//     int low = 0, high = nums.size();
//     int ans = -1;
//     while (low < high)
//     {
//         int mid = low + (high - low) / 2;
//         if (nums[mid] == target)
//         {
//             return mid;
//         }
//         else if (nums[low] < nums[mid])
//         {
//             // sorted left part
//             if (nums[low] <= target && target <= nums[mid])
//             {
//                 high = mid;
//             }
//             else
//             {
//                 low = mid + 1;
//             }
//         }
//         else
//         {
//                if (nums[mid] <= target && target <= nums[high - 1])
//             {
//                 low = mid + 1;
//             }
//             else
//             {
//                 high = mid;
//             }
//         }
//     }
//     return ans;
// }

// There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).

// Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].

// Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.

// bool search(vector<int> &nums, int target)
// {
//     int low = 0, high = nums.size();
//     bool ans = false;
//     while (low < high)
//     {
//         int mid = low + (high - low) / 2;
//         if (nums[mid] == target)
//         {
//             return true;
//         }
//         if (nums[low] == nums[mid] && nums[mid] == nums[high - 1])
//         {
//             low = low + 1;
//             high = high - 1;
//             continue;
//         }
//         if (nums[low] <= nums[mid])
//         {
//             // sorted left part
//             if (nums[low] <= target && target <= nums[mid])
//             {
//                 high = mid;
//             }
//             else
//             {
//                 low = mid + 1;
//             }
//         }
//         else
//         {
//             if (nums[mid] <= target && target <= nums[high - 1])
//             {
//                 low = mid + 1;
//             }
//             else
//             {
//                 high = mid;
//             }
//         }
//     }
//     return ans;
// }

// Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

// [4,5,6,7,0,1,2] if it was rotated 4 times.
// [0,1,2,4,5,6,7] if it was rotated 7 times.
// Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

// Given the sorted rotated array nums of unique elements, return the minimum element of this array.

// You must write an algorithm that runs in O(log n) time.

// int findMin(vector<int> &nums)
// {
//     int low = 0;
//     int high = nums.size();
//     int ans = nums[0];
//     while (low < high)
//     {
//         int mid = low + (high - low) / 2;
//         if (nums[mid] > nums[0])
//         {
//             low = mid + 1;
//         }
//         else if (nums[mid] < nums[0])
//         {
//             ans = nums[mid];
//             high = mid;
//         }
//         else
//         {
//             low++;
//         }
//     }
//     return ans;
// }

// int getPivot(vector<int> &nums)
// {
//     int low = 0;
//     int high = nums.size();
//     int mid = (low) + (high - low) / 2;
//     int ans = 0;
//     while (low < high)
//     {
//         if (nums[mid] >= nums[0])
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             ans = mid;
//             high = mid;
//         }
//         mid = (low) + (high - low) / 2;
//     }
//     return mid;
// }

// int findMin(vector<int> &nums)
// {
//     int getP = getPivot(nums);
//     if (getP == nums.size())
//     {
//         return nums[0];
//     }
//     return nums[getP];
// }

// int findMin(vector<int> &nums)
// {
//     int low = 0;
//     int ans = 0;
//     int high = nums.size();
//     while (low < high)
//     {
//         int mid = (low) + (high - low) / 2;
//         int t;
//         if (nums[mid] > nums[low])
//         {
//             t = low;
//             low = mid + 1;
//         }
//         else
//         {
//             t = mid;
//             high = mid;
//         }
//         if (nums[t] < nums[ans])
//         {
//             ans = t;
//         }
//     }
//     return ans;
// }

// You are given an array ’arr'hoving 'n’
// distinct integers sorted in ascending
// order. The array is right rotated 'r'times
// Find the minimum value of 'r'.
// Right rotating an array means shifting
// the element at ’ith'index to (‘i+1') mod 'n‘
// index, for all 'i' from O to ‘n-1'.

// int findKRotation(vector<int> &nums)
// {
//     int low = 0;
//     int ans = 0;
//     int high = nums.size();
//     while (low < high)
//     {
//         int mid = (low) + (high - low) / 2;
//         int t;
//         if (nums[mid] > nums[low])
//         {
//             t = low;
//             low = mid + 1;
//         }
//         else
//         {
//             t = mid;
//             high = mid;
//         }
//         if (nums[t] < nums[ans])
//         {
//             ans = t;
//         }
//     }
//     return ans;
// }

// You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

// Return the single element that appears only once.

// Your solution must run in O(log n) time and O(1) space.

// int singleNonDuplicate(vector<int> &nums)
// {
//     int ans = 0;
//     for (auto it : nums)
//     {
//         ans = ans ^ it;
//     }
//     return ans;
// }

// int singleNonDuplicate(vector<int> &nums)
// {
//     int low = 0;
//     int ans = nums[0];
//     int high = nums.size();
//     while (low < high)
//     {
//         int mid = (low) + (high - low) / 2;
//         if (mid % 2 == 0)
//         {
//             if (mid + 1 < nums.size() && nums[mid + 1] == nums[mid])
//             {
//                 // even ,odd
//                 //  left half so jump to right
//                 low = mid + 1;
//             }
//             else
//             {
//                 // right part
//                 high = mid;
//             }
//         }
//         else
//         {
//             if (mid - 1 >= 0 && nums[mid - 1] == nums[mid])
//             {
//                 // even ,odd
//                 //  left half so jump to right
//                 low = mid + 1;
//             }
//             else
//             {
//                 // right part
//                 high = mid;
//             }
//         }
//     }
//     return nums[low];
// }

// int singleNonDuplicate(vector<int> &nums)
// {
//     int low = 0;
//     int high = nums.size();
//     while (low < high)
//     {
//         int mid = (low) + (high - low) / 2;
//         if (mid % 2 == 1)
//         {
//             mid--;
//         }
//         if (nums[mid] != nums[mid + 1])
//         {
//             high = mid ;
//         }
//         else
//         {
//             low =mid+2;
//         }
//     }
//     return nums[low];
// }

// A peak element is an element that is strictly greater than its neighbors.

// Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

// You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

// You must write an algorithm that runs in O(log n) time.

// int findPeakElement(vector<int> &nums)
// {
//     if (nums.size() >= 2 && nums[nums.size() - 1] > nums[nums.size() - 2])
//     {
//         return nums.size() - 1;
//     }
//     if (nums.size() >= 2)
//     {
//         if (nums[0] > nums[1])
//         {
//             return 0;
//         }
//     }
//     if (nums.size() == 1)
//     {
//         return 0;
//     }
//     for (int i = 1; i < nums.size() - 1; i++)
//     {
//         if (nums[i] > nums[i + 1] && nums[i] > nums[i - 1])
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int findPeakElement(vector<int> &nums)
// {
//     int low = 1;
//     int high = nums.size() - 1;
//     int mid = (low) + (high - low) / 2;
//     if (nums.size() == 1)
//     {
//         return 0;
//     }
//     if (nums[0] > nums[1])
//     {
//         return 0;
//     }
//     if (nums[nums.size() - 1] > nums[nums.size() - 2])
//     {
//         return nums.size() - 1;
//     }
//     while (low < high)
//     {
//         if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1])
//         {
//             return mid;
//         }
//         if (nums[mid] > nums[mid - 1])
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid ;
//         }
//         mid = (low) + (high - low) / 2;
//     }
//     return mid;
// }

// You are given 0 positive integer ‘n’.
// Your task is to fnd and return its square
// root. If ‘n’is not a perfect square, then
// return the floor value of 'sqrt(n)'.

// int floorSqrt(int n)
// {
//     int low = 0;
//     int high = n;
//     if (n == 1)
//         return 1;
//     int ans;
//     while (low < high)
//     {
//         long long mid = low + (high - low) / 2;
//         if ((mid * mid) == (long long)n)
//         {
//             return (int)mid;
//         }
//         if ((mid * mid) < (long long)n)
//         {
//             ans = mid;
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid;
//         }
//     }
//     return ans;
// }

// You are given two positive integers ’n'
// and ’m’.
// You have to return the 'nth' root of 'm', i.e.
//  m^(1/n).
// If the 'nth root is not on integer, return -1.

// int NthRoot(int n, int m)
// {
//     int low = 0;
//     int high = m;
//     while (low < high)
//     {
//         int mid = low + (high - low) / 2;
//         if (pow(mid, n) == m)
//         {
//             return mid;
//         }
//         if (pow(mid, n) > m)
//         {
//             high = mid;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return -1;
// }

// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// Return the minimum integer k such that she can eat all the bananas within h hours.

// int minEatingSpeed(vector<int> &piles, int h)
// {
//     int ans = *max_element(piles.begin(), piles.end());
//     int ele = *max_element(piles.begin(), piles.end());
//     for (int i = 1; i <= ele; i++)
//     {
//         long long time = 0;
//         for (auto it : piles)
//         {
//             time += ceil((double)it / i);
//         }
//         if (time <= h)
//         {
//             return i;
//         }
//     }
//     return ans;
// }

// Binary approach :

// int minEatingSpeed(vector<int> &piles, int h)
// {
//     int ans = *max_element(piles.begin(), piles.end());
//     int ele = *max_element(piles.begin(), piles.end());
//     int low = 1;
//     int high = ele;
//     while (low < high)
//     {
//         int mid = (low) + (high - low) / 2;
//         long long time = 0;
//         for (auto it : piles)
//         {
//             time += ceil((double)it / mid);
//         }
//         if (time <= h)
//         {
//             ans = min(ans, mid);
//             high = mid;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// You are given an integer array bloomDay, an integer m and an integer k.

// You want to make m bouquets. To make a bouquet, you need to use k adjacent flowers from the garden.

// The garden consists of n flowers, the ith flower will bloom in the bloomDay[i] and then can be used in exactly one bouquet.

// Return the minimum number of days you need to wait to be able to make m bouquets from the garden. If it is impossible to make m bouquets return -1.

// int minDays(vector<int> &bloomDay, int m, int k)
// {
//     if (m * k > bloomDay.size())
//     {
//         return -1;
//     }
//     int maxiDay = *max_element(bloomDay.begin(), bloomDay.end());
//     int highest = maxiDay;
//     for (int i = 1; i <= maxiDay; i++)
//     {
//         int ans = -1;
//         int select = 0;
//         int bokeBaniya = 0;
//         for (int j = 0; j < bloomDay.size(); j++)
//         {
//             if (bloomDay[j] - i <= 0)
//             {
//                 // we can select flower :
//                 select++;
//             }
//             else
//             {
//                 select = 0;
//             }
//             // a boke completed
//             if (select == k)
//             {
//                 bokeBaniya++;
//                 select = 0;
//             }
//             // target boke achieved
//             if (bokeBaniya == m)
//             {
//                 ans = i;
//                 break;
//             }
//         }
//         if (bokeBaniya == m)
//         {
//             highest = min(highest, ans);
//         }
//     }
//     return highest;
// }

// Binary approach:

// vector<int> bookMadei(vector<int> &bloomDay, int m, int k, int day)
// {
//     int ans = -1;
//     int select = 0;
//     int bokeBaniya = 0;
//     for (int j = 0; j < bloomDay.size(); j++)
//     {
//         if (bloomDay[j] - day <= 0)
//         {
//             // we can select flower :
//             select++;
//         }
//         else
//         {
//             select = 0;
//         }
//         // a boke completed
//         if (select == k)
//         {
//             bokeBaniya++;
//             select = 0;
//         }
//         // target boke achieved
//         if (bokeBaniya == m)
//         {
//             ans = day;
//             break;
//         }
//     }
//     vector<int> ansv;
//     ansv = {bokeBaniya, ans};
//     return ansv;
// }

// int minDays(vector<int> &bloomDay, int m, int k)
// {
//     if ((m) > bloomDay.size() / k)
//     {
//         return -1;
//     }
//     int maxiDay = *max_element(bloomDay.begin(), bloomDay.end());
//     int highest = maxiDay;
//     int low = 1;
//     int high = maxiDay;
//     while (low < high)
//     {
//         int mid = (low) + (high - low) / 2;
//         if (bookMadei(bloomDay, m, k, mid)[0] >= m)
//         {
//             int ans = bookMadei(bloomDay, m, k, mid)[1];
//             highest = min(highest, ans);
//             high = mid;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return highest;
// }

// structured binary code :

// int minDays(vector<int> &bloomDay, int m, int k)
// {
//     int cnt = 0;
//     int maxi = *max_element(bloomDay.begin(), bloomDay.end());
//     if ((m) > bloomDay.size() / k)
//     {
//         return -1;
//     }
//     int low = *min_element(bloomDay.begin(), bloomDay.end());
//     int high = maxi + 1;
//     while (low < high)
//     {
//         int mid = (low) + (high - low) / 2;
//         int bb = 0;
//         int select = 0;
//         for (int j = 0; j < bloomDay.size(); j++)
//         {
//             if (bloomDay[j] <= mid)
//             {
//                 select++;
//             }
//             else
//             {
//                 select = 0;
//             }
//             if (select == k)
//             {
//                 bb++;
//                 select = 0;
//             }
//             if (bb == m)
//             {
//                 break;
//             }
//         }
//         if (bb >= m)
//         {
//             high = mid;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return high;
// }

// Given an array of integers nums and an integer threshold, we will choose a positive integer divisor, divide all the array by it, and sum the division's result. Find the smallest divisor such that the result mentioned above is less than or equal to threshold.

// Each result of the division is rounded to the nearest integer greater than or equal to that element. (For example: 7/3 = 3 and 10/2 = 5).

// The test cases are generated so that there will be an answer.

// int smallestDivisor(vector<int> &nums, int threshold)
// {
//     int mini = *min_element(nums.begin(), nums.end());
//     int maxi = *max_element(nums.begin(), nums.end());
//     long long sum = 0;
//     for (int i = mini; i <= maxi; i++)
//     {
//         for (auto it : nums)
//         {
//             sum += ceil((double)it / i);
//         }
//         if (sum <= threshold)
//         {
//             return i;
//         }
//         sum = 0;
//     }
//     return -1;
// }

// int smallestDivisor(vector<int> &nums, int threshold)
// {
//     int mini = 1;
//     int maxi = *max_element(nums.begin(), nums.end());
//     long long sum = 0;
//     int ans;
//     while (mini < maxi)
//     {
//         int mid = (mini) + (maxi - mini) / 2;
//         for (auto it : nums)
//         {
//             sum += ceil((double)it / mid);
//         }
//         if (sum > threshold)
//         {
//             mini = mid + 1;
//         }
//         else
//         {
//             maxi = mid;
//         }
//         sum = 0;
//     }
//     return mini;
// }

// A conveyor belt has packages that must be shipped from one port to another within days days.

// The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.

// Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.

// int shipWithinDays(vector<int> &weights, int days)
// {
//     int miniWtDay = 1;
//     int maxiwtDay = 0;
//     for (auto it : weights)
//     {
//         maxiwtDay += it;
//     }
//     for (int i = miniWtDay; i <= maxiwtDay; i++)
//     {
//         int wtCap = i;
//         int day = 1;
//         for (int j = 0; j < weights.size(); j++)
//         {
//             if (wtCap - weights[j] >= 0)
//             {
//                 // can be shipped;
//                 wtCap -= weights[j];
//             }
//             else
//             {
//                 // postpon to other day
//                 if (i - weights[j] >= 0)
//                 {
//                     // can be possible
//                     wtCap = i - weights[j];
//                     day++;
//                 }
//                 else
//                 {
//                     day = -1;
//                     // not possible
//                     break;
//                 }
//             }
//         }
//         if (day != -1 && day <= days)
//         {
//             return i;
//         }
//     }
//     return maxiwtDay;
// }

// int shipWithinDays(vector<int> &weights, int days)
// {
//     int miniWtDay = *max_element(weights.begin(), weights.end());
//     long long maxiwtDay =accumulate(weights.begin(),weights.end(),0);
//     long long ans;
//     while (miniWtDay < maxiwtDay)
//     {
//         int mid = (miniWtDay) + (maxiwtDay - miniWtDay) / 2;
//         int wtCap = mid;
//         int day = 1;
//         for (int j = 0; j < weights.size(); j++)
//         {
//             if (wtCap - weights[j] >= 0)
//             {
//                 // can be shipped;
//                 wtCap -= weights[j];
//             }
//             else
//             {
//                 // postpon to other day
//                 if (mid - weights[j] >= 0)
//                 {
//                     // can be possible
//                     wtCap = mid - weights[j];
//                     day++;
//                 }
//                 else
//                 {
//                     day = -1;
//                     // not possible
//                     break;
//                 }
//             }
//         }
//         if (day != -1 && day <= days)
//         {
//             ans = mid;
//             maxiwtDay = mid;
//         }
//         else
//         {
//             miniWtDay = mid + 1;
//         }
//     }
//     return ans;
// }

// Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

// Return the kth positive integer that is missing from this array.

// n^2

// int findKthPositive(vector<int> &arr, int k)
// {
//     int c = 0;
//     for (int i = 1; i <= *max_element(arr.begin(), arr.end()); i++)
//     {
//         bool flag = false;
//         for (int j = 0; j < arr.size(); j++)
//         {
//             if (arr[j] == i)
//             {
//                 flag = true;
//                 break;
//             }
//         }
//         if (!flag)
//         {
//             c++;
//         }
//         if (k == c)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// n

// int findKthPositive(vector<int> &arr, int k)
// {
//     int cnt = 0;
//     int ac = 0;
//     int i;
//     for (i = 1; i <= *max_element(arr.begin(), arr.end()); i++)
//     {
//         if (i == arr[ac])
//         {
//             // ok its present
//             ac++;
//         }
//         else
//         {
//             // i is not present in arr
//             cnt++;
//         }
//         if (cnt == k)
//         {
//             return i;
//         }
//     }
//     int j;
//     if (cnt < k)
//     {
//         i = i + (k - 1 - cnt);
//     }
//     return i;
// }

// Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1 ... xN (0 <= xi <= 1,000,000,000).

// His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?

// LinearBased:

// bool canWePlace(vector<int> &stalls, int C, int K)
// {
//     int totalCowPlace = 1;
//     int last = stalls[0];
//     for (int i = 1; i < stalls.size(); i++)
//     {
//         if (stalls[i] - last >= K)
//         {
//             // we can place the cow
//             totalCowPlace++;
//             last = stalls[i];
//         }
//         if (totalCowPlace >= C)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int agrresiveCows(vector<int> &stalls, int C)
// {
//     sort(stalls.begin(), stalls.end());
//     int limit = stalls[stalls.size() - 1] - stalls[0];
//     for (int i = 1; i <= limit; i++)
//     {
//         if (canWePlace(stalls, C, i) == false)
//         {
//             return (i - 1);
//         }
//     }
//     return limit;
// }

// Binary Based:

// bool canWePlace(vector<int> &stalls, int C, int K)
// {
//     int totalCowPlace = 1;
//     int last = stalls[0];
//     for (int i = 1; i < stalls.size(); i++)
//     {
//         if (stalls[i] - last >= K)
//         {
//             // we can place the cow
//             totalCowPlace++;
//             last = stalls[i];
//         }
//         if (totalCowPlace == C)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int agrresiveCows(vector<int> &stalls, int C)
// {
//     sort(stalls.begin(), stalls.end());
//     int limit = stalls[stalls.size() - 1] - stalls[0];
//     int ans = limit;
//     int low = 1;
//     int high = limit + 1;
//     while (low < high)
//     {
//         int mid = (low) + (high - low) / 2;
//         if (canWePlace(stalls, C, mid))
//         {
//             ans = mid;
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid;
//         }
//     }
//     return ans;
// }

// Given an array ‘arr’of integer numbers, ‘arr[i]' represents the number of
// pages in the ‘i-th‘ book.
// There are ‘m’number of students, and the task is to allocate all the books
// to the students.
// Allocate books in such 0 way that:
// 1. Each student gets at least one book.
// 2. Each book should be allocated to only one student.
// 3. Book allocation should be in a contiguous manner.
// You have to allocate the book to ‘m‘ students such that the maximum number of pages assigned to a student is minimum.
// If the allocation of books is not possible, return -1.

// int isPossible(vector<int> &arr, int K)
// {
//     int stu = 1;
//     int sum = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (sum + arr[i] <= K)
//         {
//             sum += arr[i];
//         }
//         else
//         {
//             stu++;
//             sum = arr[i];
//         }
//     }
//     return stu;
// }

// // Linear approach

// int findPages(vector<int> &arr, int n, int m)
// {
//     if (m > n)
//         return -1;
//     int mini = *max_element(arr.begin(), arr.end());
//     int maxi = accumulate(arr.begin(), arr.end(), 0);
//     for (int i = mini; i <= maxi; i++)
//     {
//         if (isPossible(arr, i) == m)
//         {
//             return i;
//         }
//     }
//     return mini;
// }

// // Binary approach:

// int findPages(vector<int> &arr, int n, int m)
// {
//     if (m > n)
//         return -1;
//     int low = *max_element(arr.begin(), arr.end());
//     long long high = accumulate(arr.begin(), arr.end(), 0) + 1;
//     int ans = high;
//     while (low < high)
//     {
//         int mid = (low) + (high - low) / 2;
//         if (isPossible(arr, mid) == m)
//         {
//             ans = mid;
//             high = mid;
//         }
//         else if (isPossible(arr, mid) > m)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid;
//         }
//     }
//     return low;
// }

// Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.

// Return the minimized largest sum of the split.

// A subarray is a contiguous part of the array.

// int isPossible(vector<int> &nums, int tar)
// {
//     long long sum = 0;
//     int total = 1;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (sum + nums[i] > tar)
//         {
//             total++;
//             sum = nums[i];
//         }
//         else
//         {
//             sum += nums[i];
//         }
//     }
//     return total;
// }

// int splitArray(vector<int> &nums, int k)
// {
//     int low = *max_element(nums.begin(), nums.end());
//     long long high = accumulate(nums.begin(), nums.end(), 0);
//     while (low < high)
//     {
//         int mid = (low) + (high - low) / 2;
//         if (isPossible(nums, mid) == k)
//         {
//             high = mid;
//         }
//         else if (isPossible(nums, mid) > k)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid;
//         }
//     }
//     return low;
// }

// int splitArray(vector<int> &nums, int k)
// {
//     int mini = *max_element(nums.begin(), nums.end());
//     long long maxi = accumulate(nums.begin(), nums.end(), 0);
//     for (int i = mini; i <= maxi; i++)
//     {
//         if (isPossible(nums, i) == k)
//         {
//             return i;
//         }
//     }
//     return mini;
// }

//  Given an arroy/list of length ‘N’, where the
// array/list represents the boards and each
// element of the given array/list represents the
// length of each board. Some ‘K’ numbers of
// pointers are available to paint these boards.
// Consider that each unit of a board takes 1 unit
// of time to point.
// You are supposed to return the area of the
// minimum time to get thisjob done of pointing
// all the ‘N’ boards under a constraint that any
// painter will only point the continuous sections
// of boards.

// int isPossible(vector<int> &boards, int tar)
// {
//     long long sum = 0;
//     long long painters = 1;
//     for (int i = 0; i < boards.size(); i++)
//     {
//         if (sum + boards[i] <= tar)
//         {
//             sum += boards[i];
//         }
//         else
//         {
//             painters++;
//             sum = boards[i];
//         }
//     }
//     return painters;
// }

// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     int low = *max_element(boards.begin(), boards.end());
//     long long high = accumulate(boards.begin(), boards.end(), 0);
//     while (low < high)
//     {
//         int mid = (low) + (high - low) / 2;
//         if (isPossible(boards, mid) <= k)
//         {
//             high = mid;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return low;
// }

// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     int mini = *max_element(boards.begin(), boards.end());
//     long long maxi = accumulate(boards.begin(), boards.end(), 0);
//     for (int i = mini; i <= maxi; i++)
//     {
//         if (isPossible(boards, i) <= k)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// You are given a sorted array ‘arr’ of length ‘n’, which contains positive integer positions of ‘n’ gas stations on the X-axis. You are also given an integer ‘k’. You have to place ‘k’ new gas stations on the X-axis. You can place them anywhere on the non-negative side of the X-axis, even on non-integer positions. Let ‘dist’ be the maximum value of the distance between adjacent gas stations after adding k new gas stations.
// Find the minimum value of ‘dist’.
// Note: Answers within 10^-6 of the actual answer will be accepted. For example, if the actual answer is 0.65421678124, it is okay to return 0.654216. Our answer will be accepted if that is the same as the actual answer up to the 6th decimal place.

// long double minimiseMaxDistance(vector<int> &arr, int k)
// {
//     // Create a vector to keep track of how many times each segment has been divided.
//     vector<int> howMany(arr.size() - 1, 0);
//     // Loop for 'k' iterations to divide segments and adjust their lengths.
//     for (int i = 1; i <= k; i++)
//     {
//         // Initialize variables to find the segment with the maximum increase in section length.
//         long double maxSection = -1;
//         int maxInd = -1;
//         // Iterate through each segment and find the one that can be divided to maximize section length.
//         for (int j = 0; j < arr.size() - 1; j++)
//         {
//             // Calculate the difference between consecutive elements in the segment.
//             long double diff = (arr[j + 1] - arr[j]);
//             // Calculate the section length if this segment is divided one more time.
//             long double sectionLength = diff / (long double)(howMany[j] + 1);
//             // Check if dividing this segment increases the section length the most so far.
//             if (maxSection < sectionLength)
//             {
//                 maxSection = sectionLength;
//                 maxInd = j; // Record the index of the segment to divide.
//             }
//         }
//         // Increment the division count for the segment that maximizes the section length increase.
//         howMany[maxInd]++;
//     }
//     // Find the maximum section length among all segments after division iterations.
//     long double maxAns = -1;
//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         // Calculate the section length of the current segment based on the division count.
//         long double diff = (arr[i + 1] - arr[i]);
//         long double sectionLength = (diff) / (long double)(howMany[i] + 1);
//         // Update the maximum section length if the current segment has a larger section length.
//         maxAns = max(maxAns, sectionLength);
//     }
//     // Return the maximum section length achieved after all iterations.
//     return maxAns;
// }

// Linear search:

// long double minimiseMaxDistance(vector<int> &arr, int k)
// {
//     vector<int> howMany(arr.size() - 1, 0);
//     for (int i = 1; i <= k; i++)
//     {
//         long double maxSection = -1;
//         int maxInd = -1;
//         for (int j = 0; j < arr.size() - 1; j++)
//         {
//             long double diff = (arr[j + 1] - arr[j]);
//             long double sectionLength = diff / (long double)(howMany[j] + 1);
//             if (maxSection < sectionLength)
//             {
//                 maxSection = sectionLength;
//                 maxInd = j;
//             }
//         }
//         howMany[maxInd]++;
//     }
//     long double maxAns = -1;
//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         long double diff = (arr[i + 1] - arr[i]);
//         long double sectionLength = (diff) / (long double)(howMany[i] + 1);
//         maxAns = max(maxAns, sectionLength);
//     }
//     return maxAns;
// }

// OPTIMIZED APPROACH(Priority queue):

// long double minimiseMaxDistance(vector<int> &arr, int k)
// {
//     vector<int> howMany(arr.size() - 1, 0);
//     priority_queue<pair<long double, int>> pq;
//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         pq.push({arr[i + 1] - arr[i], i});
//     }
//     for (int i = 1; i <= k; i++)
//     {
//         auto tp = pq.top();
//         pq.pop();
//         int secInd = tp.second;
//         howMany[secInd]++;
//         long double inLen = arr[secInd + 1] - arr[secInd];
//         long double secLen = inLen / (long double)(howMany[secInd] + 1);
//         pq.push({secLen, secInd});
//     }
//     return pq.top().first;
// }

// long double minimiseMaxDistance(vector<int> &arr, int k)
// {
//     vector<int> count(arr.size() - 1, 0);
//     for (int i = 0; i < k; i++)
//     {
//         long double maxiAns = -1;
//         long double maxiInd = -1;
//         for (int j = 0; j < arr.size() - 1; j++)
//         {
//             long double diff =( arr[j + 1] - arr[j]);
//             long double sectionLength = diff / (long double)(count[j] + 1);
//             if (sectionLength > maxiAns)
//             {
//                 maxiInd = j;
//                 maxiAns = sectionLength;
//             }
//         }
//         count[maxiInd]++;
//     }
//     long double ans = -1;
//     for (int i = 0; i < arr.size()-1; i++)
//     {
//         long double diff =( arr[i + 1] - arr[i]);
//         long double secLen = (diff) / (long double)(count[i] + 1);
//         ans = max(ans, secLen);
//     }
//     return ans;
// }

// OPTIMIZED APPROACH(Priority queue):

// long double minimiseMaxDistance(vector<int> &arr, int k)
// {
//     vector<int> count(arr.size() - 1, 0);
//     priority_queue<pair<long double, int>> pq;
//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         pq.push({arr[i + 1] - arr[i], i});
//     }
//     for (int i = 0; i < k; i++)
//     {
//         int secInd = pq.top().second;
//         long double iniDiff = arr[secInd + 1] - arr[secInd];
//         pq.pop();
//         count[secInd]++;
//         long double newDiff = iniDiff / (long double)(count[secInd] + 1);
//         pq.push({newDiff, secInd});
//     }
//     return pq.top().first;
// }

// OPTIMIZED APPROACH(Binary search ):

// int noReq(long double dist, vector<int> &arr)
// {
//     int cnt = 0;
//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         int noInBw = ((arr[i + 1] - arr[i]) / (dist));
//         // case of exactly divisible
//         if ((arr[i + 1] - arr[i]) == (dist * noInBw))
//         {
//             noInBw--;
//         }
//         cnt += noInBw;
//     }
//     return cnt;
// }

// long double minimiseMaxDistance(vector<int> &arr, int k)
// {
//     int n = arr.size();
//     long double low = 0;
//     long double high = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         high = max(high, (long double)(arr[i + 1] - arr[i]));
//     }
//     long double diff = 1e-6;
//     long double ans = high;
//     while (high - low > diff)
//     {
//         long double mid = (low + high) / (2.0);
//         if (noReq(mid, arr) > k)
//         {
//             low = mid;
//         }
//         else
//         {
//             high = mid;
//             ans = high;
//         }
//     }
//     return ans;
// }

// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// The overall run time complexity should be O(log (m+n)).

// Brute extra space :

// double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
// {
//     int i = 0, j = 0;
//     vector<double> ans;
//     while (i < nums1.size() && j < nums2.size())
//     {
//         if (nums1[i] >= nums2[j])
//         {
//             ans.push_back(nums2[j++]);
//         }
//         else
//         {
//             ans.push_back(nums1[i++]);
//         }
//     }
//     while (i < nums1.size())
//     {
//         ans.push_back(nums1[i++]);
//     }
//     while (j < nums2.size())
//     {
//         ans.push_back(nums2[j++]);
//     }
//     if (ans.size() % 2)
//     {
//         // odd
//         return ans[ans.size() / 2];
//     }
//     else
//     {
//         return (ans[ans.size() / 2] + ans[(ans.size() / 2) + 1]) / 2;
//     }
// }

// Optimiesd NO extra space and time o(m+n):

// double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
// {
//     int i = 0, j = 0;
//     int cnt = 0;
//     vector<int> ans;
//     int n = nums1.size() + nums2.size();
//     int fel, sel;
//     int find = n / 2;
//     int sind = find - 1;
//     while (i < nums1.size() && j < nums2.size())
//     {
//         if (nums1[i] >= nums2[j])
//         {
//             if (cnt == find)
//             {
//                 fel = nums2[j];
//             }
//             if (cnt == sind)
//             {
//                 sel = nums2[j];
//             }
//             cnt++;
//             j++;
//         }
//         else
//         {
//             if (cnt == find)
//             {
//                 fel = nums1[i];
//             }
//             if (cnt == sind)
//             {
//                 sel = nums1[i];
//             }
//             cnt++;
//             i++;
//         }
//     }
//     while (i < nums1.size())
//     {
//         if (cnt == find)
//         {
//             fel = nums1[i];
//         }
//         if (cnt == sind)
//         {
//             sel = nums1[i];
//         }
//         cnt++;
//         i++;
//     }
//     while (j < nums2.size())
//     {
//         if (cnt == find)
//         {
//             fel = nums2[j];
//         }
//         if (cnt == sind)
//         {
//             sel = nums2[j];
//         }
//         cnt++;
//         j++;
//     }
//     if (n % 2 == 1)
//     {
//         return (double)fel;
//     }
//     else
//     {
//         return (double(fel + sel) / 2.0);
//     }
// }

// o(log(min(m,n)))

// double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
// {
//     int n1 = nums1.size();
//     int n2 = nums2.size();
//     // left one is short array
//     if (nums1.size() > nums2.size())
//     {
//         return findMedianSortedArrays(nums2, nums1);
//     }
//     int total = n1 + n2;
//     int left = (n1 + n2 + 1) / 2;
//     int low = 0;
//     int high = n1;
//     while (low <= high)
//     {
//         int mid1 = (low + high)/2;
//         int mid2 = left - mid1;
//         int l1 = INT_MIN, l2 = INT_MIN;
//         int r1 = INT_MAX, r2 = INT_MAX;
//         if (mid1 - 1 >= 0)
//         {
//             l1 = nums1[mid1 - 1];
//         }
//         if (mid1 < n1)
//         {
//             r1 = nums1[mid1];
//         }
//         if (mid2 - 1 >= 0)
//         {
//             l2 = nums2[mid2 - 1];
//         }
//         if (mid2 < n2)
//         {
//             r2 = nums2[mid2];
//         }
//         if (l1 <= r2 && l2 <= r1)
//         {
//             // success case
//             if (total % 2 == 0)
//             {
//                 return ((double)(max(l1, l2) + min(r1, r2))) / 2.0;
//             }
//             else
//             {
//                 return max(l1, l2);
//             }
//         }
//         else if (l1 > r2)
//         {
//             high = mid1 - 1;
//         }
//           else
//         {
//             low = mid1 + 1;
//         }
//     }
//     return 0;
// }

// You're given two sorted arrays ’arr1’and ’arr2’of
// size 'n'ond 'm'respectively and an element 'k’.
// Find the element that would be at the 'kth‘ position of
// the combined sorted array.
// Position 'k' is given according to 1 - based indexing,
// but arrays 'orrl‘ 0nd 'arrZ' are using 0 - based
// indexing.

// Naive apporach : space complexity : o(n+m)
//  time complexity :o(n+m)

// int kthElement(vector<int> &arr1, vector<int> &arr2, int n, int m, int k)
// {
//     vector<int> combined;
//     int i = 0, j = 0;
//     while (i < arr2.size() && j < arr1.size())
//     {
//         if (arr1[j] < arr2[i])
//         {
//             combined.push_back(arr1[j]);
//             j++;
//         }
//         else
//         {
//             combined.push_back(arr2[i]);
//             i++;
//         }
//     }
//     while (i < arr2.size())
//     {
//         combined.push_back(arr2[i]);
//         i++;
//     }
//     while (j < arr1.size())
//     {
//         combined.push_back(arr1[j]);
//         j++;
//     }
//     return combined[k - 1];
// }

// Space optimised : time o(m+n)
//                   space o(1) hurrah!

// int kthElement(vector<int> &arr1, vector<int> &arr2, int n, int m, int k)
// {
//     int i = 0, j = 0;
//     int counter = 0;
//     while (i < arr2.size() && j < arr1.size())
//     {
//         if (arr1[j] < arr2[i])
//         {
//             counter++;
//             if (counter == k)
//             {
//                 return arr1[j];
//             }
//             j++;
//         }
//         else
//         {
//             counter++;
//             if (counter == k)
//             {
//                 return arr2[i];
//             }
//             i++;
//         }
//     }
//     while (i < arr2.size())
//     {
//         counter++;
//         if (counter == k)
//         {
//             return arr2[i];
//         }
//         i++;
//     }
//     while (j < arr1.size())
//     {
//         counter++;
//         if (counter == k)
//         {
//             return arr1[j];
//         }
//         j++;
//     }
//     return 0;
// }

// Optimised approach:

//  int kthElement(vector<int> &nums1, vector<int> &nums2, int n1, int n2, int k)
// { 
//     if (n1 > n2)
//     {
//         return kthElement(nums2, nums1, n2, n1, k);
//     }
//     int total = n1 + n2;
//     int left = k;
//     // at 9:55 explained claerly:low condition
//     int low = max(0, k - n2);
//     int high = min(n1, k);
//     // 8:33 b22 video explained 
//     while (low <= high)
//     {
//         int mid1 = (low + high) / 2;
//         int mid2 = left - mid1;
//         int l1 = INT_MIN, l2 = INT_MIN;
//         int r1 = INT_MAX, r2 = INT_MAX;
//         if (mid1 - 1 >= 0)
//         {
//             l1 = nums1[mid1 - 1];
//         }
//         if (mid1 < n1)
//         {
//             r1 = nums1[mid1];
//         }
//         if (mid2 - 1 >= 0)
//         {
//             l2 = nums2[mid2 - 1];
//         }
//         if (mid2 < n2)
//         {
//             r2 = nums2[mid2];
//         }
//         if (l1 <= r2 && l2 <= r1)
//         {
//             // success case
//             return max(l1, l2);
//         }
//         else if (l1 > r2)
//         {
//             high = mid1 - 1;
//         }
//         else
//         {
//             low = mid1 + 1;
//         }
//     }
//     return 0;
// }

// You are given 0 2D matrix 54RR’(contoining either ‘0'
// or ‘1’) of size ’N’x 'M', where each row is in sorted
// order.
// Find the O-based index of the ?rst row with the
// maximum number of 1's.
// Note :
// If two rows have the same number of 1’s,
// return the row with a lower index.
// If no row exists where at-least one '1'
// is present, return -1.   


int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
     
}

int main()
{
    // vector<int> a = {};
    // cout << a.size();

    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int N, C;
    //     cin >> N >> C;
    //     vector<int> as;
    //     for (int i = 0; i < N; i++)
    //     {
    //         int temp;
    //         cin >> temp;
    //         as.push_back(temp);
    //     }
    //     return agrresiveCows(as, C);
    // }

    // vector<int> a = {1, 2, 3, 2, 1};
    // // vector<vector<int>> matrix = {
    // //     {1, 3}, {2, 6}, {8, 10}, {15, 18}};
    // cout << ((ceil((double)11 / 4)));

    // for (auto it : matrix)
    // {
    //     for (auto bt : it)
    //     {
    //         cout << bt << " ";
    //     }
    //     cout << endl;
    // // }
    // cout << (1 ^ 2 ^ 3 ^ 4 ^ 5 ^ 6);

    return 0;
}

// 20 12
// 7 12 11 19 0 7 18 6 9 9 15 9 12 13 20 8 15 1 11 17
// 25
