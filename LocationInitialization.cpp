#include "CampusGraph.cpp"

void initializeCampusData(CampusGraph& campus) {

    campus.addLocation(new LandmarkLocation(1, "Main Entrance", 590, -170, true));
    campus.addLocation(new LandmarkLocation(4, "Exit", 45, -245, true));
    campus.addLocation(new LandmarkLocation(19, "Exit 4", 65, -1005, true));
    campus.addLocation(new LandmarkLocation(24, "Exit", 1135, -875, true));
    campus.addLocation(new LandmarkLocation(36, "Exit", 1050, -100, true));

    campus.addLocation(new AcademicBlock(10, "Class 007", 845, -480, "Classroom"));
    campus.addLocation(new AcademicBlock(12, "Research Department", 915, -590, "Research"));
    campus.addLocation(new AcademicBlock(16, "Lab 10", 315, -720, "Laboratory"));
    campus.addLocation(new AcademicBlock(20, "Class 016", 390, -870, "Classroom"));
    campus.addLocation(new AcademicBlock(21, "Class 015", 580, -875, "Classroom"));
    campus.addLocation(new AcademicBlock(22, "Class 014", 775, -875, "Classroom"));
    campus.addLocation(new AcademicBlock(23, "Class 013", 950, -875, "Classroom"));
    campus.addLocation(new AcademicBlock(27, "Lab 1", 870, -755, "Laboratory"));

    campus.addLocation(new FacilityLocation(2, "Admission Enquiry", 350, -180, "Office"));
    campus.addLocation(new FacilityLocation(3, "Library", 175, -180, "Library"));
    campus.addLocation(new FacilityLocation(5, "Medical Room", 165, -300, "Medical Facility"));
    campus.addLocation(new FacilityLocation(6, "Female Staff Toilet", 115, -400, "Toilet"));
    campus.addLocation(new FacilityLocation(7, "Seminar Hall", 275, -480, "Hall"));
    campus.addLocation(new FacilityLocation(8, "Collaboration Center", 465, -480, "Center"));
    campus.addLocation(new FacilityLocation(9, "Corridor to Back", 670, -480, "Corridor"));
    campus.addLocation(new FacilityLocation(11, "Staff Room", 465, -580, "Staff Room"));
    campus.addLocation(new FacilityLocation(13, "Stairs", 690, -655, "Stairs"));
    campus.addLocation(new FacilityLocation(14, "Girls Lift", 480, -655, "Lift"));
    campus.addLocation(new FacilityLocation(15, "Boys Lift", 915, -685, "Lift"));
    campus.addLocation(new FacilityLocation(17, "Handicap Toilet", 180, -800, "Toilet"));
    campus.addLocation(new FacilityLocation(18, "Girls Toilet", 65, -875, "Toilet"));
    campus.addLocation(new FacilityLocation(25, "Faculty Room", 1010, -770, "Office"));
    campus.addLocation(new FacilityLocation(26, "Boys Toilet", 1060, -845, "Toilet"));
    campus.addLocation(new FacilityLocation(28, "Wifi-Zone", 650, -755, "Wifi Facility"));
    campus.addLocation(new FacilityLocation(29, "Meeting Hall", 965, -390, "Hall"));
    campus.addLocation(new FacilityLocation(30, "Placement Cell", 915, -205, "Office"));
    campus.addLocation(new FacilityLocation(31, "Boys Toilet", 1110, -220, "Toilet"));
    campus.addLocation(new FacilityLocation(32, "Guest Toilet", 1145, -350, "Toilet"));
    campus.addLocation(new FacilityLocation(33, "Stairs", 765, -155, "Stairs"));
    campus.addLocation(new FacilityLocation(34, "Open Audi", 620, -300, "Landmark"));
    campus.addLocation(new FacilityLocation(35, "Stairs", 425, -105, "Stairs"));
}
