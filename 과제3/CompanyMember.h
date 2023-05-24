#pragma once

#include "Member.h"
#include <vector>

class Recruitment;

class CompanyMember : public Member {
    private:
        vector<Recruitment*> listOfRecruitments;
    public:
        CompanyMember() {
            listOfRecruitments.clear();
        }
        CompanyMember(string user_type, string name, string ssn, string id, string password) : Member(user_type, name, ssn, id, password) {}

        vector<Recruitment*> getRecruitmentList() { return listOfRecruitments; }

}