# Graph Python Script

class Graph:
    def __init__(self):
        self.graph = {}

    def add_edge(self, u, v):
        if u not in self.graph:
            self.graph[u] = []
        self.graph[u].append(v)

    def print_graph(self):
        for vertex in self.graph:
            print(vertex, "->", " -> ".join(map(str, self.graph[vertex])))

# Create a graph instance
graph = Graph()

# Add edges to the graph
graph.add_edge(1, 2)
graph.add_edge(1, 3)
graph.add_edge(2, 3)
graph.add_edge(2, 4)
graph.add_edge(3, 4)
graph.add_edge(4, 5)

# Print the graph
print("Graph:")
graph.print_graph()
