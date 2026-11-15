#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

// DIJKSTRA ALGORITHM

void findShortestPath(
    int numNodes,
    int source,
    int destination,
    const vector<vector<pair<int, int>>>& adjList
) {
    if (source < 1 || source >= numNodes ||
        destination < 1 || destination >= numNodes) {

        cout << "\nInvalid Source or Destination ID!\n";
        return;
    }

    vector<int> dist(numNodes, INT_MAX);
    vector<int> parent(numNodes, -1);
    vector<bool> visited(numNodes, false);

    dist[source] = 0;

    // FIND SHORTEST DISTANCE

    for (int i = 1; i < numNodes; i++) {

        int minDist = INT_MAX;
        int u = -1;

        for (int v = 1; v < numNodes; v++) {

            if (!visited[v] && dist[v] < minDist) {
                minDist = dist[v];
                u = v;
            }
        }

        if (u == -1)
            break;

        if (u == destination)
            break;

        visited[u] = true;

        // UPDATE NEIGHBOUR DISTANCES

        for (const auto& edge : adjList[u]) {

            int v = edge.first;
            int weight = edge.second;

            if (!visited[v] &&
                dist[u] != INT_MAX &&
                dist[u] + weight < dist[v]) {

                dist[v] = dist[u] + weight;
                parent[v] = u;
            }
        }
    }

    // CHECK PATH

    if (dist[destination] == INT_MAX) {
        cout << "\nNo pathway found between these locations.\n";
        return;
    }

    // RECONSTRUCT PATH

    vector<int> path;

    for (int curr = destination;
         curr != -1;
         curr = parent[curr]) {

        path.push_back(curr);
    }

    reverse(path.begin(), path.end());

    // DISPLAY RESULT

    cout << "\n========================================\n";
    cout << "          CALCULATED ROUTE\n";
    cout << "========================================\n";

    cout << "Total Distance: "
         << dist[destination] << " meters\n";

    cout << "Route: ";

    for (size_t i = 0; i < path.size(); i++) {

        cout << path[i];

        if (i + 1 < path.size())
            cout << " ---> ";
    }

    cout << "\n========================================\n";
}