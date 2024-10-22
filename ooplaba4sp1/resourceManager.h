#pragma once
#include <iostream>
#include <vector>
using namespace std;

class resourceManager {
protected:
    vector<std::string> resources;

public:
    resourceManager() {
        cout << "ResourceManager created\n";
    }//�����������

    // ����� ��� ��������� �������
    void addResource(const string& resource) {
        resources.push_back(resource);
    }

    // ����� ��� ��������� ������ �������
    void printResources() const {
        cout << "Resources: \n";
        for (const auto& resource : resources) {
            cout << "- " << resource << endl;
        }
    }

    ~resourceManager() {
        cout << "ResourceManager destroyed\n";
    }//����������
};