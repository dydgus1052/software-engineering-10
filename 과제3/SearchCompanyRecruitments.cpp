#include "SearchCompanyRecruitments.h"
#include "SearchCompanyRecruitmentsUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "Member.h"
#include "CompanyMember.h"
using namespace std;

/**
 * �⺻ ������
 */
SearchCompanyRecruitments::SearchCompanyRecruitments()
{
	this->dataBase = nullptr;
	SearchCompanyRecruitmentsUI* searchCompanyRecruitmentsUI = new SearchCompanyRecruitmentsUI();
	searchCompanyRecruitmentsUI->startInterface();
}

/**
 * dataBase�� �޾ƿ� Ŭ������ dataBase�� �����ϴ� ������
 * @param dataBase
 */
SearchCompanyRecruitments::SearchCompanyRecruitments(DataBase* dataBase)
{
	this->dataBase = dataBase;
	SearchCompanyRecruitmentsUI* searchCompanyRecruitmentsUI = new SearchCompanyRecruitmentsUI();
	searchCompanyRecruitmentsUI->startInterface();
}

/**
 * ���� �α������� ȸ������ ����� ä������ ����Ʈ�� ��ȯ
 * @return member->getRecruitmentList()
 */
vector<Recruitment*> SearchCompanyRecruitments::showCompanyRecruitments()
{
	Member* findMember = dataBase->getMemberList()[dataBase->getLogInIndex()];
	CompanyMember* member = dynamic_cast<CompanyMember*>(findMember);
	if(stoi(member->getType()) == 1)
		return member->getRecruitmentList();
}
