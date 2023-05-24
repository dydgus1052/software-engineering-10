#include "ApplyRecruitmentUI.h"
#include "ApplyRecruitment.h"
#include "File.h"
#include "Recruitment.h"
#include "Member.h"
#include "DataBase.h"

using namespace std;

ApplyRecruitment::ApplyRecruitment()
{
	this->dataBase = nullptr;
	ApplyRecruitmentUI* applyRecruitmentUI = new ApplyRecruitmentUI();
	applyRecruitmentUI->startInterface();
}

ApplyRecruitment::ApplyRecruitment(DataBase* dataBase)
{
	this->dataBase = dataBase;
	ApplyRecruitmentUI* applyRecruitmentUI = new ApplyRecruitmentUI();
	applyRecruitmentUI->startInterface();
}

Recruitment* ApplyRecruitment::applyRecruitment(string businessNumber)
{
	Member* loginMember = dataBase->GetMemberList()[dataBase->GetLogInIndex()];

	vector<Member*> companyMemberList = this->dataBase->GetMemberList();

	for (int i = 0; i < companyMemberList.size(); i++)
	{
		if (companyMemberList[i]->getUserType() == "1")
		{
			vector<Recruitment*> listOfRecruitments = companyMemberList[i]->GetRecruitmentList();

			for (int j = 0; j < listOfRecruitments.size(); j++)
			{
				if (listOfRecruitments[j]->BusinessNumber() == businessNumber)
				{
					listOfRecruitments[j]->setRecruitmentNumber();
					return listOfRecruitments[j];
				}

			}
		}
	}
}