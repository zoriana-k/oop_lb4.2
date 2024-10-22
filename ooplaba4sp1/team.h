#pragma once
#include "employeer.h"

class team {
private:
    employeer teamLeader; // Композиція

public:
    team(const employeer& leader) : teamLeader(leader) {}    // Конструктор з параметрами, що ініціалізує лідера команди

    void printTeamLeader() const {
        cout << "Team leader: ";
        teamLeader.printInfo();
    }// Метод для виведення інформації про лідера команди
};