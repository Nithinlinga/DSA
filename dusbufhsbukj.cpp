#include <iostream>
#include <vector>
#include <stack>
#include <limits>

using namespace std;

// Function to compute cycles in the maze
int find_largest_cycle_sum(const vector<int>& edge) {
    int n = edge.size();
    vector<bool> visited(n, false);
    vector<bool> in_stack(n, false);
    int max_cycle_sum = -1;

    stack<int> dfs_stack;
    for (int cell = 0; cell < n; ++cell) {
        if (!visited[cell]) {
            int current_sum = 0;
            dfs_stack.push(cell);
            visited[cell] = true;
            in_stack[cell] = true;

            while (!dfs_stack.empty()) {
                int node = dfs_stack.top();
                current_sum += node;

                int neighbor = edge[node];
                if (neighbor == -1) {
                    dfs_stack.pop(); 
                    in_stack[node] = false; 
                } else if (!visited[neighbor]) {
                    dfs_stack.push(neighbor);
                    visited[neighbor] = true;
                    in_stack[neighbor] = true;
                } else if (in_stack[neighbor]) {
                    max_cycle_sum = max(max_cycle_sum, current_sum + neighbor);  
                    dfs_stack.pop(); 
                    in_stack[node] = false; 
                } else { 
                    dfs_stack.pop(); 
                    in_stack[node] = false; 
                }
            }
        }
    }
    return max_cycle_sum;
}

// Function to find maximum weight node
int find_max_weight_node(const vector<int> &edge) {
    int n = edge.size();
    vector<int> weights(n, 0);

    // Calculate weights (in-degree) of each node
    for (int i = 0; i < n; ++i) {
        if (edge[i] != -1) {  // Outgoing edge exists
            weights[edge[i]] += 1; 
        }
    }

    // Find the node with maximum weight
    int max_weight_node = 0;
    int max_weight = numeric_limits<int>::min(); // Use limits for safe comparison
    for (int i = 0; i < n; ++i) {
        if (weights[i] > max_weight) {
            max_weight = weights[i];
            max_weight_node = i;
        }
    }

    return max_weight_node;
}

int main() {
    int i;
    cin>>i;
    while(i>0){
    int n;
    cin >> n;

    vector<int> edge(n);
    for (int i = 0; i < n; ++i) {
        cin >> edge[i];
    }

    int max_weight_node = find_max_weight_node(edge);
    cout << max_weight_node << endl; 
    i--;
    }
    return 0;
}