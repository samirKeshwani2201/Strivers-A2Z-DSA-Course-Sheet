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
int findKthPositive(vector<int> &arr, int k)
{
    int c = 0;
    for (int i = 1; i <= *max_element(arr.begin(), arr.end()); i++)
    {
        bool flag = false;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] == i)
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            c++;
        }
        if (k == c)
        {
            return i;
        }
    }
    return -1;
}


// n

int findKthPositive(vector<int> &arr, int k)
{
    int cnt = 0;
    int ac = 0;
    int i;
    for (i = 1; i <= *max_element(arr.begin(), arr.end()); i++)
    {
        if (i == arr[ac])
        {
            // ok its present
            ac++;
        }
        else
        {
            // i is not present in arr
            cnt++;
        }
        if (cnt == k)
        {
            return i;
        }
    
    }
    int j;
    if (cnt < k)
    { 
        i = i + (k - 1-cnt);
    }
    return i;
}



int main()
{
    vector<int> a = {1, 2, 3, 2, 1};
    // vector<vector<int>> matrix = {
    //     {1, 3}, {2, 6}, {8, 10}, {15, 18}};
    cout << ((ceil((double)11 / 4)));

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
