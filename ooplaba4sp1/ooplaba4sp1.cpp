#include <iostream>
#include "manager.h"
#include "project.h"
#include "customer.h"
#include "employeer.h"
#include "team.h"
#include "resourceManager.h"
#include "teamLeader.h"
#include "projectController.h"

void processProject(const project& p) {
    cout << "Processing project: " << p.name << endl;
    cout << "Customer: " << p.customer <<endl;
    cout << "Budget: " << p.budget << endl;
}// ������� ���� ������ �����

void processProject(const project* p) {
    if (p) {
        cout << "Processing project: " << p->name << endl;
        cout << "Customer: " << p->customer << endl;
        cout << "Budget: " << p->budget << endl;
    }
}//������������� �������

void processProjectPointer(const project* p) {
    cout << "Processing project by pointer: " << p->name << endl;
    cout << "Customer: " << p->customer << endl;
    cout << "Budget: " << p->budget << endl;
}//������� � ����������

project createNewProject(const char* name, const char* customer, int budget) {
    project p;
    strcpy_s(p.name, name);
    strcpy_s(p.customer, customer);
    p.budget = budget;
    return p;
}// ������� ��� ��������� ������ ��'���� ������� � ���������� ����

int main() {
    projectController projCtrl("Petruk Kateryna", 26, "Petryk", "123 Maple St", "Project Controller", 200000, "Hardware, Software", 75);
    projCtrl.printInfo();
    projCtrl.printProjectProgress();// ������� � projectController

    teamLeader teamLead("Solodyuk Andrii", 30, "Suslik", "456 Elm St", "Team Leader", 5, 10000, "Tales");
    teamLead.addResource("Server");
    teamLead.addResource("Database");
    teamLead.printInfo(); // ��������� ��'��� TeamLeader

    customer cust("Zotova Alina", 33, "KvaCommision", "789 Oak St", "Customer", "New Website", 15000, 6);
    cust.printInfo(); // ��������� ��'��� Customer

    employeer emp("Suska Nadia", 28, "Angel", "101 Pine St", "Developer", 3, 5000);// ������ Employeer �� �������
    projCtrl.addTeam("Tales");
    team devTeam(emp);    // ��������� ��'��� Team � �������� �����
    devTeam.printTeamLeader();    // �������� ���������� ��� ����� �������

    return 0;
}
