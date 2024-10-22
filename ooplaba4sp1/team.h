#pragma once
#include "employeer.h"

class team {
private:
    employeer teamLeader; // ����������

public:
    team(const employeer& leader) : teamLeader(leader) {}    // ����������� � �����������, �� �������� ����� �������

    void printTeamLeader() const {
        cout << "Team leader: ";
        teamLeader.printInfo();
    }// ����� ��� ��������� ���������� ��� ����� �������
};