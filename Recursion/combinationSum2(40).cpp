// class Solution {
//     private:
//     void solve(vector<int>candidates,vector<vector<int>>&ans,vector<int>op,int s,int ind ,  int target)
//     {

//         if(ind==candidates.size())
//         {
//             if(target==s)
//             {
//                 
//                 for(auto it:ans)
//                 {
//                     if(it==op)
//                     {
//                         return ;

//                     }
//                     if(it>op)
//                     {
//                         return ;

//                     }
//                 }
//             ans.push_back(op);
//             }
//             return ;

//         }
//           if(candidates[ind]<=target){
//             op.push_back(candidates[ind]);
//               s+=candidates[ind];

//               solve( candidates,ans,  op, s, ind+1,    target );
//              s-= candidates[ind];
//               op.pop_back();
//            }

//          solve( candidates,ans,  op, s, ind+1,    target);

//     }
// public:
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         vector<vector<int>> ans;
//          sort(candidates.begin(),candidates.end());

//         vector<int>op;
//         int ind=0;
//         int s=0;

//          solve( candidates,  ans,op, s, ind,    target);
//         sort(ans.begin(),ans.end());
//            return ans;

//     }
// };

// Solution:

// class Solution {
//     private:
//     void findCombination(int ind,int target,vector<int> &arr,vector<vector<int>>&ans, vector<int>&ds)
//     {
//         if(target==0)
//         {
//             ans.push_back(ds);
//             return ;

//         }
//         for(int i=ind;i<arr.size();i++)
//         {
    //        The significance of i>ind is that it is not for the first time ,if its first time then we can pick it up
//             if(i>ind && arr[i]==arr[i-1])continue;
//             if(arr[i]>target)break;
//             ds.push_back(arr[i]);
//             findCombination(i+1,target-arr[i],arr,ans,ds);
//             ds.pop_back();

//         }
//     }
// public:
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         sort(candidates.begin(),candidates.end());
//         vector<vector<int>>ans;
//         vector<int>ds;
//         findCombination(0,target,candidates,ans,ds);
//         return ans;

//     }
// };