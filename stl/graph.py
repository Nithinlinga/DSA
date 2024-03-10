class Graph:
    def __init__(self):
        self.graph = {}

    def add_edge(self, u, v):
        if u not in self.graph:
            self.graph[u] = []
        self.graph[u].append(v)

    def dfs(self, start):
        visited = set()
        self._dfs_recursive(start, visited)

    def _dfs_recursive(self, node, visited):
        if node not in visited:
            print(node, end=" ")
            visited.add(node)
            if node in self.graph:
                for neighbor in self.graph[node]:
                    self._dfs_recursive(neighbor, visited)

if __name__ == "__main__":
    g = Graph()
    g.add_edge(1, 2)
    g.add_edge(1, 3)
    g.add_edge(2, 4)
    g.add_edge(2, 5)
    g.add_edge(3, 6)
    g.add_edge(3, 7)

    print("Depth-First Traversal:")
    g.dfs(1)
