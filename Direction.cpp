#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

// TURN ANGLE CALCULATION

double calculateTurnAngle(
    double ax, double ay,
    double bx, double by,
    double cx, double cy
) {
    double d1x = bx - ax;
    double d1y = by - ay;

    double d2x = cx - bx;
    double d2y = cy - by;

    double cross = d1x * d2y - d1y * d2x;

    double dot = d1x * d2x + d1y * d2y;

    const double PI = 3.14159265358979323846;

    return atan2(cross, dot) * 180.0 / PI;
}

// TURN INSTRUCTIONS

string getTurnText(double angle) {

    double a = fabs(angle);

    string side = (angle > 0) ? "left" : "right";

    if (a < 20)
        return "continue straight";

    if (a < 60)
        return "take a slight " + side;

    if (a < 120)
        return "turn " + side;

    if (a < 165)
        return "take a sharp " + side;

    return "make a U-turn";
}

// DISPLAY STEP-BY-STEP DIRECTIONS

void displayDirections(const vector<string>& locations,
                       const vector<int>& distances) {

    cout << "\nSTEP-BY-STEP DIRECTIONS\n";
    cout << "----------------------------------------\n";

    if (locations.empty())
        return;

    if (locations.size() == 1) {
        cout << "You are already at "
             << locations[0] << "!\n";
        return;
    }

    int step = 1;

    for (size_t i = 0; i < distances.size(); i++) {

        cout << "Step " << step++ << ": ";

        cout << "Walk for " << distances[i]
             << " meters to reach "
             << locations[i + 1] << ".\n";
    }

    cout << "Step " << step
         << ": You have arrived at "
         << locations.back() << "!\n";
}
