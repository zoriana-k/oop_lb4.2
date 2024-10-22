#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "person.h"

class employeer : public person {
private:
    int experience;
    int taskBudget;
    vector<string> assignedTasks;

public:
    employeer(const char* name, int age, const char* ID, const std::string& address, const std::string& position, int experience, int taskBudget)
        : person(name, age, ID, address, position), experience(experience), taskBudget(taskBudget) {}// ����������� � �����������

    // ����� ��� ��������� ���������� ��� ��������
    void printInfo() const override {
        person::printInfo();
        cout << "Experience: " << experience << " years\nTask Budget: $" << taskBudget << endl;
    }

    // ����� ��� ��������� ��������
    void assignTask(const string& task) {
        assignedTasks.push_back(task);
    }

    // ����� ��� ��������� ������ �������
    void printAssignedTasks() const {
        cout << "Assigned Tasks: \n";
        for (const auto& task : assignedTasks) {
            cout << "- " << task << endl;
        }
    }

    //����������
    ~employeer() {
        cout << "Employeer destroyed\n";
    }
};