//
// Created by Mariana on 31/10/2017.
//

#ifndef AEDA_FEUP_PROJECT_APPLICATION_H
#define AEDA_FEUP_PROJECT_APPLICATION_H

#include <iostream>
#include <vector>
#include "helper.h"
#include "Company.h"

using namespace std;

class Application {

private:
    Company company;
    bool passengersChanged;
    bool airplanesChanged;
    string passengersFilepath;
    string airplanesFilepath;

public:
    Application();

    //menus
    void mainMenu();
    void filesMenu();
    void passengersMenu();
    void airplanesMenu();
    void flightsMenu();
    void bookingsMenu();

    //passenger fucntions
    void passengerShow();
    void passengerCreate();
    void passengerDelete();
    void passengerUpdateMenu();
    void printSummaryPassenger();
    int choosePassenger();

    //airplane functions
    void airplaneShow();
    void airplaneCreate();
    void airplaneDelete();
    void airplaneUpdateMenu();
    void printSummaryAirplane();
    int chooseAirplane();
};


#endif //AEDA_FEUP_PROJECT_APPLICATION_H
