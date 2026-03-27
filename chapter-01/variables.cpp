#include <iostream>
#include <string>


/*

Variables Challenge — Drone Sensor Data
You are writing a small program that stores and displays data collected from a drone's onboard sensors after a short test flight.
Your program must:
Store the following information in correctly typed and initialized variables:
- Drone name
- Maximum altitude reached (in meters, with decimal precision)
- Flight duration (in whole seconds)
- Battery level remaining (as a percentage, with decimal precision)
- Whether the flight was successful (true or false)
- Number of satellites connected during flight
Then print a clean flight report to the console that looks exactly like this:
===== Drone Flight Report =====
Drone name      : Falcon-X1
Max altitude    : 142.5 m
Flight duration : 187 seconds
Battery left    : 63.4 %
Satellites      : 9
Flight status   : Successful
================================

*/


int main()

{
   
    std::string droneName {"Falcon-X1"};
    double maxAlt         {142.5};
    int flightDuration    {187};
    double batteryLeft    {63.4};
    int sat               {9};
    bool  flightStat       {true};
    std::cout << "===== Drone Flight Report =====\n";
    std::cout<<"Drone name      : "<<droneName<<"\n";
    std::cout<<"Max altitude    : "<<maxAlt<<" m\n";
    std::cout<<"Flight duration : "<<flightDuration<<" seconds\n";
    std::cout<<"Battery Left    : "<<batteryLeft<<" %\n";
    std::cout<<"Satellites      : "<<sat<<"\n";
    std::cout <<"Flight status   : "<< (flightStat ? "Successful" : "Failed")<<"\n";
    std::cout << "================================\n";

    return 0;
}