#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "person.h"

class manager : public person {
private:
    int totalBudget;
    vector<string> teams;
    string projectResources; 

public:
    // Конструктор з параметрами
    manager(const char* name, int age, const char* ID, const string& address, const string& position, int totalBudget, const string& resources)
        : person(name, age, ID, address, position), totalBudget(totalBudget), projectResources(resources) {}

    // Метод для виведення інформації про менеджера
    void printInfo() const override {
        person::printInfo();
        cout << "Total Budget: $" << totalBudget << "\nResources: " << projectResources << endl;
    }

    // Метод для додавання нової команди
    void addTeam(const string& teamName) {
        teams.push_back(teamName);
    }

    // Метод для виведення списку команд
    void printTeams() const {
        cout << "Teams managed: \n";
        for (const auto& team : teams) {
            cout << "- " << team << endl;
        }
    }

    //Деструктор
    ~manager() {
        cout << "Manager destroyed\n";
    }
};