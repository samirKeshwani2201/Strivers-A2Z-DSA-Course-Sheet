#include <bits/stdc++.h>
using namespace std;

// You are given an array ‘Arr’of size ‘N'
// consisting of positive integers.
// Make 0 linked list from the array and return the
// head of the linked list.
// The head of the linked list is the ?rst element
// of the array, and the tail of the linked list is the
// lost element.

class Node
{
public:
    int data;
    Node *next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
};

// Node *constructLL(vector<int> &arr)
// {
//     Node *head = new Node();
//     Node *t = NULL;
//     head->data = arr[0];
//     head->next = NULL;
//     t = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node *neww = new Node(arr[i]);
//         t->next = neww;
//         t = neww;
//     }
//     return head;
// }

// There is a singly-linked list head and we want to delete a node node in it.
// You are given the node to be deleted node. You will not be given access to the first node of head.
// All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node in the linked list.

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// void deleteNode(ListNode *node)
// {
//     ListNode *p;
//     p = node->next;
//     node->val = p->val;
//     node->next = p->next;
//     delete p;
// }

// reverse dll:

// Node *reverseDLL(Node *head)
// {
//     Node *t = head;
//     vector<int> vc;
//     while (t != NULL)
//     {
//         vc.push_back(t->data);
//         t = t->next;
//     }
//     reverse(vc.begin(), vc.end());
//     Node *p = new Node(vc[0]);
//     head = p;
//     for (int i = 1; i < vc.size(); i++)
//     {
//         Node *cur = new Node(vc[i]);
//         p->next = cur;
//         cur->prev = p;
//         p = p->next;
//     }
//     p->next = NULL;
//     return head;
// }

// Node *reverseDLL(Node *head)
// {
//     Node*temp = NULL;
//     Node*curr = head;
//     while (curr != NULL)
//     {
//         temp = curr->prev;
//         curr->prev = curr->next;
//         curr->next = temp;
//         curr = curr->prev;
//     }
//     // handle the case other than empty and single element
//      if(temp != NULL )
//         head = temp->prev;
//         return head;
// }

// recursive approach:

// Node *reverseDLL(Node *head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     Node *temp = reverseDLL(head->next);
//     temp->prev = NULL;
//     head->next->next = head;
//     head->prev = head->next;
//     head->next = NULL;
//     return temp;
// }

// Given the head of a singly linked list, return the middle node of the linked list.

//     If there are two middle nodes,
//     return the second middle node.

// ListNode *middleNode(ListNode *head)
// {
//     double cnt = 0;
//     ListNode *t = head;
//     while (t != NULL)
//     {
//         cnt++;
//         t = t->next;
//     }
//     cnt = (cnt / 2) + 1;
//     t = head;
//     for (int p = 1; p < cnt; p++)
//     {
//         t = t->next;
//     }
//     return t;
// }

// Single ll reverse :

// Iterative

// ListNode *reverse(ListNode *head)
// {
//     if (head == NULL || head->next == NULL)
//         return NULL;
//     ListNode *p = NULL;
//     ListNode *c = head;
//     ListNode *n = head->next;
//     while (c != NULL)
//     {
//         c->next = p;
//         p = c;
//         c = n;
//         if (n  )
//             n = n->next;
//     }
//     return p;
//     // p points to head
// }

// ListNode *reverseList(ListNode *head)
// {
//     ListNode *t1 = head;
//     ListNode *t0 = NULL;
//     while (t1 != NULL)
//     {
//         ListNode *temp = t1->next;
//         t1->next = t0;
//         t0 = t1;
//         t1 = temp;
//     }
//     return t0;
// }

// recusive:

// ListNode *reverseList(ListNode *head) 
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     ListNode *temp = reverseList(head->next);
//     head->next->next = head;
//     head->next = NULL;
//     return temp;
// }

// Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

// There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.

// Do not modify the linked list.

// ListNode *detectCycle(ListNode *head)
// {
//     map<ListNode *, int> mp;
//     ListNode *temp = head;
//     while (temp != NULL)
//     {
//         if (mp[temp] > 1)
//         {
//             return temp;
//         }
//         mp[temp]++;
//         temp = temp->next;
//     }
//     return NULL;
// }

// Space Optiised approach :slow fast concept

//  ListNode *detectCycle(ListNode *head) {
//         ListNode *fast=head,*slow=head;
//         while(fast!=NULL&&fast->next!=NULL )
//         {
//             fast=fast->next->next;
//             slow=slow->next;
//             if(fast==slow)break;
//         }
//          if (!(fast && fast->next)) return NULL;
//         while(head!=slow)
//         {
//             slow=slow->next;
//             head=head->next;
//         }
//         return head;
//     }

// ListNode *detectCycle(ListNode *head)
// {
//     bool c = false;
//     ListNode *slow = head, *fast = head;
//     while (fast && fast->next != NULL)
//     {
//         fast = fast->next->next;
//         slow = slow->next;
//         if (slow == fast)
//         {
//             c = true;
//             break;
//         }
//     }
//     if (!c)
//         return NULL;
//     slow = head;
//     while (slow != fast)
//     {
//         fast = fast->next;
//         slow = slow->next;
//     }
//     return slow;
// }

// int lengthOfLoop(Node *head) {
//     bool c = false;
//     Node *slow = head, *fast = head;
//     while (fast && fast->next != NULL)
//     {
//         fast = fast->next->next;
//         slow = slow->next;
//         if (slow == fast)
//         {
//             Node *temp = slow;
//             slow = slow->next;
//             int cnt = 1;
//             while (slow != temp)
//             {
//                 slow = slow->next;
//                 cnt++;
//             }
//             return cnt;
//         }
//     }
//     return 0;
// }

// tc :o(n )
// sc:o(2n)

// bool isPalindrome(ListNode *head)
// {
//     vector<int> vc;
//     ListNode *temp = head;
//     while (temp != NULL)
//     {
//         vc.push_back(temp->val);
//         temp = temp->next;
//     }
//     vector<int> bc = vc;
//     reverse(vc.begin(), vc.end());
//     if (bc == vc)
//         return true;
//     return false;
// }

// ListNode *reverseList(ListNode *head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     ListNode *temp = reverseList(head->next);
//     head->next->next = head;
//     head->next = NULL;
//     return temp;
// }

// bool isPalindrome(ListNode *head)
// {
//     if(head==NULL || head->next==NULL)return true;
//     ListNode *slow = head, *fast = head;
//     while (fast->next!=NULL && fast->next->next!=NULL)
//     {
//         fast = fast->next->next;
//         slow = slow->next;
//     }
//     slow->next = reverseList(slow->next);
//     slow=slow->next;
//     ListNode *temp = head;
//     while (slow != NULL)
//     {
//         if (temp->val != slow->val)
//         {
//             return false;
//         }
//         slow = slow->next;
//         temp = temp->next;
//     }
//     return true;
// }

// bool isPalindrome(ListNode *head)
// {
//     if (!head || !head->next)
//     {
//         return true;
//     }
//     ListNode *temp = head;
//     ListNode *r_head = NULL;
//     while (temp != NULL)
//     {
//         ListNode *neww = new ListNode(temp->val);
//         neww->next = r_head;
//         r_head = neww;
//         temp = temp->next;
//     }
//     while (r_head && head)
//     {
//         if (r_head->val != head->val)
//         {
//             return false;
//         }
//         r_head = r_head->next;
//         head = head->next;
//     }
//     return true;
// }

// Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

// The first node is considered odd, and the second node is even, and so on.

// Note that the relative order inside both the even and odd groups should remain as it was in the input.

// You must solve the problem in O(1) extra space complexity and O(n) time complexity.

// ListNode *oddEvenList(ListNode *head)
// {
//     ListNode *t1 = head;
//     if (!head->next)
//         return head;
//     ListNode *t2 = head->next;
//     while (t1->next && t1->next->next)
//     {
//         t1->next = t1->next->next;
//         t1 = t1->next->next;
//     }
//     while (t2->next && t2->next->next)
//     {
//         t2->next = t2->next->next;
//         t2 = t2->next->next;
//     }
//     t1->next = head->next;
//     return head;
// }

// ListNode *oddEvenList(ListNode *head)
// {
//     if (head == NULL || head->next == NULL)
//         return head;
//     ListNode *odd = head;
//     ListNode *temp = head->next;
//     ListNode *even = head->next;
//     while (even != NULL && even->next != NULL)
//     {
//         odd->next = odd->next->next;
//         odd = odd->next;
//         even->next = even->next->next;
//         even = even->next;
//     }
//     odd->next = temp;
//     return head;
// }

// Given the head of a linked list, remove the nth node from the end of the list and return its head.

// Two pass:

// ListNode *removeNthFromEnd(ListNode *head, int n)
// {
//     int cnt = 0;
//     ListNode *temp = head;
//     while (temp != NULL)
//     {
//         cnt++;
//         temp = temp->next;
//     }
//     temp = head;
//     ListNode *tp = NULL;
//     for (int i = 1; i <= cnt - n; i++)
//     {
//         tp = temp;
//         temp = temp->next;
//     }
//     if (tp == NULL)
//         head = head->next;
//     else
//     {
//         tp->next = temp->next;
//     }
//     return head;
// }

// One Pass:

// ListNode *removeNthFromEnd(ListNode *head, int n)
// {
//     if (head == NULL || head->next == NULL)
//         return NULL;
//     ListNode *first = head;
//     ListNode *second = head;
//     for (int i = 1; i <= n; i++)
//     {
//         first = first->next;
//     }
//     if (first == NULL)
//         return head = head->next;
//     while (first->next != NULL)
//     {
//         first = first->next;
//         second = second->next;
//     }
//     second->next = second->next->next;
//     return head;
// }

// Naive Approach:

// ListNode *deleteMiddle(ListNode *head)
// {
//     if (head == NULL || head->next == NULL)
//         return NULL;
//     int cnt = 0;
//     ListNode *temp = head;
//     while (temp != NULL)
//     {
//         cnt++;
//         temp = temp->next;
//     }
//     temp = head;
//     for (int i = 1; i < int(cnt / 2); i++)
//     {
//         temp = temp->next;
//     }
//     temp->next = temp->next->next;
//     return head;
// }

// ListNode *deleteMiddle(ListNode *head)
// {
//     if (head == NULL || head->next == NULL)
//         return NULL;
//     ListNode *fast = head;
//     ListNode *slow = head;
//     ListNode *ps = NULL;
//     while (fast && fast->next)
//     {
//         ps = slow;
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     if (ps)
//     {
//         ps->next = slow->next;
//     }
//     return head;
// }

// Naive

// ListNode *sortList(ListNode *head)
// {
//     vector<int> vc;
//     ListNode *t = head;
//     while (t)
//     {
//         vc.push_back(t->val);
//         t = t->next;
//     }
//     sort(vc.begin(), vc.end());
//     t = head;
//     for (auto v : vc)
//     {
//         t->val = v;
//         t = t->next;
//     }
//     return head;
// }

// nlogn time :Merge Sort

// ListNode *merge(ListNode *l1, ListNode *l2)
// {
//     ListNode *ptr = new ListNode();
//     ListNode *cur = ptr;
//     while (l1 && l2)
//     {
//         if (l1->val > l2->val)
//         {
//             cur->next = l2;
//             l2 = l2->next;
//         }
//         else
//         {
//             cur->next = l1;
//             l1 = l1->next;
//         }
//         cur = cur->next;
//     }
//     if (l1)
//     {
//         cur->next = l1;
//     }
//     if (l2)
//     {
//         cur->next = l2;
//     }
//     return ptr->next;
// }

// ListNode *sortList(ListNode *head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     ListNode *fast = head;
//     ListNode *slow = head;
//     ListNode *temp = NULL;
//     while (fast && fast->next)
//     {
//         temp = slow;
//         fast = fast->next->next;
//         slow = slow->next;
//     }
//     temp->next = NULL;
//     ListNode *l1 = sortList(head);
//     ListNode *l2 = sortList(slow);
//     return merge(l1, l2);
// }

// Node *sortList(Node *head)
// {
//     Node *ptr = head;
//     int cnt[3] = {};
//     while (ptr)
//     {
//         cnt[ptr->data]++;
//         ptr = ptr->next;
//     }
//     ptr = head;
//     int i = 0;
//     while (ptr)
//     {
//         while (cnt[i] == 0)
//         {
//             i++;
//         }
//         ptr->data = i;
//         cnt[i]--;
//         ptr = ptr->next;
//     }
//     return head;
// }

// 0 1 2 Sort :

// Node *sortList(Node *head)
// {
//     int z = 0, o = 0, t = 0;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == 1)
//         {
//             o++;
//         }
//         else if (temp->data == 0)
//         {
//             z++;
//         }
//         else
//         {
//             t++;
//         }
//         temp = temp->next;
//     }
//     temp = head;
//     while (z != 0)
//     {
//         temp->data = 0;
//         temp = temp->next;
//         z--;
//     }
//     while (o != 0)
//     {
//         temp->data = 1;
//         temp = temp->next;
//         o--;
//     }
//     while (t != 0)
//     {
//         temp->data = 2;
//         temp = temp->next;
//         t--;
//     }
//     return head;
// }

// Node *sortList(Node *head)
// {
// if(head)return NULL;
//     Node *o = NULL, *z = NULL, *t = NULL;
//     Node *tt = NULL, *tz = NULL, *to = NULL;
//     while (head)
//     {
//         Node *next = head->next;
//         if (head->data == 1)
//         {
//             if (!o)
//             {
//                 // store ones head
//                 o = head;
//                 o->next = NULL;
//             }
//             if (!to)
//             {
//                 to = o;
//                 to->next = NULL;
//             }
//             else
//             {
//                 to->next = head;
//                 to = head;
//                 to->next = NULL;
//             }
//         }
//         else if (head->data == 0)
//         {
//             if (!z)
//             {
//                 // store ones head
//                 z = head;
//                 z->next = NULL;
//             }
//             if (!tz)
//             {
//                 tz = z;
//                 tz->next = NULL;
//             }
//             else
//             {
//                 tz->next = head;
//                 tz = head;
//                 tz->next = NULL;
//             }
//         }
//         else
//         {
//             if (!t)
//             {
//                 // store ones head
//                 t = head;
//                 t->next = NULL;
//             }
//             if (!tt)
//             {
//                 tt = t;
//                 tt->next = NULL;
//             }
//             else
//             {
//                 tt->next = head;
//                 tt = head;
//                 tt->next = NULL;
//             }
//         }
//         head = next;
//     }
//     if (z)
//     {
//         if (o)
//         {
//             if (t)
//             {
//                 // z o t
//                 head = z;
//                 tz->next = o;
//                 to->next = t;
//                 tt->next = NULL;
//             }
//             else
//             {
//                 // z o
//                 head = z;
//                 tz->next = o;
//                 to->next = NULL;
//             }
//         }
//         else
//         {
//             if (t)
//             {
//                 // z t
//                 head = z;
//                 tz->next = t;
//                 tt->next = NULL;
//             }
//             else
//             {
//                 // z
//                 head = z;
//                 tz->next = NULL;
//             }
//         }
//     }
//     else
//     {
//         if (o)
//         {
//             if (t)
//             {
//                 // ot
//                 head = o;
//                 to->next = t;
//                 tt->next = NULL;
//             }
//             else
//             {
//                 // o
//                 head = o;
//                 to->next = NULL;
//             }
//         }
//         else
//         {
//             if (t)
//             {
//                 // t
//                 head = t;
//                 tt->next = NULL;
//             }
//         }
//     }
//     return head;
// }

// Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

// tc :m*n Naive Approach
// sc:1

// ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
// {
//     ListNode *t1 = headA, *t2;
//     while (t1)
//     {
//         t2 = headB;
//         while (t2)
//         {
//             if (t1 == t2)
//             {
//                 return t1;
//             }
//             t2 = t2->next;
//         }
//         t1 = t1->next;
//     }
//     return NULL;
// }

// tc: m+n
// sc: o(m)

// ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
// {
//     map<ListNode *, int> mp;
//     ListNode *t1 = headA, *t2 = headB;
//     while (t1)
//     {
//         mp[t1]++;
//         t1 = t1->next;
//     }
//     while (t2)
//     {
//         if (mp[t2])
//         {
//             return t2;
//         }
//         t2 = t2->next;
//     }
//     return NULL;
// }

// tc : o(m+n)
// sc: o(1)

// ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
// {
//     int s1 = 0, s2 = 0;
//     ListNode *t1 = headA, *t2 = headB;
//     while (t1)
//     {
//         s1++;
//         t1 = t1->next;
//     }
//     while (t2)
//     {
//         s2++;
//         t2 = t2->next;
//     }
//     t1 = headA;
//     t2 = headB;
//     if (s1 > s2)
//     {
//         for (int i = 0; i < s1 - s2; i++)
//         {
//             t1 = t1->next;
//         }
//     }
//     else
//     {
//         for (int i = 0; i < s2 - s1; i++)
//         {
//             t2 = t2->next;
//         }
//     }
//     while (t1 && t2)
//     {
//         if (t1 == t2)
//             return t1;
//         t1 = t1->next;
//         t2 = t2->next;
//     }
//     return NULL;
// }

// More Optimised :
//  tc:o(2m)

// ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
// {
//     ListNode *t1 = headA, *t2 = headB;
//     while (t1 != t2)
//     {
//         t1 = (t1 == NULL ? headB : t1->next);
//         t2 = (t2 == NULL ? headA : t2->next);
//     }
//     return t1;
// }

// You‘re given a positive integer represented in
// the form of a singly linked-list of digits. The
// length of the number is ’n’.
// Add 1 to the number, i.e., increment the given
// number by one.

// Node *reverseList(Node *head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     Node *temp = reverseList(head->next);
//     head->next->next = head;
//     head->next = NULL;
//     return temp;
// }

// Node *addOne(Node *head)
// {
//     head = reverseList(head);
//     int carry = 1;
//     Node *current = head;
//     while (current)
//     {
//         int sum = carry + current->data;
//         carry = sum / 10;
//         current->data = sum % 10;
//         if (carry == 0)
//         {
//             break;
//         }
//         if (current->next == NULL)
//         {
//             current->next = new Node();
//             current->next->data = carry;
//             current->next->next = NULL;
//             current = current->next;
//         }
//         current = current->next;
//     }
//     head = reverseList(head);
//     return head;
// }

// Recurrence:

// int help(Node *head)
// {
//     if (head == NULL)
//         return 1;
//     int res = head->data + help(head->next);
//     head->data = res % 10;
//     return res / 10;
// }

// Node *addOne(Node *head)
// {
//     int carry = help(head);
//     if (carry)
//     {
//         Node *t = new Node(carry);
//         Node *te = head;
//         head = t;
//         head->next = te;
//     }
//     return head;
// }

// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

// ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
// {
//     if (!l1 && !l2)
//         return NULL;
//     ListNode *head = new ListNode(0);
//     ListNode *temp = head;
//     ListNode *a = l1, *b = l2;
//     int ts = 0;
//     if (l1)
//     {
//         head->val = (l1->val % 10);
//         ts = l1->val;
//     }
//     if (l2)
//     {
//         head->val = (head->val + l2->val) % 10;
//         ts += l2->val;
//     }
//     int carry = ts / 10;
//     a = a->next;
//     b = b->next;
//     while (a && b)
//     {
//         int sum = a->val + b->val + carry;
//         ListNode *s = new ListNode();
//         s->val = sum % 10;
//         carry = (sum / 10);
//         temp->next = s;
//         temp = s;
//         a = a->next, b = b->next;
//     }
//     while (a)
//     {
//         int sum = a->val + carry;
//         ListNode *s = new ListNode();
//         s->val = sum % 10;
//         carry = (sum / 10);
//         temp->next = s;
//         temp = s;
//         a = a->next;
//     }
//     while (b)
//     {
//         int sum = b->val + carry;
//         ListNode *s = new ListNode();
//         s->val = sum % 10;
//         carry = (sum / 10);
//         temp->next = s;
//         temp = s;
//         b = b->next;
//     }
//     if (carry)
//     {
//         ListNode *s = new ListNode(carry);
//         temp->next = s;
//         temp = s;
//         s->next = NULL;
//     }
//     return head;
// }

// You’re given a doubly-Iinked list and a key ’k’.
// Delete all the nodes having data equal to ‘k’.

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data, Node *next, Node *prev)
    {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};

// void dele(Node *t)
// {
//     if (t->prev)
//     {
//         t->prev->next = t->next;
//     }
//     if (t->next)
//         t->next->prev = t->prev;
//     // delete t;
//     return;
// }

// Node *deleteAllOccurrences(Node *head, int k)
// {
//     if (!head)
//         return NULL;
//     while (head->data == k)
//     {
//         head = head->next;
//         if (!head)
//             return NULL;
//         if (head && head->prev)
//         {
//             delete head->prev;
//             head->prev = NULL;
//         }
//     }
//     Node *t = head;
//     while (t)
//     {
//         if (t->data == k)
//         {
//             dele(t);
//         }
//         t = t->next;
//     }
//     return head;
// }

// Node *deleteAllOccurrences(Node *head, int k)
// {
//     if (head == NULL)
//         return head;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == k)
//         {
//             Node *temp2 = temp;
//             if (temp->prev != NULL)
//                 temp->prev->next = temp->next;
//             if (temp->next != NULL)
//                 temp->next->prev = temp->prev;
//             if (temp == head)
//                 head = head->next;
//             temp = temp->next;
//             delete temp2;
//         }
//         else
//             temp = temp->next;
//     }
//     return head;
// }

// You are given a sorted doubly linked list of size
// ’n', consisting of distinct positive integers, and
// a number 'k’.
// Find out all the pairs in the doubly linked list
// with sum equal to 'k'.

// Navie Apporach
// tc: o(n2)

// vector<pair<int, int>> findPairs(Node *head, int k)
// {
//     vector<pair<int, int>> v;
//     Node *f = head, *s = head->next;
//     while (f)
//     {
//         s = f->next;
//         while (s)
//         {
//             if (s->data + f->data == k)
//             {
//                 v.push_back({f->data, s->data});
//             }
//             s = s->next;
//         }
//         f = f->next;
//     }
//     return v;
// }

// hashing tc:o(n), sc:o(n)

// vector<pair<int, int>> findPairs(Node *head, int k)
// {
//     vector<pair<int, int>> v;
//     set<int> s;
//     Node *t = head;
//     while (t)
//     {
//         if (s.find(k - t->data) != s.end())
//         {
//             v.push_back({t->data, k - t->data});
//         }
//         else
//         {
//             s.insert(t->data);
//         }
//         t = t->next;
//     }
//     return v;
// }

// vector<pair<int, int>> findPairs(Node *head, int k)
// {
//     vector<pair<int, int>> v;
//     Node *f = head;
//     Node *t = head->next;
//     while (t && t->next)
//     {
//         t = t->next;
//     }
//     while (f->data < t->data)
//     {
//         if (f->data + t->data == k)
//         {
//             v.push_back({f->data, t->data});
//             f = f->next;
//             t = t->prev;
//         }
//         else if (f->data + t->data < k)
//         {
//             f = f->next;
//         }
//         else
//         {
//             t = t->prev;
//         }
//     }
//     return v;
// }

// You are given a sorted doubly linked list of size
// ’n'.
// Remove all the duplicate nodes present in the
// linked list.

// Node *removeDuplicates(Node *head)
// {
//     Node *t = head;
//     while (t)
//     {
//         while (t && t->next && t->data == t->next->data)
//         {
//             t->next = t->next->next;
//         }
//         t = t->next;
//     }
//     return head;
// }

// Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.
// k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

// Extra space sc:o(n) Naive approach
// tc o(n*n)

// ListNode *reverseKGroup(ListNode *head, int k)
// {
//     ListNode *t = head;
//     vector<int> v;
//     while (t)
//     {
//         v.push_back(t->val);
//         t = t->next;
//     }
//     int i = 0;
//     int j = k;
//     while (j <= v.size())
//     {
//         reverse(v.begin() + i, v.begin() + j);
//         i = j;
//         j += k;
//     }
//     t = head;
//     for (auto a : v)
//     {
//         t->val = a;
//         t = t->next;
//     }
//     return head;
// }

// Iterative Best Approach

// int len(ListNode *t)
// {
//     ListNode *p = t;
//     int cnt = 0;
//     while (p)
//     {
//         p = p->next;
//         cnt++;
//     }
//     return cnt;
// }

// ListNode *reverseKGroup(ListNode *head, int k)
// {
//     if (!head || head->next == NULL)
//         return head;
//     ListNode *pre = new ListNode(0), *nex = head, *curr = head;
//     pre->next = head;
//     ListNode *dh = pre;
//     int length = len(head);
//     while (length >= k)
//     {
//         curr = pre->next;
//         nex = curr->next;
//         for (int i = 1; i < k; i++)
//         {
//             curr->next = nex->next;
//             nex->next = pre->next;
//             pre->next = nex;
//             nex = curr->next;
//         }
//         pre = curr;
//         length -= k;
//     }
//     return dh->next;
// }

// Recursive Approach:

void reverse(ListNode *s, ListNode *e)
{
    ListNode *p = NULL, *curr = s, *nex = s->next;
    while (p != e)
    {
        curr->next = p;
        p = curr;
        curr = nex;
        if (nex != NULL)
            nex = nex->next;
    }
}

ListNode *reverseKGroup(ListNode *head, int k)
{
    if (!head || !(head->next) || k == 1)
        return head;
    ListNode *s = head;
    ListNode *e = head;
    int cnt = 1;
    while (cnt != (k))
    {
        cnt++;
        e = e->next;
        if (!e)
            return head;
    }

    ListNode *newHead = reverseKGroup(e->next, k);
    reverse(s, e);
    s->next = newHead;
    return e;
}

int main()
{

    return 0;
}
