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
    // ����������� � �����������
    manager(const char* name, int age, const char* ID, const string& address, const string& position, int totalBudget, const string& resources)
        : person(name, age, ID, address, position), totalBudget(totalBudget), projectResources(resources) {}

    // ����� ��� ��������� ���������� ��� ���������
    void printInfo() const override {
        person::printInfo();
        cout << "Total Budget: $" << totalBudget << "\nResources: " << projectResources << endl;
    }

    // ����� ��� ��������� ���� �������
    void addTeam(const string& teamName) {
        teams.push_back(teamName);
    }

    // ����� ��� ��������� ������ ������
    void printTeams() const {
        cout << "Teams managed: \n";
        for (const auto& team : teams) {
            cout << "- " << team << endl;
        }
    }

    //����������
    ~manager() {
        cout << "Manager destroyed\n";
    }
};