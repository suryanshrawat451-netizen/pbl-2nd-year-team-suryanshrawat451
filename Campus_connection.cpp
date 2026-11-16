#include "CampusGraph.cpp"

// CAMPUS CONNECTION INITIALIZATION

void initializeCampusConnections(CampusGraph& campus) {

    campus.addPathway(1, 2);
    campus.addPathway(1, 33);
    campus.addPathway(1, 34);
    campus.addPathway(1, 35);

    campus.addPathway(2, 3);
    campus.addPathway(2, 34);
    campus.addPathway(2, 35);

    campus.addPathway(3, 4);
    campus.addPathway(3, 5);

    campus.addPathway(4, 5);

    campus.addPathway(5, 6);
    campus.addPathway(5, 7);

    campus.addPathway(6, 7);
    campus.addPathway(6, 34);

    campus.addPathway(7, 8);
    campus.addPathway(7, 11);
    campus.addPathway(7, 34);

    campus.addPathway(8, 9);
    campus.addPathway(8, 34);

    campus.addPathway(9, 10);
    campus.addPathway(9, 11);
    campus.addPathway(9, 13);
    campus.addPathway(9, 14);
    campus.addPathway(9, 34);

    campus.addPathway(10, 12);
    campus.addPathway(10, 29);

    campus.addPathway(11, 15);
    campus.addPathway(11, 31);

    campus.addPathway(12, 15);

    campus.addPathway(14, 16);
    campus.addPathway(14, 28);

    campus.addPathway(15, 27);

    campus.addPathway(16, 17);
    campus.addPathway(16, 20);

    campus.addPathway(17, 18);
    campus.addPathway(17, 19);
    campus.addPathway(17, 20);

    campus.addPathway(18, 19);
    campus.addPathway(18, 20);

    campus.addPathway(19, 20);

    campus.addPathway(20, 21);

    campus.addPathway(21, 22);
    campus.addPathway(21, 28);

    campus.addPathway(22, 23);
    campus.addPathway(22, 28);

    campus.addPathway(23, 24);
    campus.addPathway(23, 25);
    campus.addPathway(23, 26);
    campus.addPathway(23, 27);
    campus.addPathway(23, 28);

    campus.addPathway(24, 26);

    campus.addPathway(25, 27);

    campus.addPathway(27, 28);

    campus.addPathway(29, 30);
    campus.addPathway(29, 31);
    campus.addPathway(29, 32);
    campus.addPathway(29, 34);

    campus.addPathway(30, 31);
    campus.addPathway(30, 32);
    campus.addPathway(30, 33);
    campus.addPathway(30, 34);
    campus.addPathway(30, 36);

    campus.addPathway(33, 34);
}
