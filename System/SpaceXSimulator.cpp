#include <iostream>
#include "LaunchSimulator.h"

int main() {
    LaunchSimulator *LaunchSim = new LaunchSimulator();
    int satellites = 0;
    int crew = 0;
    int cargo = 0;

    std::cout << "Please enter the amount of satellite batches (60 per batch):" << std::endl;
    std::cin >> satellites;

    std::cout << "Please enter the amount of crew that needs to be sent to the ISS:" << std::endl;
    std::cin >> crew;

    std::cout << "Please enter the amount of cargo:" << std::endl;
    std::cin >> cargo;


    LaunchSim->optimizeLaunches(satellites, crew, cargo);

    std::cout << "Ready For Test Launch, enter any character to continue:"<<endl;
    getchar();
    LaunchSim->testMode();
    LaunchSim->actualLaunch();
}

