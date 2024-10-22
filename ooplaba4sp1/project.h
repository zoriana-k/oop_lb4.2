#pragma once
#include "employeer.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class project {
public:
    static int totalBudget; 
    char name[256];
    char customer[256];
    int budget;
    vector<employeer> team;

    project() : name(""), customer(""), budget(0) {}

    project(const char* name, const char* customer, int budget) : budget(budget) {
        strcpy_s(this->name, name);
        strcpy_s(this->customer, customer);
    }

    project(const project& other) {
        strcpy_s(this->name, other.name);
        strcpy_s(this->customer, other.customer);
        this->budget = other.budget;
    }//������������

    ~project() {
        cout << "Project destroyed\n";
    }//����������

    static void increaseTotalBudget(int amount) {
        totalBudget += amount;
    }//����� � ��������

    static void printTotalBudget() {
        cout << "Total Project Budget: " << totalBudget << endl;
    }//��������� �������

    void printInfo() const {
        cout << "Project Name: " << name << endl;
        cout << "Customer: " << customer << endl;
        cout << "Budget: " << budget << endl;
    }//��������� ����������

    void addEmployeer(const employeer& e) {
        team.push_back(e);
    }//������ ���������� � �������

    void printTeam() const {
        cout << "Team Members:\n";
        for (const auto& emp : team) {
            emp.printInfo();
        }
    }//������� �������

private:
    char manager[256];
    char teams[128];
    char employeers[1028];
    char tasks[5086];
    char resources[5086];
};