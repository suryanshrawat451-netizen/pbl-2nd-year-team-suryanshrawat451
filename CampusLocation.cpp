#include <iostream>
#include <string>
using namespace std;

// BASE CLASS

class CampusLocation {
protected:
    int id;
    string name;
    double x, y;

public:
    CampusLocation(int i, string n, double px, double py)
        : id(i), name(n), x(px), y(py) {}

    virtual ~CampusLocation() {}

    int getId() const { return id; }
    string getName() const { return name; }
    double getX() const { return x; }
    double getY() const { return y; }

    virtual void displayInfo() const = 0;
};

// DERIVED CLASS 1

class AcademicBlock : public CampusLocation {
private:
    string department;

public:
    AcademicBlock(int i, string n, double x, double y, string d)
        : CampusLocation(i, n, x, y), department(d) {}

    void displayInfo() const override {
        cout << "[Academic] " << name
             << " (" << department << ")";
    }
};

// DERIVED CLASS 2

class FacilityLocation : public CampusLocation {
private:
    string facilityType;

public:
    FacilityLocation(int i, string n, double x, double y, string type)
        : CampusLocation(i, n, x, y), facilityType(type) {}

    void displayInfo() const override {
        cout << "[Facility] " << name
             << " (" << facilityType << ")";
    }
};

// DERIVED CLASS 3

class LandmarkLocation : public CampusLocation {
private:
    bool accessible;

public:
    LandmarkLocation(int i, string n, double x, double y, bool a)
        : CampusLocation(i, n, x, y), accessible(a) {}

    void displayInfo() const override {
        cout << "[Landmark] " << name;

        if (accessible)
            cout << " (Accessible)";
    }
};

// EDGE STRUCTURE

struct Edge {
    int targetNode;
    int weight;
};
