Smart Campus Navigator System

1. Introduction

Smart Campus Navigator is a terminal-based campus navigation system developed using C++. It helps students and visitors find different locations within the college campus and calculate the shortest route between two locations.

The campus is represented using a graph where locations are nodes and pathways are edges.

2. Objectives

- To represent the college campus using a graph.
- To calculate the shortest path between two locations.
- To provide approximate distances between connected locations.
- To display step-by-step navigation directions.
- To implement Object-Oriented Programming and Data Structures in C++.

3. Technologies Used

- Programming Language: C++
- Data Structure: Graph
- Graph Representation: Adjacency List
- Algorithm: Dijkstra's Shortest Path Algorithm
- Libraries: iostream, vector, string, algorithm, climits, cmath

4. OOP Concepts

Encapsulation

Data members and member functions are organized inside classes. Private and protected access specifiers are used for data protection.

Abstraction

CampusLocation is an abstract base class containing a pure virtual function displayInfo().

Inheritance

Three derived classes inherit from CampusLocation:

- AcademicBlock
- FacilityLocation
- LandmarkLocation

Polymorphism

The virtual displayInfo() function is overridden in derived classes to display different types of campus locations.

5. DSA Concepts

Graph

Campus locations are represented as vertices, and pathways are represented as edges.

Adjacency List

A vector of vectors is used to store connections between campus locations.

Dijkstra's Algorithm

Dijkstra's algorithm is implemented to calculate the shortest path between the selected source and destination.

6. Main Features

- Display all available campus locations.
- Find the shortest path between two locations.
- Calculate approximate distances.
- Display the complete route.
- Generate step-by-step walking directions.
- Provide left and right turn instructions.
- Handle invalid user inputs.

7. Distance Calculation

The approximate distance between two connected locations is calculated using their coordinates.

The calculated distance is converted into meters and restricted to a range of 20 to 50 meters.

8. Working of the System

1. Campus locations are initialized.
2. Each location is assigned an ID, name and coordinates.
3. Different locations are connected using pathways.
4. The graph stores these connections using an adjacency list.
5. The user selects a source and destination.
6. Dijkstra's algorithm calculates the shortest route.
7. The system displays the total distance, route and walking directions.

9. Limitations

- The system is terminal-based.
- Distances are approximate.
- Locations and pathways are predefined.
- Real-time navigation is not supported.

10. Future Scope

- Development of a graphical user interface.
- Integration of an interactive campus map.
- Addition of more campus locations.
- Development of a mobile application.

11. Conclusion

The Smart Campus Navigator System demonstrates the practical implementation of Object-Oriented Programming and Data Structures using C++.

It uses inheritance, abstraction, polymorphism, graph representation and Dijkstra's algorithm to provide shortest-path navigation within a college campus.
