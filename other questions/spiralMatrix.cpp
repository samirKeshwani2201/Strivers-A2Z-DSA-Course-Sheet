// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//          vector<int> ans;
//         int row=matrix.size();
//         int col =matrix[0].size();
//         int count=0;
//         int total=row*col;
//         int startingRow=0;
//         int startingCol=0;
//         int endingRow=row-1;
//         int endingCol=col-1;
        
        
//         while(count<total)
//         {
            
//             //printing starting row 
//             for(int index=startingCol;index<=endingCol;index++)
//             {
//                 ans.push_back(matrix[startingRow][index]);
//                 count++;
                    
                
//             }
//             startingRow++;
//             //printing ending col
//             for(int index=startingRow;index<=endingRow;index++)
//             {
//                 ans.push_back(matrix[index][endingCol]);
//                 count++;
                
//             }
//             endingCol--;
            
//             //ending  row;
//             for(int index= endingCol ;index>=startingCol;index--)
//             {
//                 ans.push_back(matrix[endingRow][index]);
//                 count++;
                
//             }
//             endingRow--;
//             //print starting col
//             for(int index =endingRow;index>=startingRow;index--)
//             {
//                ans.push_back(matrix[index][startingCol]);   
//                 count++;
//             }
//             startingCol++;
            
            
//         }
        
//         return ans;
        
        
//     }
// };  