#pragma once
#include "project.h"
#include "manager.h"
using namespace std;

class customer : public person {
private:
    project* associatedProject;
    manager* projectManager;  // ���������
    char projectName[128];
    double budget;
    int projectDuration;

public:
    customer(const char* name, int age, const char* ID, const string& address, const string& position, const char* projectName, double budget, int projectDuration)
        : person(name, age, ID, address, position), budget(budget), projectDuration(projectDuration) {
        strcpy_s(this->projectName, projectName);
    }// ����������� � �����������

    void printInfo() const override {
        person::printInfo();
        cout << "Project Name: " << projectName << "\nBudget: $" << budget << "\nProject Duration: " << projectDuration << " months" << endl;
    } // ����� ��� ��������� ���������� ��� ���������

    void setBudget(double newBudget) {
        budget = newBudget;
    }// ����� ��� ���� �������

    ~customer() {
        cout << "Customer destroyed\n";
    }//����������
};