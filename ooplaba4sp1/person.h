#pragma once
#include <cstring>
#include <iostream>
using namespace std;

class person {
protected:
    char name[128];
    int age;
    char ID[64];
    string address; 
    string position; 
    bool isAvailable;

public:
    // ����������� � �����������
    person(const char* name, int age, const char* ID, const string& address, const string& position)
        : age(age), address(address), position(position), isAvailable(true) {
        strcpy_s(this->name, name);
        strcpy_s(this->ID, ID);
    }

    // ������ ������� �� ���������� ���� (getter & setter)
    bool getAvailability() const {
        return isAvailable;
    }

    void setAvailability(bool availability) {
        isAvailable = availability;
    }

    // ³������� ������ ��� �������������� � �������� ������
    virtual void printInfo() const {
        cout << "Name: " << name << "\nAge: " << age << "\nContact: " << ID << "\nAddress: " << address << "\nPosition: " << position << endl;
    }

    // �������� ����� ��� ���� ���
    void updateContactInfo(const char* newID) {
        strcpy_s(this->ID, newID);
    }

    // ����������
    virtual ~person() {
        cout << "Person destroyed\n";
    }
};