#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void dfs(int v, vector<vector<int>> &adj, vector<bool> &visited)
{
  visited[v] = true;
  cout << "Visited vertex: " << v << endl;

  for (int i : adj[v])
  {
    if (!visited[i])
    {
      dfs(i, adj, visited);
    }
  }
}

int main()
{
  int n = 6;
  vector<vector<int>> adj(n);

  adj[0].push_back(1);
  adj[0].push_back(2);
  adj[1].push_back(3);
  adj[2].push_back(3);
  adj[3].push_back(4);
  adj[4].push_back(5);
  adj[5].push_back(1);

  vector<bool> visited(n, false);
  dfs(0, adj, visited);//注释

  return 0;
}
