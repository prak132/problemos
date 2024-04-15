import networkx as nx
import matplotlib.pyplot as plt

"""
example
5
1 2
1 3
3 4
3 5
"""

def visualize_tree():
    n = int(input("paste\n"))
    G = nx.Graph()
    for _ in range(n - 1):
        u, v = map(int, input().split())
        G.add_edge(u, v)
    pos = nx.spring_layout(G)
    nx.draw(G, pos, with_labels=True, node_color='lightblue', node_size=1200, font_size=12, font_weight='bold')
    plt.title("Tree Viz")
    plt.show()

if __name__ == "__main__":
    visualize_tree()

"""
def visualize_tree():
    n = int(input("paste\n"))
    graph = {}
    for _ in range(n - 1):
        u, v = map(int, input().split())
        if u not in graph:
            graph[u] = []
        if v not in graph:
            graph[v] = []
        graph[u].append(v)
        graph[v].append(u)
    print('\n\n\n')
    def print_graph(node, parent=None, prefix=""):
        children = graph[node]
        if parent is not None:
            children.remove(parent)
        if children:
            for child in children[:-1]:
                print(prefix + "+-- " + str(child))
                print_graph(child, node, prefix + "|   ")
            print(prefix + "+-- " + str(children[-1]))
            print_graph(children[-1], node, prefix + "    ")
        else:
            print(prefix)

    root = min(graph.keys())
    print(root)
    print_graph(root)

if __name__ == "__main__":
    visualize_tree()
"""