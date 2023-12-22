#include <bits/stdc++.h>
using namespace std;

// Stack Using Array :

// class Stack
// {
// public:
//     int n;
//     vector<int> stk;
//     int topp = -1;
//     Stack(int capacity)
//     {
//         // Write your code here.
//         n = capacity;
//         stk.resize(n);
//     }
//     void push(int num)
//     {
//         if (!isFull())
//         {
//             stk[++topp] = num;
//         }
//     }
//     int pop()
//     {
//         if (isEmpty())
//         {
//             return -1;
//         }
//         else
//         {
//             return stk[topp--];
//         }
//     }
//     int top()
//     {
//         if (!isEmpty())
//         {
//             return stk[topp];
//         }
//         else
//         {
//             return -1;
//         }
//     }
//     int isEmpty()
//     {
//         if (topp < 0)
//         {
//             return 1;
//         }
//         return 0;
//     }
//     int isFull()
//     {
//         if (topp == n - 1)
//         {
//             return 1;
//         }
//         return 0;
//     }
// };

// Queue using array :

// class Queue
// {

//     int front, rear;
//     vector<int> arr;

// public:
//     Queue()
//     {
//         front = 0;
//         rear = 0;
//         arr.resize(100001);
//     }
//     // Enqueue (add) element 'e' at the end of the queue.
//     void enqueue(int e)
//     {
//         // Write your code here.
//     }
//     // Dequeue (retrieve) the element from the front of the queue.
//     int dequeue()
//     {
//         // Write your code here.
//     }
// };

//  Implement Stack using 1 Queue

// push 1 -> [1]       and no rotate
// push 2 -> [2,1]     and rotate 1 time : -> [1,2]
// push 3 -> [2,1,3]   and rotate 2 times: -> [1,3,2] -> [3,2,1]
// push 4 -> [3,2,1,4] and rotate 3 times: -> [2,1,4,3] -> [1,4,3,2] -> [4,3,2,1]
// pop    -> [3,2,1]   and return 4
// pop    -> [2,1]     and return 3
// push 5 -> [2,1,5]   and rotate 2 times: -> [1,5,2] -> [5,2,1]
// pop    -> [2,1]     and return 5

// class MyStack
// {
// public:
//     queue<int> q1;
//     MyStack()
//     {
//     }
//     void push(int x)
//     {
//         q1.push(x);
//         int sz = q1.size() - 1;
//         while (sz--)
//         {
//             q1.push(q1.front());
//             q1.pop();
//         }
//     }
//     int pop()
//     {
//         if (q1.size())
//         {
//             int e = q1.front();
//             q1.pop();
//             return e;
//         }
//         return -1;
//     }
//     int top()
//     {
//         if (q1.size())
//         {
//             return q1.front();
//         }
//         return -1;
//     }
//     bool empty()
//     {
//         if (q1.empty())
//         {
//             return true;
//         }
//         return false;
//     }
// };

//  Implement Stack using 2 Queues

// class MyStack
// {
// public:
//     queue<int> q1, q2;
//     MyStack()
//     {
//     }
//     void push(int x)
//     {
//         q2.push(x);
//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         swap(q1, q2);
//     }
//     int pop()
//     {
//         int e = q1.front();
//         q1.pop();
//         return e;
//     }
//     int top()
//     {
//         return q1.front();
//     }
//     bool empty()
//     {
//         return q1.empty();
//     }
// };

// other way
// push all from q1 to q2 ,then add new to q1 and then add all back to q1 from q2

// class MyStack
// {
// public:
//     queue<int> q1, q2;
//     MyStack()
//     {
//     }
//     void push(int x)
//     {
//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         q1.push(x);
//         while (!q2.empty())
//         {
//             q1.push(q2.front()), q2.pop();
//         }
//     }
//     int pop()
//     {
//         int e = q1.front();
//         q1.pop();
//         return e;
//     }
//     int top()
//     {
//         return q1.front();
//     }
//     bool empty()
//     {
//         return q1.empty();
//     }
// };

// Queue using stack:

// push takes  o(2N) time

// class MyQueue
// {
// public:
//     stack<int> s1, s2;
//     MyQueue()
//     {
//     }
//     void push(int x)
//     {
//         while (!s1.empty())
//         {
//             s2.push(s1.top());
//             s1.pop();
//         }
//         s1.push(x);
//         while (!s2.empty())
//         {
//             s1.push(s2.top());
//             s2.pop();
//         }
//     }
//     int pop()
//     {
//         int e = s1.top();
//         s1.pop();
//         return e;
//     }
//     int peek()
//     {
//         return s1.top();
//     }
//     bool empty()
//     {
//         return s1.empty();
//     }
// };

// push takes  o(1) time

// class MyQueue
// {
// public:
//     stack<int> s1, s2;
//     MyQueue()
//     {
//     }
//     void push(int x)
//     {
//         s1.push(x);
//     }
//     int pop()
//     {
//         if (s2.empty())
//         {
//             while (!s1.empty())
//             {
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }
//         int r = s2.top();
//         s2.pop();
//         return r;
//     }
//     int peek()
//     {
//         if (s2.empty())
//         {
//             while (!s1.empty())
//             {
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }
//         int r = s2.top();
//         return r;
//     }
//     bool empty()
//     {
//         return (s2.empty() && s1.empty() );
//     }
// };

// Implement Stack With Linked List

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node()
//     {
//         this->data = 0;
//         next = NULL;
//     }
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
//     Node(int data, Node *next)
//     {
//         this->data = data;
//         this->next = next;
//     }
// };

// Not gone in deep some what tired so do it when revisisng

// class Stack
// {
//     Node *ll;
//     Node *top;
// public:
//     Stack()
//     {
//         top = NULL;
//     }
//     int getSize()
//     {
//         int sz = 0;
//         Node *temp = top;
//         while (temp != NULL)
//         {
//             sz++;
//             temp = temp->next;
//         }
//         return sz;
//     }
//     bool isEmpty()
//     {
//         if (top == NULL)
//         {
//             return true;
//         }
//         return false;
//     }
//     void push(int data)
//     {
//         Node *temp = new Node(data);
//         if (top)
//         {
//             Node *add = top;
//             temp = top;
//             temp->next = top;
//         }
//         else
//         {
//             top = temp;
//             top->next = NULL;
//         }
//     }
//     void pop()
//     {
//         if (top)
//             top = top->next;
//     }
//     int getTop()
//     {
//         if (top)
//         {
//             return top->data;
//         }
//         return -1;
//     }
// };

// Implement Queue Using Linked List

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node() : data(0), next(nullptr) {}
//     Node(int x) : data(x), next(nullptr) {}
//     Node(int x, Node *next) : data(x), next(next) {}
// };
// struct Queue
// {
//     Node *front;
//     Node *rear;
//     void push(int);
//     int pop();
//     Queue()
//     {
//         front = rear = NULL;
//     }
// };
// void Queue::push(int x)
// {
//     Node *tm = new Node(x);
//     // tm->next = rear;
//     if (front)
//     {
//         rear->next = tm;
//         rear = tm;
//     }
//     else
//     {
//         front = tm;
//         rear = tm;
//     }
// }
// int Queue::pop()
// {
//     if (front)
//     {
//         int d = front->data;
//         front = front->next;
//         return d;
//     }
//     else
//     {
//         return -1;
//     }
// }

// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type
// too much edgecase so many wrong submission sad :(

// bool isValid(string s)
// {
//     if (s.size() == 1)
//         return false;
//     stack<char> stk;
//     for (auto it : s)
//     {
//         if (it == '(' || it == '{' || it == '[')
//         {
//             stk.push(it);
//         }
//         else
//         {
//             if ((it == '}' && (stk.empty() || stk.top() != '{')) || (it == ']' && (stk.empty() || stk.top() != '[')) || (it == ')' && (stk.empty() || stk.top() != '(')))
//             {
//                 stk.pop();
//                 // ok case;
//                 return false;
//             }
//             stk.pop();
//         }
//     }
//     if (!stk.empty())
//     {
//         return false;
//     }
//     return true;
// }

// short and elegant :

// bool isValid(string s)
// {
//     stack<char> stk;
//     for (auto it : s)
//     {
//         if (it == '(' || it == '{' || it == '[')
//         {
//             stk.push(it);
//         }
//         else
//         {
//             if (stk.empty())
//             {
//                 return false;
//             }
//             else
//             {
//                 if ((it == '}' && (stk.top() != '{')) || (it == ']' && (stk.top() != '[')) || (it == ')' && (stk.top() != '(')))
//                 {
//                     return false;
//                 }
//                 stk.pop();
//             }
//         }
//     }
//     return stk.empty();
// }

// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

// Implement the MinStack class:

// MinStack() initializes the stack object.
// void push(int val) pushes the element val onto the stack.
// void pop() removes the element on the top of the stack.
// int top() gets the top element of the stack.
// int getMin() retrieves the minimum element in the stack.
// You must implement a solution with O(1) time complexity for each function.

// Using pair :

// class MinStack
// {
// public:
//     stack<pair<int, int>> stk;
//     MinStack()
//     {
//     }
//     void push(int val)
//     {
//         if (stk.empty())
//         {
//             stk.push({val, val});
//         }
//         else
//         {
//             stk.push({val, min(val, stk.top().second)});
//         }
//     }
//     void pop()
//     {
//         stk.pop();
//     }
//     int top()
//     {
//         return stk.top().first;
//     }
//     int getMin()
//     {
//         return stk.top().second;
//     }
// };

// Using 2 stacks :

// class MinStack
// {
// private:
//     stack<int> s1;
//     stack<int> s2;
// public:
//     void push(int x)
//     {
//         s1.push(x);
//         // carefull less than equal to comes
//         if (s2.empty() || x <= getMin())
//             s2.push(x);
//     }
//     void pop()
//     {
//         if (s1.top() == getMin())
//             s2.pop();
//         s1.pop();
//     }
//     int top()
//     {
//         return s1.top();
//     }
//     int getMin()
//     {
//         return s2.top();
//     }
// };

// Most optimised sc:o(n) and tc o(1)

// class MinStack
// {
// public:
//     long long mini;
//     stack<long long> stk;
//     MinStack()
//     {
//         mini = INT_MAX;
//     }
//     void push(int val)
//     {
//      long long  value =  val;
//         if (stk.empty())
//         {
//             stk.push(value);
//             mini = value;
//         }
//         else
//         {
//             if (mini > value)
//             {
//                 stk.push(2 * value * 1LL - mini);
//                 mini = value;
//             }
//             else
//             {
//                 stk.push(value);
//             }
//         }
//     }
//     void pop()
//     {
//         if (stk.top() < mini)
//         {
//             // its modified value so pop it and update the min value
//             mini = 2 * mini - stk.top();
//         }
//         stk.pop();
//     }
//     int top()
//     {
//         if (stk.top() < mini)
//         {
//             // its updated top so we want real top then
//             return mini;
//         }
//         return stk.top();
//     }
//     int getMin()
//     {
//         return mini;
//     }
// };

// class MinStack
// {
// public:
//     stack<int> stk;
//     int miniEL = INT_MAX;
//     MinStack()
//     {
//     }
//     void push(int val)
//     {
//         if (val <= miniEL)
//         {
//             stk.push(miniEL);
//             miniEL = val;
//         }
//         stk.push(val);
//     }
//     void pop()
//     {
//         if (stk.top() == miniEL)
//         {
//             stk.pop();
//             miniEL = stk.top();
//         }
//         stk.pop();
//     }
//     int top()
//     {
//         return stk.top();
//     }
//     int getMin()
//     {
//         return miniEL;
//     }
// };

// string infixToPostfix(string exp)
// {
//     stack<char> operands;
//     map<char, int> priority;
//     priority['^'] = 3;
//     priority['*'] = 2;
//     priority['/'] = 2;
//     priority['+'] = 1;
//     priority['-'] = 1;
//     priority[')'] = -1;
//     priority['('] = -1;
//     string ans = "";
//     for (auto it : exp)
//     {
//         if ((it >= '1' && it <= '9') || (it >= 'a' && it <= 'z') || (it >= 'A' && it <= 'Z'))
//         {
//             ans += it;
//         }
//         else if (it == '(')
//         {
//             operands.push('(');
//         }
//         else if (it == ')')
//         {
//             while (operands.top() != '(')
//             {
//                 ans += operands.top();
//                 operands.pop();
//             }
//             operands.pop();
//         }
//         else
//         {
//             while (!operands.empty() && priority[operands.top()] >= priority[it])
//             {
//                 ans += operands.top();
//                 operands.pop();
//             }
//             operands.push(it);
//         }
//     }
//     while (!operands.empty())
//     {
//         ans += operands.top();
//         operands.pop();
//     }
//     cout << ans;
//     return ans;
// }

// string prefixToInfixConversion(string &s)
// {
//     stack<string> stk;
//     string ans = "";
//     int len = s.size();
//     for (int i = len - 1; i >= 0; i--)
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             stk.push(string(1, s[i]));
//         }
//         else
//         {
//             string op1 = stk.top();
//             stk.pop();
//             string op2 = stk.top();
//             stk.pop();
//             string temp = "(" + op1 + s[i] + op2 + ")";
//             stk.push(temp);
//         }
//     }
//     cout << stk.top();
//     return stk.top();
// }

// string preToPost(string &s)
// {
//     stack<string> stk;
//     string ans = "";
//     int len = s.size();
//     for (int i = len - 1; i >= 0; i--)
//     {
//         if (s[i] >= 'A' && s[i] <= 'Z')
//         {
//             stk.push(string(1, s[i]));
//         }
//         else
//         {
//             string op1 = stk.top();
//             stk.pop();
//             string op2 = stk.top();
//             stk.pop();
//             string temp = op1 + op2 + s[i];
//             stk.push(temp);
//         }
//     }
//     return stk.top();
// }

// string postfixToPrefix(string &s)
// {
//     stack<string> stk;
//     string ans = "";
//     for (auto it : s)
//     {
//         if (it >= 'a' && it <= 'z')
//         {
//             stk.push(string(1, it));
//         }
//         else
//         {
//             string op1 = stk.top();
//             stk.pop();
//             string op2 = stk.top();
//             stk.pop();
//             string temp = it + op2 + op1;
//             stk.push(temp);
//         }
//     }
//     return stk.top();
// }

// string postToInfix(string s)
// {
//     stack<string> stk;
//     string ans = "";
//     for (auto it : s)
//     {
//         if ((it >= 'a' && it <= 'z') || (it >= 'A' && it <= 'Z'))
//         {
//             stk.push(string(1, it));
//         }
//         else
//         {
//             string op1 = stk.top();
//             stk.pop();
//             string op2 = stk.top();
//             stk.pop();
//             string temp = "(" + op2 + it + op1 + ")";
//             stk.push(temp);
//         }
//     }
//     return stk.top();
// }

// for infix to prefix the infixToPostfix has slight change of equaltiy :

// string infixToPostfix(string exp)
// {
//     stack<char> operands;
//     map<char, int> priority;
//     priority['^'] = 3;
//     priority['*'] = 2;
//     priority['/'] = 2;
//     priority['+'] = 1;
//     priority['-'] = 1;
//     priority[')'] = -1;
//     priority['('] = -1;
//     string ans = "";
//     for (auto it : exp)
//     {
//         if ((it >= '1' && it <= '9') || (it >= 'a' && it <= 'z') || (it >= 'A' && it <= 'Z'))
//         {
//             ans += it;
//         }
//         else if (it == '(')
//         {
//             operands.push('(');
//         }
//         else if (it == ')')
//         {
//             while (operands.top() != '(')
//             {
//                 ans += operands.top();
//                 operands.pop();
//             }
//             operands.pop();
//         }
//         else
//         {
//             if (it == '^')
//             {
//                 while (!operands.empty() && priority[operands.top()] >= priority[it])
//                 {
//                     ans += operands.top();
//                     operands.pop();
//                 }
//             }
//             else
//             {
//                 while (!operands.empty() && priority[operands.top()] > priority[it])
//                 {
//                     ans += operands.top();
//                     operands.pop();
//                 }
//             }
//             operands.push(it);
//         }
//     }
//     while (!operands.empty())
//     {
//         ans += operands.top();
//         operands.pop();
//     }
//     cout << ans;
//     return ans;
// }

// string infixToPrefix(string infix)
// {
//     reverse(infix.begin(), infix.end());
//     for (int i = 0; i < infix.size(); i++)
//     {
//         if (infix[i] == ')')
//         {
//             infix[i] = '(';
//         }
//         else if (infix[i] == ')')
//         {
//             infix[i] = ')';
//         }
//     }
//     infix = infixToPostfix(infix);
//     reverse(infix.begin(), infix.end());
//     return infix;
// }

// The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

// You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

// For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

// Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.

// brute force

// vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
// {
//     vector<int> ans(nums1.size(), -1);
//     for (int i = 0; i < nums1.size(); i++)
//     {
//         for (int j = 0; j < nums2.size(); j++)
//         {
//             if (nums1[i] == nums2[j])
//             {
//                 for (int k = j; k < nums2.size(); k++)
//                 {
//                     if (nums2[j] < nums2[k])
//                     {
//                         ans[i] = nums2[k];
//                         break;
//                     }
//                 }
//                 break;
//             }
//         }
//     }
//     return ans;
// }

// <timepass>

// vector<int> nexxt(vector<int> nums1)
// {
//     vector<int> res(nums1.size(), -1);
//     stack<int> st;
//     for (int i = nums1.size() - 1; i >= 0; i--)
//     {
//         while (!st.empty() && nums1[i] >= st.top())
//         {
//             st.pop();
//         }
//         if (!st.empty())
//             res[i] = st.top();
//         st.push(nums1[i]);
//     }
//     return res;
// }

// vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
// {
//     vector<int> res;
//     res = nexxt(nums2);
//     vector<int> ans;
//     for (int i = 0; i < nums1.size(); i++)
//     {
//         for (int j = 0; j <timepass nums2.size(); j++)
//         {
//             if (nums1[i] == nums2[j])
//             {
//                 ans.push_back(res[j]);
//                 break;
//             }
//         }
//     }
//     return ans;
// }

// </timepass>

// using map and stack:

// sc:o(n+m)
// tc n+m

// non circular

// vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
// {
//     unordered_map<int, int> mp;
//     vector<int> ans;
//     stack<int> s;
//     for (int i = nums2.size() - 1; i >= 0; i--)
//     {
//         if (s.empty())
//         {
//             mp[nums2[i]] = -1;
//         }
//         else if (!s.empty() && s.top() > nums2[i])
//         {
//             mp[nums2[i]] = s.top();
//         }
//         else if (!s.empty() && s.top() <= nums2[i])
//         {
//             while (!s.empty() && s.top() <= nums2[i])
//             {
//                 s.pop();
//             }
//             if (s.empty())
//             {
//                 mp[nums2[i]] = -1;
//             }
//             else
//             {
//                 mp[nums2[i]] = s.top();
//             }
//         }
//         s.push(nums2[i]);
//     }
//     for (auto it : nums1)
//     {
//         ans.push_back(mp[it]);
//     }
//     return ans;
// }

// ciruclar :
// consider left side also for nge :

// Given a circular integer array nums (i.e., the next element of nums[nums.length - 1] is nums[0]), return the next greater number for every element in nums.

// The next greater number of a number x is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn't exist, return -1 for this number.

// vector<int> nextGreaterElements(vector<int> &nums)
// {
//     stack<int> s;
//     vector<int> ans(nums.size(), -1);
//     int n = nums.size();
//     for (int i = 2 * n - 1; i >= 0; i--)
//     {
//         while (!s.empty() && s.top() <= nums[i % n])
//         {
//             s.pop();
//         }
//         if (i < n)
//         {
//             if (!s.empty())
//             {
//                 ans[i] = s.top();
//             }
//         }
//         s.push(nums[i % n]);
//     }
//     return ans;
// }

// tc:o(n)

// vector<int> nextGreaterElements(vector<int> &nums)
// {
//     stack<int> s;
//     vector<int> ans;
//     vector<int> res(nums.size(), -1);
//     for (int i = nums.size() - 2; i >= 0; i--)
//     {
//         while (!s.empty() && s.top() <= nums[i])
//         {
//             s.pop();
//         }
//         s.push(nums[i]);
//     }
//     // now regular kaam
//     for (int i = nums.size() - 1; i >= 0; i--)
//     {
//         while (!s.empty() && s.top() <= nums[i])
//         {
//             s.pop();
//         }
//         if (!s.empty())
//         {
//             res[i] = s.top();
//         }
//         s.push(nums[i]);
//     }
//     return res;
// }

// Next Smaller Element

// bruteforce

// void immediateSmaller(vector<int> &a)
// {
//     for (int i = 0; i < a.size() - 1; i++)
//     {
//         if (a[i] > a[i + 1])
//         {
//             a[i] = a[i + 1];
//         }
//         else
//         {
//             a[i] = -1;
//         }
//     }
//     a[a.size() - 1] = -1;
// }

// using stack:

// void immediateSmaller(vector<int> &a)
// {
//     stack<int> s;
//     for (int i = a.size() - 1; i >= 0; i--)
//     {
//         if (!s.empty() && s.top() < a[i])
//         {
//             int tem = a[i];
//             a[i] = s.top();
//             s.pop();
//             s.push(tem);
//         }
//         else
//         {
//             s.push(a[i]);
//             a[i] = -1;
//         }
//     }
// }

// Given an array, find the nearest smaller element G[i] for every element A[i] in the array such that the element has an index smaller than i.

// More formally,

//     G[i] for an element A[i] = an element A[j] such that
//     j is maximum possible AND
//     j < i AND
//     A[j] < A[i]
// Elements for which no smaller element exist, consider next smaller element as -1.

// its like nearest smallest to left :)

// https://www.interviewbit.com/problems/nearest-smaller-element/

// vector<int> Solution::prevSmaller(vector<int> &A)
// {
//     stack<int> s;
//     vector<int> len1(A.size(), -1);
//     for (int i = 0; i < A.size(); i++)
//     {
//         while (!s.empty() && s.top() >= A[i])
//         {
//             s.pop();
//         }
//         if (!s.empty())
//         {
//             len1[i] = s.top();
//         }
//         s.push(A[i]);
//     }
//     return len1;
// }

// Count Of Greater Elements To The Right

// You are given an array ’arr’ of length 'N'.
// You ore given ’Q’queries, and for each query, you ore given on index(O—bosed indexing).
// Answer to each query is the number of the strictly greoter elements to the right
// of the given index element.
// You must return on array ’answer'of length ’N’, where ‘answer[i]' is the answer to the ‘ith’ query.

// Brute force :
// tc :nq
// sc:q

// vector<int> countGreater(vector<int> &arr, vector<int> &query)
// {
//     vector<int> ans(query.size());
//     int i = 0;
//     for (int i = 0; i < query.size(); i++)
//     {
//         int cnt = 0;
//         for (int j = query[i] + 1; j < arr.size(); j++)
//         {
//             if (arr[query[i]]  < arr[j])
//             {
//                 cnt++;
//             }
//         }
//         ans[i] = cnt;
//     }
//     return ans;
// }

// optimised approach:merge sort :tc  nlogn

// void merge(vector<pair<int, int>> &tempAns, vector<int> &nge, int low, int mid, int high)
// {
//     vector<pair<int, int>> a;
//     vector<pair<int, int>> b;
//     int n1 = mid - low + 1;
//     int n2 = high - mid;
//     for (int i = 0; i < n1; i++)
//     {
//         a.push_back(tempAns[i + low]);
//     }
//     for (int i = 0; i < n2; i++)
//     {
//         b.push_back(tempAns[i + mid + 1]);
//     }
//     int i = 0, j = 0;
//     int k = low;
//     while (i < n1 && j < n2)
//     {
//         if (a[i].first < b[j].first)
//         {
//             nge[a[i].second] += (n2 - j);
//             tempAns[k] = a[i];
//             k++;
//             i++;
//         }
//         else
//         {
//             tempAns[k] = b[j];
//             j++;
//             k++;
//         }
//     }
//     while (i < n1)
//     {
//         tempAns[k] = a[i];
//         k++;
//         i++;
//     }
//     while (j < n2)
//     {
//         tempAns[k] = b[j];
//         j++;
//         k++;
//     }
// }

// void mergerSort(vector<pair<int, int>> &tempAns, vector<int> &nge, int low, int high)
// {
//     int mid;
//     if (low < high)
//     {
//         mid = low + (high - low) / 2;
//         mergerSort(tempAns, nge, low, mid);
//         mergerSort(tempAns, nge, mid + 1, high);
//         merge(tempAns, nge, low, mid, high);
//     }
// }

// vector<int> countGreater(vector<int> &arr, vector<int> &query)
// {
//     vector<pair<int, int>> tempAns;
//     vector<int> ans;
//     vector<int> nge(arr.size(), 0);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         tempAns.push_back({arr[i], i});
//     }
//     mergerSort(tempAns, nge, 0, arr.size() - 1);
//     for (auto it : query)
//     {
//         ans.push_back(nge[it]);
//     }
//     return ans;
// }

// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

// brute force :
// tc n2
// sc: constant

// int trap(vector<int> &height)
// {
//     int ans = 0;
//     for (int i =1; i < height.size()-1; i++)
//     {
//         int maxEleL =  height[i];
//         int maxEleR =  height[i];
//         for (int j = 0; j < i; j++)
//         {
//             maxEleL = max(maxEleL, height[j]);
//         }
//         for (int j = i + 1; j < height.size() ; j++)
//         {
//             maxEleR = max(maxEleR, height[j]);
//         }
//         int maxEle = min(maxEleL, maxEleR);
//         ans += (maxEle - height[i]);
//     }
//     return ans;
// }

// sc:2n
// tc:3n

// int trap(vector<int> &height)
// {
//     vector<int> lmax(height.size());
//     vector<int> rmax(height.size());
//     int lma = INT_MIN;
//     int rma = INT_MIN;
//     for (int i = 0; i < height.size(); i++)
//     {
//         lmax[i] = lma = max(lma, height[i]);
//     }
//     for (int i = height.size() - 1; i >= 0; i--)
//     {
//         rmax[i] = rma = max(rma, height[i]);
//     }
//     int water = 0;
//     for (int i = 1; i < height.size() - 1; i++)
//     {
//         water += min(lmax[i], rmax[i]) - height[i];
//     }
//     return water;
// }

// int trap(vector<int> &height)
// {
//     vector<int> maxl(height.size());
//     vector<int> maxr(height.size());
//     maxl[0] = height[0];
//     for (int i = 1; i < height.size(); i++)
//     {
//         maxl[i] = max(maxl[i - 1], height[i]);
//     }
//     maxr[height.size() - 1] = height[height.size() - 1];
//     for (int i = height.size() - 2; i >= 0; i--)
//     {
//         maxr[i] = max(maxr[i + 1], height[i]);
//     }
//     int water = 0;
//     for (int i = 0; i < height.size(); i++)
//     {
//         water += min(maxl[i], maxr[i]) - height[i];
//     }
//     return water;
// }

// using stack:
// https://www.youtube.com/watch?v=EdR3V5DBgyo

// tc :n
// sc:n

// int trap(vector<int> &height)
// {
//     stack<int> s;
//     int water = 0;
//     for (int i = 0; i < height.size(); i++)
//     {
//         while(!s.empty() && height[s.top()] < height[i])
//         {
//             int top = s.top();
//             s.pop();
//             if (s.empty())
//             {
//                 break;
//             }
//             int dis = i - s.top() - 1;
//             water += dis * (min(height[i], height[s.top()]) - height[top]);
//         }
//         s.push(i);
//     }
//     return water;
// }

// most optimised:2 pointer approach
// tc:n
// sc : constant

// int trap(vector<int> &height)
// {
//     int maxL = 0;
//     int maxR = 0;
//     int i = 0, j = height.size() - 1;
//     int water = 0;
//     while (i < j)
//     {
//         if(height[i] < height[j])
//         {
//             maxL = max(maxL, height[i]);
//             water += maxL - height[i];
//             i++;
//         }
//         else
//         {
//             maxR = max(maxR, height[j]);
//             water += maxR - height[j];
//             j--;
//         }
//     }
//     return water;
// }

// Given an array of integers arr, find the sum of min(b), where b ranges over every (contiguous) subarray of arr. Since the answer may be large, return the answer modulo 109 + 7.

// brute force
// tc:n2
// sc:constant
// int sumSubarrayMins(vector<int> &arr)
// {
//     int ans = 0;
//     int64_t mod = 1000000007;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int mini = arr[i];
//         for (int j = i; j < arr.size(); j++)
//         {
//             mini = min(mini, arr[j]);
//             ans = (ans + mini) % mod;
//         }
//     }
//     return ans;
// }

// tc:3n
// sc:3n

// int sumSubarrayMins(vector<int> &arr)
// {
//     int64_t MOD = 1000000007;
//     vector<int> nle(arr.size(), arr.size());
//     vector<int> ple(arr.size(), -1);
//     stack<int> s;
//     int ans = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         while (!s.empty() && arr[s.top()] > arr[i])
//         {
//             s.pop();
//         }
//         if (!s.empty())
//             ple[i] = i - s.top();
//         else
//         {
//             ple[i] = i + 1;
//         }
//         s.push(i);
//     }
//     while (s.size())
//     {
//         s.pop();
//     }
//     for (int i = arr.size() - 1; i >= 0; i--)
//     {
//         while (!s.empty() && arr[s.top()] >= arr[i])
//         {
//             s.pop();
//         }
//         if (s.size())
//         {
//             nle[i] = s.top() - i;
//         }
//         else
//         {
//             nle[i] = arr.size() - i;
//         }
//         s.push(i);
//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         long long p = (nle[i]) * (ple[i]) % MOD;
//         p = (p * arr[i]) % MOD;
//         ans = (ans + p) % MOD;
//     }
//     return ans;
// }
// gold mine ↓
// When in_stk_p is empty, which means there is no previous less element for A[i], in this case, we set left[i] = i+1 by default.
// For example [7 8 4 3], there is no PLE for element 4, so left[2] = 2+1 =3.
// How many subarrays with 4(A[2]) being its minimum value?
// It's left[2]*right[2]=3*1.
// So the default value i+1 for left[i] and the default value n-i for right[i] are for counting the subarrays conveniently.

// We are given an array asteroids of integers representing asteroids in a row.

// For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.

// Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are the same size, both will explode. Two asteroids moving in the same direction will never meet.

// tuke se sahi padgaya par bahot khush hu ,not readable i know :((

// vector<int> asteroidCollision(vector<int> &asteroids)
// {
//     stack<int> s;
//     for (int i = 0; i < asteroids.size(); i++)
//     {
//         while (i < asteroids.size() && !s.empty() && s.top() * asteroids[i] < 0 && asteroids[i] < 0)
//         {
//             // collision happens:
//             if (abs(s.top()) < abs(asteroids[i]))
//             {
//                 s.pop();
//             }
//             else if (abs(s.top()) == abs(asteroids[i]))
//             {
//                 i++;
//                 s.pop();
//             }
//             else
//             {
//                 i++;
//             }
//         }
//         if (i < asteroids.size())
//             s.push(asteroids[i]);
//     }
//     vector<int> ans;
//     while (s.size())
//     {
//         ans.push_back(s.top());
//         s.pop();
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }

// vector<int> asteroidCollision(vector<int> &asteroids)
// {
//     stack<int> s;
//     for (int i = 0; i < asteroids.size(); i++)
//     {
//         if (s.empty() || (s.top() < 0 && asteroids[i] > 0) || s.top() * asteroids[i] > 0)
//         {
//             s.push(asteroids[i]);
//         }
//         else
//         {
//             while (!s.empty() && s.top() > 0 && s.top() < abs(asteroids[i]))
//             {
//                 s.pop();
//             }
//             if (s.empty() || s.top() < 0)
//             {
//                 s.push(asteroids[i]);
//             }
//             else if (s.top() == abs(asteroids[i]))
//             {
//                 s.pop();
//             }
//         }
//     }
//     vector<int> ans(s.size());
//     int j = s.size() - 1;
//     while (s.size())
//     {
//         ans[j--] = s.top();
//         s.pop();
//     }
//     return ans;
// }

// You are given an integer array nums. The range of a subarray of nums is the difference between the largest and smallest element in the subarray.

// Return the sum of all subarray ranges of nums.

// A subarray is a contiguous non-empty sequence of elements within an array

// brute force

// long long subArrayRanges(vector<int> &nums)
// {
//     long long int ans = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         int maxi = nums[i];
//         int mini = nums[i];
//         for (int j = i; j < nums.size(); j++)
//         {
//             maxi = max(nums[j], maxi);
//             mini = min(nums[j], mini);
//             ans += (maxi - mini);
//         }
//     }
//     return ans;
// }

// my code :

// long long subArrayRanges(vector<int> &nums)
// {
//     long long ans = 0;
//     stack<int> s;
//     int n = nums.size();
//     vector<int> maxPrev(n, -1), minPrev(n, -1), maxNext(n, n), minNext(n, n);
//     for (int i = 0; i < nums.size(); i++)
//     {
//         while (!s.empty() && nums[s.top()] >= nums[i])
//         {
//             s.pop();
//         }
//         if (!s.empty())
//             minPrev[i] = s.top();
//         s.push(i);
//     }
//     while (!s.empty())
//     {
//         s.pop();
//     }
//     for (int i = n - 1; i >= 0; i--)
//     {
//         while (!s.empty() && nums[s.top()] > nums[i])
//         {
//             s.pop();
//         }
//         if (!s.empty())
//         {
//             minNext[i] = s.top();
//         }
//         s.push(i);
//     }
//     while (!s.empty())
//     {
//         s.pop();
//     }
//     for (int i = 0; i < nums.size(); i++)
//     {
//         while (!s.empty() && nums[i] >= nums[s.top()])
//         {
//             s.pop();
//         }
//         if (!s.empty())
//         {
//             maxPrev[i] = s.top() ;
//         }
//         s.push(i);
//     }
//     while (!s.empty())
//     {
//         s.pop();
//     }
//     for (int i = n - 1; i >= 0; i--)
//     {
//         while (!s.empty() && nums[i] > nums[s.top()])
//         {
//             s.pop();
//         }
//         if (!s.empty())
//         {
//             maxNext[i] = s.top();
//         }
//         s.push(i);
//     }
//     for (int i = 0; i < nums.size(); i++)
//     {
//         ans += (((i-maxPrev[i]) * 1LL*(maxNext[i]-i)) - ((i-minPrev[i] )* 1LL*(minNext[i]-i))) * nums[i];
//     }
//     return ans;
// }

// Given string num representing a non-negative integer num, and an integer k, return the smallest possible integer after removing k digits from num.
// difficult for handling different condition when i done by self :

// string removeKdigits(string num, int k)
// {
//     int n = num.size();
//     if (k >= n)
//     {
//         return "0";
//     }
//     stack<int> s;
//     int kt = k;
//     for (int i = 0; i < num.size(); i++)
//     {
//         while (!s.empty() && s.top() > num[i] && kt != 0)
//         {
//             s.pop();
//             kt--;
//         }
//         s.push(num[i]);
//     }
//     while (!s.empty() && kt != 0)
//     {
//         s.pop();
//         kt--;
//     }
//     string ans = "";
//     vector<int> t;
//     while (s.size())
//     {
//         t.push_back(s.top());
//         s.pop();
//     }
//     reverse(t.begin(), t.end());
//     while (t[0] - '0' == 0)
//     {
//         if (t.size() == 1)
//         {
//             return "0";
//         }
//         t = vector<int>(t.begin() + 1, t.end());
//     }
//     int ii = 0;
//     while (ii != t.size())
//     {
//         ans += t[ii++];
//     }
//     if (ii == 0)
//     {
//         return "0";
//     }
//     return ans;
// }

// string removeKdigits(string num, int k)
// {
//     string ans = "";
//     for (char c : num)
//     {
//         while (ans.size() && ans.back() > c && k)
//         {
//             k--;
//             ans.pop_back();
//         }
//         if (ans.length() || c != '0')
//         {
//             ans.push_back(c);
//         }
//     }
//     while (ans.size() && k)
//     {
//         k--;
//         ans.pop_back();
//     }
//     return ans.size() ? ans : "0";
// }

// Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

// bruteforce:

// int largestRectangleArea(vector<int> &heights)
// {
//     int ans = INT_MIN;
//     for (int i = 0; i < heights.size(); i++)
//     {
//         int minHeight = INT_MAX;
//         for (int j = i; j < heights.size(); j++)
//         {
//             minHeight = min(minHeight, heights[j]);
//             ans = max(ans, minHeight * (j - i + 1));
//         }
//     }
//     return ans;
// }

// tle

// int largestRectangleArea(vector<int> &heights)
// {
//     int ans = 0;
//     for (int i = 0; i < heights.size(); i++)
//     {
//         int left = i, right = i;
//         while (left >= 0 && heights[left] <= heights[i])
//         {
//             left--;
//         }
//         while (right < heights.size() && heights[right] <= heights[i])
//         {
//             right++;
//         }
//         ans = max(ans, heights[i] * (right - left - 1));
//     }
//     return ans;
// }

// int largestRectangleArea(vector<int> &heights)
// {
//     stack<int> s;
//     vector<int> nle(heights.size(), heights.size());
//     vector<int> ple(heights.size(), -1);
//     for (int i = 0; i < heights.size(); i++)
//     {
//         while (!s.empty() && heights[s.top()] >= heights[i])
//         {
//             s.pop();
//         }
//         if (!s.empty())
//         {
//             ple[i] = s.top()+1;
//         }
//         else
//         {
//             ple[i] = 0;
//         }
//         s.push(i);
//     }
//     while (!s.empty())
//     {
//         s.pop();
//     }
//     for (int i = heights.size() - 1; i >= 0; i--)
//     {
//         while (!s.empty() && heights[s.top()] >= heights[i])
//         {
//             s.pop();
//         }
//         if (!s.empty())
//         {
//             nle[i] = s.top() - 1;
//         }
//         else
//         {
//             nle[i] = heights.size() - 1;
//         }
//         s.push(i);
//     }
//     int ans = INT_MIN;
//     for (int i = 0; i < heights.size(); i++)
//     {
//         ans = max(ans, heights[i] * (nle[i] - ple[i] + 1));
//     }
//     return ans;
// }

// https://leetcode.com/problems/largest-rectangle-in-histogram/discuss/28902/5ms-O(n)-Java-solution-explained-(beats-96)

// we gone through the i <= heights.size() bcoz the case when there are elements left in the stack  and this condition fails heights[s.top()] >= heights[i]) so to deal with this we done that :

// int largestRectangleArea(vector<int> &heights)
// {
//     stack<int> s;
//     int ans = 0;
//     for (int i = 0; i <= heights.size(); i++)
//     {
//         while (!s.empty() && (i == heights.size() || heights[s.top()] >= heights[i]))
//         {
//             int top = s.top();
//             s.pop();
//             int width;
//             if (s.empty())
//             {
//                 width = i;
//             }
//             else
//             {
//                 width = i - s.top() - 1;
//             }
//             ans = max(ans, heights[top] * (width));
//         }
//         s.push(i);
//     }
//     return ans;
// }

// Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.

// tc:n2 +n
// sc:n+n*m

// int maximalRectangle(vector<vector<char>> &matrix)
// {
//     int n = matrix.size();
//     vector<vector<int>> he;
//     int m = matrix[0].size();
//     for (int i = 0; i < n; i++)
//     {
//         vector<int> curr;
//         if (i == 0)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 curr.push_back(matrix[i][j] - '0');
//             }
//             he.push_back(curr);
//             continue;
//         }
//         for (int j = 0; j < m; j++)
//         {
//             if (matrix[i][j] == '0')
//             {
//                 curr.push_back(0);
//             }
//             else
//             {
//                 curr.push_back(he[i - 1][j] + 1);
//             }
//         }
//         he.push_back(curr);
//     }
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans = max(ans, largestRectangleArea(he[i]));
//     }
//     return ans;
// }

// int maximalRectangle(vector<vector<char>> &matrix)
// {
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<int> dp(m, 0);
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (matrix[i ][j] == '1')
//             {
//                 dp[j]++;
//             }
//             else
//             {
//                 dp[j] = 0;
//             }
//         }
//         ans = max(ans, largestRectangleArea(dp));
//     }
//     return ans;
// }

// You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.
// Return the max sliding window.

// Brute force

// int fun(int ind, vector<int> nums, int k)
// {
//     int maxi = INT_MIN;
//     while (k > 0 && ind != nums.size())
//     {
//         maxi = max(maxi, nums[ind++]);
//         k--;
//     }
//     return maxi;
// }

// vector<int> maxSlidingWindow(vector<int> &nums, int k)
// {
//     vector<int> ans;
//     for (int i = 0; i <= nums.size() - k; i++)
//     {
//         ans.push_back(fun(i, nums, k));
//     }
//     return ans;
// }

// sc:o(n)
// tc: o(nlgk)

// vector<int> maxSlidingWindow(vector<int> &nums, int k)
// {
//     int i = 0;
//     vector<int> ans;
//     priority_queue<pair<int, int>> p;
//     while (i < k)
//     {
//         p.push({nums[i], i});
//         i++;
//     }
//     ans.push_back(p.top().first);
//     for (; i < nums.size(); i++)
//     {
//         while (!p.empty() && p.top().second <= i - k)
//         {
//             p.pop();
//         }
//         p.push({nums[i], i});
//         ans.push_back(p.top().first);
//     }
//     return ans;
// }

// deque:

// vector<int> maxSlidingWindow(vector<int> &nums, int k)
// {
//     vector<int> ans;
//     deque<int> d;
//     int n = nums.size();
//     for (int i = 0; i < n; i++)
//     {
//         while (!d.empty() && d.front() <= i - k)
//         {
//             d.pop_front();
//         }
//         while (!d.empty() && nums[d.back()] < nums[i])
//         {
//             d.pop_back();
//         }
//         d.push_back(i);
//         if (i >= k - 1)
//         {
//             ans.push_back(nums[d.front()]);
//         }
//     }
//     return ans;
// }

// aditya verma approach:
// https://www.youtube.com/watch?v=xFJXtB5vSmM

// tc:o(n)
// sc:o(k)

// vector<int> maxSlidingWindow(vector<int> &nums, int k)
// {
//     int i = 0, j = 0;
//     deque<int> dq;
//     int n = nums.size();
//     vector<int> ans;
//     while (j < n)
//     {
//         while (!dq.empty() && dq.back() < nums[j])
//         {
//             dq.pop_back();
//         }
//         dq.push_back(nums[j]);
//         if (j - i + 1 < k)
//         {
//             j++;
//         }
//         else if (j - i + 1 == k)
//         {
//             ans.push_back(dq.front());
//             if (dq.front() == nums[i])
//             {
//                 dq.pop_front();
//             }
//             i++;
//             j++;
//         }
//     }
//     return ans;
// }

// vector<int> maxSlidingWindow(vector<int> &nums, int k)
// {
//     vector<int> left(nums.size());
//     vector<int> ans;
//     vector<int> right(nums.size());
//     for (int i = 0; i < nums.size(); i++)
//     {
//         left[i] = nums[i];
//         if (i % k != 0)
//         {
//             left[i] = max(left[i], left[i - 1]);
//         }
//     }
//     right[nums.size() - 1] = nums[nums.size() - 1];
//     for (int i = nums.size() - 2; i >= 0; i--)
//     {
//         right[i] = nums[i];
//         if (i % k != (k - 1))
//         {
//             right[i] = max(right[i], right[i + 1]);
//         }
//     }
//     for (int i = 0; i < nums.size() - k + 1; i++)
//     {
//         ans.push_back(max(right[i], left[i + k - 1]));
//     }
//     return ans;
// }

// 901. Online Stock Span
// Design an algorithm that collects daily price quotes for some stock and returns the span of that stock's price for the current day.

// The span of the stock's price in one day is the maximum number of consecutive days (starting from that day and going backward) for which the stock price was less than or equal to the price of that day.

// For example, if the prices of the stock in the last four days is [7,2,1,2] and the price of the stock today is 2, then the span of today is 4 because starting from today, the price of the stock was less than or equal 2 for 4 consecutive days.
// Also, if the prices of the stock in the last four days is [7,34,1,2] and the price of the stock today is 8, then the span of today is 3 because starting from today, the price of the stock was less than or equal 8 for 3 consecutive days.
// Implement the StockSpanner class:

// StockSpanner() Initializes the object of the class.
// int next(int price) Returns the span of the stock's price given that today's price is price.

// class StockSpanner
// {
// public:
//     stack<pair<int, int>> s;
//     StockSpanner()
//     {
//     }

//     int next(int price)
//     {
//         int ans = 1;
//         while (!s.empty() && s.top().first <= price)
//         {
//             ans += s.top().second;
//             s.pop();
//         }
//         s.push({price, ans});
//         return ans;
//     }
// };

// gfg

// vector<int> calculateSpan(int price[], int n)
// {
//     vector<int> ans(n);
//     stack<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         while (!s.empty() && price[s.top()] <= price[i])
//         {
//             s.pop();
//         }
//         if (s.empty())
//         {
//             ans[i] = i + 1;
//         }
//         else
//         {
//             ans[i] = i - s.top();
//         }
//         s.push(i);
//     }
//     return ans;
// }

// Suppose you are at a party with n people (labeled from 0 to n - 1) and among them, there may exist one celebrity. The definition of a celebrity is that all the other n - 1 people know him/her but he/she does not know any of them.

// Now you want to find out who the celebrity is or verify that there is not one. The only thing you are allowed to do is to ask questions like: "Hi, A. Do you know B?" to get information of whether A knows B. You need to find out the celebrity (or verify there is not one) by asking as few questions as possible (in the asymptotic sense).

// You are given a helper function bool knows(a, b) which tells you whether A knows B. Implement a function int findCelebrity(n), your function should minimize the number of calls to knows.

// bruteforce :
// tc:n2
// sc:2n
// lintcode

// graph :
// class Solution
// {
// public:
//     bool knows(int a, int b);
//     /**
//      * @param n a party with n people
//      * @return the celebrity's label or -1
//      */
//     int findCelebrity(int n)
//     {
//         vector<int> in(n, 0);
//         vector<int> ou(n, 0);
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (i != j)
//                 {
//                     if (knows(i, j))
//                     {
//                         in[j]++;
//                         ou[i]++;
//                     }
//                 }
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (in[i] == n - 1 && ou[i] == 0)
//             {
//                 return i;
//             }
//         }
//         return -1;
//     }
// };

// gfg
// stack +elimination

// int celebrity(vector<vector<int>> &M, int n)
// {
//     stack<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         s.push(i);
//     }
//     while (!s.empty() && s.size() > 1)
//     {
//         int a = s.top();
//         s.pop();
//         int b = s.top();
//         s.pop();
//         if (M[a][b])
//         {
//             s.push(b);
//             continue;
//         }
//         else if (M[b][a])
//         {
//             s.push(a);
//             continue;
//         }
//     }
//     if (s.empty())
//         return -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (M[s.top()][i])
//         {
//             return -1;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (i != s.top())
//             if (!M[i][s.top()])
//             {
//                 return -1;
//             }
//     }
//     return s.top();
// }

// 2 pointer approach:

// int celebrity(vector<vector<int>> &M, int n)
// {
//     int i = 0;
//     int j = n - 1;
//     while (i < j)
//     {
//         if (M[j][i] == 1)
//         {
//             j--;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     for (int k = 0; k < n; k++)
//     {
//         if (i != k && (M[i][k] || !M[k][i]))
//         {
//             return -1;
//         }
//     }
//     return i;
// }

// recursion:

// int helper(int n, vector<vector<int>> m)
// {
//     if (n == 0)
//     {
//         return -1;
//     }
//     int id = helper(n - 1, m);
//     if (id == -1)
//         return n - 1;
//     else if (m[id][n - 1])
//     {
//         return n - 1;
//     }
//     else if (m[n - 1][id])
//     {
//         return id;
//     }
//     return -1;
// }

// int celebrity(vector<vector<int>> &M, int n)
// {
//     int id = helper(n, M);
//     int c1 = 0, c2 = 0;
//     if (id == -1)
//         return id;
//     for (int i = 0; i < n; i++)
//     {
//         if (i != id)
//         {
//             c1 += M[id][i];
//             c2 += M[i][id];
//         }
//     }
//     if (c1 == 0 && c2 == n - 1)
//     {
//         return id;
//     }
//     return -1;
// }

// recursion working :

// bool knows(int a, int b, vector<vector<int>> &M) { return M[a][b]; }
// int findPotentialCelebrity(int n, vector<vector<int>> &M)
// {
//     if (n == 0)
//         return -1;
//     int id = findPotentialCelebrity(n - 1, M);
//     if (id == -1)
//         return n - 1;
//     else if (knows(id, n - 1, M))
//     {
//         return n - 1;
//     }
//     else if (knows(n - 1, id, M))
//     {
//         return id;
//     }
//     return -1;
// }
// int celebrity(vector<vector<int>> &M, int n)
// {
//     int id = findPotentialCelebrity(n, M);
//     if (id == -1)
//         return id;
//     else
//     {
//         int c1 = 0, c2 = 0;
//         for (int i = 0; i < n; i++)
//             if (i != id)
//             {
//                 c1 += knows(id, i, M);
//                 c2 += knows(i, id, M);
//             }
//         if (c1 == 0 && c2 == n - 1)
//             return id;
//         return -1;
//     }
// }

// In a town, there are n people labeled from 1 to n. There is a rumor that one of these people is secretly the town judge.

// If the town judge exists, then:

// The town judge trusts nobody.
// Everybody (except for the town judge) trusts the town judge.
// There is exactly one person that satisfies properties 1 and 2.
// You are given an array trust where trust[i] = [ai, bi] representing that the person labeled ai trusts the person labeled bi. If a trust relationship does not exist in trust array, then such a trust relationship does not exist.

// Return the label of the town judge if the town judge exists and can be identified, or return -1 otherwise.

// int findJudge(int n, vector<vector<int>> &trust)
// {
//     vector<int> in(n + 1, 0);
//     vector<int> ou(n + 1, 0);
//     for (int i = 0; i < trust.size(); i++)
//     {
//         ou[trust[i][0]]++;
//         in[trust[i][1]]++;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (in[i] == n - 1 && ou[i] == 0)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int findJudge(int n, vector<vector<int>> &trust)
// {
//     vector<int> c(n + 1, 0);
//     for (int i = 0; i < trust.size(); i++)
//     {
//         c[trust[i][0]]--;
//         c[trust[i][1]]++;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (c[i] == n - 1)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// Design a data structure that follows the constraints of a Least Recently Used (LRU) cache.

// Implement the LRUCache class:

// LRUCache(int capacity) Initialize the LRU cache with positive size capacity.
// int get(int key) Return the value of the key if the key exists, otherwise return -1.
// void put(int key, int value) Update the value of the key if the key exists. Otherwise, add the key-value pair to the cache. If the number of keys exceeds the capacity from this operation, evict the least recently used key.
// The functions get and put must each run in O(1) average time complexity

// class Node
// {
// public:
//     Node *prev, *next;
//     int key, value;
//     Node(int data, int value)
//     {
//         this->key = data;
//         this->value = value;
//         prev = NULL;
//         next = NULL;
//     }
// };

// class LRUCache
// {
// public:
//     int c;
//     Node *head, *tail;
//     unordered_map<int, Node *> mp;
//     LRUCache(int capacity)
//     {
//         this->c = capacity;
//         head = new Node(-1, -1);
//         tail = new Node(-1, -1);
//         head->next = tail;
//         tail->prev = head;
//     }
//     int get(int key)
//     {
//         if (mp.count(key))
//         {
//             Node *curr = mp[key];
//             curr->prev->next = curr->next;
//             curr->next->prev = curr->prev;
//             // update to head
//             curr->next = head->next;
//             head->next->prev = curr;
//             curr->prev = head;
//             head->next = curr;
//             return curr->value;
//         }
//         else
//         {
//             return -1;
//         }
//     }
//     void put(int key, int value)
//     {
//         if (mp.count(key))
//         {
//             // it is there so just update it to front :
//             Node *curr = mp[key];
//             curr->prev->next = curr->next;
//             curr->next->prev = curr->prev;
//             // update to head
//             curr->next = head->next;
//             head->next->prev = curr;
//             curr->prev = head;
//             head->next = curr;
//             curr->value = value;
//         }
//         else
//         {
//             // insert this if c premits
//             if (mp.size() < c)
//             {
//                 Node *cur = new Node(key, value);
//                 cur->next = head->next;
//                 cur->next->prev = cur;
//                 head->next = cur;
//                 cur->prev = head;
//                 mp[key] = cur;
//             }
//             else
//             {
//                 // remove the least used :
//                 Node *cur = new Node(key, value);
//                 cur->next = head->next;
//                 cur->next->prev = cur;
//                 head->next = cur;
//                 cur->prev = head;
//                 mp[key] = cur;
//                 // now delete the last :
//                 Node *t = tail->prev;
//                 t->prev->next = tail;
//                 tail->prev = t->prev;
//                 mp.erase(t->key);
//                 delete (t);
//             }
//         }
//     }
// };

// only stl :gud to revise stl advance

// class LRUCache
// {
//     size_t c;
//     unordered_map<int, list<pair<int, int>>::iterator> mp;
//     list<pair<int, int>> l;
//     LRUCache(int capacity)
//     {
//         c = capacity;
//     }
//     int get(int key)
//     {
//         auto found_iter = mp.find(key);
//         if (found_iter == mp.end())
//         {
//             // not found
//             return -1;
//         }
//         l.splice(l.begin(), l, found_iter->second);
//         //         This is how splice works,
//         // void splice (iterator position, list& x, iterator i);
//         // Params:
//         // iterator position: refers to the destination where the element will be inserted.
//         // list& x: refers to the list from where the element will be taken.
//         // iterator i: refers to the exact position of the element to be taken.
//         // In simple words, it will take the element at i of the list x and then insert it to position of the object that calls the splice function i.e *this.
//         // So, when we do
//         // m_list.splice(m_list.begin(), m_list, found_iter->second);
//         // It means, take the element at found_iter->second(3rd param) of m_list (2nd param) and insert it at the m_list.begin() (1st param) of m_list (this).
//         return found_iter->second->second;
//     }
//     void put(int key, int value)
//     {
//         auto found_iter = mp.find(key);
//         if (found_iter != mp.end())
//         {
//             // its already there :
//             l.splice(l.begin(), l, found_iter->second);
//             found_iter->second->second = value;
//             return;
//         }
// mp/l .sz() ok
//         if (c == mp.size())
//         {
//             // full che
//             int keydel = l.back().first;
//             l.pop_back();
//             mp.erase(keydel);
//         }
//         l.emplace_front(key, value);
//         mp[key] = l.begin();
//     }
// };

// striver way for lru

// class LRUCache
// {
// public:
//     class Node
//     {
//     public:
//         Node *next, *prev;
//         int key, value;
//         Node(int k, int v)
//         {
//             key = k;
//             value = v;
//         }
//     };
//     Node *head = new Node(-1, -1), *tail = new Node(-1, -1);
//     int c;
//     unordered_map<int, Node *> mp;
//     LRUCache(int capacity)
//     {
//         c = capacity;
//         head->next = tail;
//         tail->prev = head;
//     }
//     void addNodeFront(Node *cur)
//     {
//         Node *temp = head->next;
//         cur->next = temp;
//         temp->prev = cur;
//         head->next = cur;
//         cur->prev = head;
//     }
//     void deleteNode(Node *target)
//     {
//         Node *delPrev = target->prev;
//         Node *delNext = target->next;
//         delPrev->next = delNext;
//         delNext->prev = delPrev;
//         }
//     int get(int key)
//     {
//         if (mp.find(key) == mp.end())
//         {
//             return -1;
//         }
//         Node *cur = mp[key];
//         int ans = cur->value;
//         mp.erase(key);
//         deleteNode(cur);
//         addNodeFront(cur);
//         mp[key] = head->next;
//         return ans;
//     }
//     void put(int key, int value)
//     {
//         if (mp.find(key) != mp.end())
//         {
//             Node *cur = mp[key];
//             mp.erase(key);
//             deleteNode(cur);
//         }
//         if (c == mp.size())
//         {
//             mp.erase(tail->prev->key);
//             deleteNode(tail->prev);
//         }
//         addNodeFront(new Node(key, value));
//         mp[key] = head->next;
//     }
// };

// Design and implement a data structure for a Least Frequently Used (LFU) cache.
// Implement the LFUCache class:
// LFUCache(int capacity) Initializes the object with the capacity of the data structure.
// int get(int key) Gets the value of the key if the key exists in the cache. Otherwise, returns -1.
// void put(int key, int value) Update the value of the key if present, or inserts the key if not already present. When the cache reaches its capacity, it should invalidate and remove the least frequently used key before inserting a new item. For this problem, when there is a tie (i.e., two or more keys with the same frequency), the least recently used key would be invalidated.
// To determine the least frequently used key, a use counter is maintained for each key in the cache. The key with the smallest use counter is the least frequently used key.
// When a key is first inserted into the cache, its use counter is set to 1 (due to the put operation). The use counter for a key in the cache is incremented either a get or put operation is called on it.
// The functions get and put must each run in O(1) average time complexity.

// strivers way:

// class Node
// {
// public:
//     Node *prev, *next;
//     int cnt;
//     int key, value;
//     Node(int k, int v)
//     {
//         key = k, value = v;
//         cnt = 1;
//     }
// };

// class List
// {
// public:
//     int size;
//     Node *head, *tail;
//     List()
//     {
//         head = new Node(0, 0);
//         tail = new Node(0, 0);
//         head->next = tail;
//         tail->prev = head;
//         size = 0;
//     }
//     void addFront(Node *cur)
//     {
//         Node *temp = head->next;
//         cur->next = temp;
//         temp->prev = cur;
//         head->next = cur;
//         cur->prev = head;
//         size++;
//     }
//     void removeNode(Node *target)
//     {
//         Node *delPrev = target->prev;
//         Node *delNext = target->next;
//         delPrev->next = delNext;
//         delNext->prev = delPrev;
//         size--;
//     }
// };

// class LFUCache
// {
// public:
//     int c;
//     int minfreq = 0;
//     int currsize = 0;
//     unordered_map<int, Node *> keyNode;
//     unordered_map<int, List *> freqListMap;
//     LFUCache(int capacity)
//     {
//         c = capacity;
//     }
//     void updateFreqListMap(Node *node)
//     {
//         keyNode.erase(node->key);
//         freqListMap[node->cnt]->removeNode(node);
//         if (node->cnt == minfreq && freqListMap[node->cnt]->size == 0)
//         {
//             minfreq++;
//         }
//         List *nextHigherFreq;
//         if (freqListMap.find(node->cnt + 1) != freqListMap.end())
//         {
//             // already present;
//             nextHigherFreq = freqListMap[node->cnt + 1];
//         }
//         else
//         {
//             nextHigherFreq = new List();
//         }
//         node->cnt++;
//         nextHigherFreq->addFront(node);
//         freqListMap[node->cnt] = nextHigherFreq;
//         keyNode[node->key] = node;
//     }
//     int get(int key)
//     {
//         if (keyNode.find(key) != keyNode.end())
//         {
//             Node *cur = keyNode[key];
//             int val = cur->value;
//             updateFreqListMap(cur);
//             return val;
//         }
//         return -1;
//     }
//     void put(int key, int value)
//     {
//         if (c == 0)
//             return;
//         if (keyNode.find(key) != keyNode.end())
//         {
//             keyNode[key]->value = value;
//             updateFreqListMap(keyNode[key]);
//         }
//         else
//         {
//             if (currsize == c)
//             {
//                 List *lis = freqListMap[minfreq];
//                 keyNode.erase(lis->tail->prev->key);
//                 freqListMap[minfreq]->removeNode(lis->tail->prev);
//                 currsize--;
//             }
//             currsize++;
//             minfreq = 1;
//             List *lis;
//             if (freqListMap.find(minfreq) != freqListMap.end())
//             {
//                 lis = freqListMap[minfreq];
//             }
//             else
//             {
//                 lis = new List();
//             }
//             lis->addFront(new Node(key, value));
//             keyNode[key] = lis->head->next;
//             freqListMap[minfreq] = lis;
//         }
//     }
// };


// class LFUCache
// {
// public:
//     int c, cursize, minfreq;
//     unordered_map<int, list<int>> freqList;
//     unordered_map<int, list<int>::iterator> keyNode;
//     unordered_map<int, pair<int, int>> frequency;
//     LFUCache(int capacity)
//     {
//         c = capacity;
//         cursize = 0;
//         minfreq = 0;
//     }
//     int get(int key)
//     {
//         if (keyNode.find(key) == keyNode.end())
//         {
//             return -1;
//         }
//         else
//         {
//             int keyFreq = frequency[key].first;
//             freqList[keyFreq].erase(keyNode[key]);
//             frequency[key].first++;
//             freqList[frequency[key].first].push_front(key);
//             keyNode[key] = freqList[frequency[key].first].begin();
//             if (freqList[minfreq].size() == 0)
//             {
//                 minfreq++;
//             }
//             return frequency[key].second;
//         }
//     }
//     void put(int key, int value)
//     {
//         if (keyNode.find(key) != keyNode.end())
//         {
//             frequency[key].second = value;
//             get(key);
//             return;
//         }
//         if (cursize == c)
//         {
//             int minFreqq = freqList[minfreq].back();
//             freqList[minfreq].pop_back();
//             keyNode.erase(minFreqq);
//             cursize--;
//             frequency.erase(minFreqq);
//         }
//         cursize++;
//         minfreq = 1;
//         freqList[minfreq].push_front(key);
//         frequency[key].first = minfreq;
//         frequency[key].second = value;
//         keyNode[key] = freqList[minfreq].begin();
//     }   
// };
 

 
int main()
{
    return 0;
}