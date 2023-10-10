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
    ListNode(int x) : val(x), next(NULL) {}
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

//   ListNode *reverseList(ListNode *head)
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

 ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head,*slow=head;
        while(fast!=NULL&&fast->next!=NULL )
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)break;
        }
         if (!(fast && fast->next)) return NULL;
        while(head!=slow)
        {
            slow=slow->next;
            head=head->next;
            
        }
        return head;
    }

int main()
{
    return 0;
}