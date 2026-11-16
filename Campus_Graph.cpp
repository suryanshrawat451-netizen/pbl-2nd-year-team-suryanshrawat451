#include <iostream>
#include <vector>
#include <cmath>
#include "CampusLocation.cpp"

using namespace std;

// CAMPUS GRAPH CLASS

class CampusGraph {
private:
    int numNodes;

    vector<vector<Edge>> adjList;

    vector<CampusLocation*> locations;

public:

    // CONSTRUCTOR

    CampusGraph(int nodes)
        : numNodes(nodes),
          adjList(nodes),
          locations(nodes, nullptr) {}

    // DESTRUCTOR

    ~CampusGraph() {
        for (auto loc : locations)
            delete loc;
    }

    // ADD LOCATION

    void addLocation(CampusLocation* loc) {
        locations[loc->getId()] = loc;
    }

    // ADD PATHWAY WITH APPROXIMATE DISTANCE

    void addPathway(int u, int v) {

        double dx = locations[u]->getX() - locations[v]->getX();

        double dy = locations[u]->getY() - locations[v]->getY();

        double length = sqrt(dx * dx + dy * dy);

        int weight = round(length / 25.0);

        if (weight < 20)
            weight = 20;

        if (weight > 50)
            weight = 50;

        adjList[u].push_back({v, weight});

        adjList[v].push_back({u, weight});
    }

    // DISPLAY ALL LOCATIONS

    void displayAllLocations() const {

        cout << "\nAVAILABLE LOCATIONS\n";

        for (int i = 1; i < numNodes; i++) {

            if (locations[i] != nullptr) {

                cout << "[" << i << "] ";

                locations[i]->displayInfo();

                cout << "\n";
            }
        }
    }
};
