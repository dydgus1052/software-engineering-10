#include "AddRecruitment.h"
#include "AddRecruitmentUI.h"
#include "DataBase.h"
#include "Recruitment.h"
#include "Member.h"
#include "CompanyMember.h"
using namespace std;

/**
 * �⺻ ������
 */
AddRecruitment::AddRecruitment()
{
	this->dataBase = nullptr;
	addRecruitmentUI = new AddRecruitmentUI();
	addRecruitmentUI->startInterface();
}

/**
 * dataBase�� �޾ƿ� Ŭ������ dataBase�� �����ϴ� ������
 * @param dataBase
 */
AddRecruitment::AddRecruitment(DataBase *dataBase)
{
	this->dataBase = dataBase;
	addRecruitmentUI = new AddRecruitmentUI();
	addRecruitmentUI->startInterface();
}

/**
 * task, recruitmentNumber, deadline�� �޾ƿ� ���� �α������� ȸ������ ä������ ����Ʈ�� ���
 * @param task
 * @param recruitmentNumber
 * @param deadline
 */
void AddRecruitment::addNewRecruitment(string task, string recruitmentNumber, string deadline)
{
	Member *findMember = dataBase->getMemberList()[dataBase->getLogInIndex()];
	CompanyMember *member = dynamic_cast<CompanyMember *>(findMember);
	if (stoi(member->getType()) == 1)
	{
		string name = member->getName();
		string ssn = member->getSSN();
		Recruitment *newRecruitment = new Recruitment(task, recruitmentNumber, deadline, name, ssn);
		member->createRecruitment(newRecruitment);
	}
}