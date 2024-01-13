
vector<vector<int>> printAdjacency(int n, int m, vector<vector<int>> &edges)
{
    vector<vector<int>> adjList;

    for (auto it : edges)
    {
        for (auto bt : it)
        {
            adjList[it.front()].push_back(bt);
            adjList[bt].push_back(it.front());
        }
    }
    return adjList;
}