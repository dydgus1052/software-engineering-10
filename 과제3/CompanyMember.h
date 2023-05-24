#pragma once

#include "Member.h"
#include <vector>
using namespace std;

class Recruitment;

/**
 * ȸ�� ȸ�� ��ƼƼ Ŭ����
 */
class CompanyMember : public Member {
    private:
        vector<Recruitment*> listOfRecruitments;
    public:
        /**
         * ä�� ���� ����� �ʱ�ȭ�ϴ� ������
         */
        CompanyMember() {
            listOfRecruitments.clear();
        }

        CompanyMember(string user_type, string name, string ssn, string id, string password) : Member(user_type, name, ssn, id, password) {}

        vector<Recruitment*> getRecruitmentList() { return listOfRecruitments; }

        /**
        * recruitment�� ������ ȸ�� ȸ�� �ν��Ͻ��� ���� ä�� ���� ��Ͽ� ���
        * @param recruitment
        */
        void createRecruitment(Recruitment* recruitment);

};