#pragma once
#include "manager.h"
#include <iostream>
using namespace std;

class projectController : private manager {
private:
    int projectProgress; // ³������ �������� �������

public:
    // ����������� � �����������
    projectController(const char* name, int age, const char* ID, const string& address, const string& position, int totalBudget, const string& resources, int progress)
        : manager(name, age, ID, address, position, totalBudget, resources), projectProgress(progress) {
        cout << "ProjectController created\n";
    }

    // ������������ ������ �������� ����� ����� �������� using
    using manager::printInfo;
    using manager::addTeam;

    // ����� ��� ��������� ���������� ��� ������� �������
    void printProjectProgress() const {
        cout << "Project Progress: " << projectProgress << "%" << endl;
    }

    //����������
    ~projectController() {
        cout << "ProjectController destroyed\n";
    }
};
