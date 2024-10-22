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
}// функція поза межами класу

void processProject(const project* p) {
    if (p) {
        cout << "Processing project: " << p->name << endl;
        cout << "Customer: " << p->customer << endl;
        cout << "Budget: " << p->budget << endl;
    }
}//перевантажена функція

void processProjectPointer(const project* p) {
    cout << "Processing project by pointer: " << p->name << endl;
    cout << "Customer: " << p->customer << endl;
    cout << "Budget: " << p->budget << endl;
}//функція з вказівником

project createNewProject(const char* name, const char* customer, int budget) {
    project p;
    strcpy_s(p.name, name);
    strcpy_s(p.customer, customer);
    p.budget = budget;
    return p;
}// функція для створення нового об'єкта проекту і повернення його

int main() {
    projectController projCtrl("Petruk Kateryna", 26, "Petryk", "123 Maple St", "Project Controller", 200000, "Hardware, Software", 75);
    projCtrl.printInfo();
    projCtrl.printProjectProgress();// рорбота з projectController

    teamLeader teamLead("Solodyuk Andrii", 30, "Suslik", "456 Elm St", "Team Leader", 5, 10000, "Tales");
    teamLead.addResource("Server");
    teamLead.addResource("Database");
    teamLead.printInfo(); // Створюємо об'єкт TeamLeader

    customer cust("Zotova Alina", 33, "KvaCommision", "789 Oak St", "Customer", "New Website", 15000, 6);
    cust.printInfo(); // Створюємо об'єкт Customer

    employeer emp("Suska Nadia", 28, "Angel", "101 Pine St", "Developer", 3, 5000);// Додати Employeer до проекту
    projCtrl.addTeam("Tales");
    team devTeam(emp);    // Створюємо об'єкт Team і передаємо лідера
    devTeam.printTeamLeader();    // Виводимо інформацію про лідера команди

    return 0;
}
