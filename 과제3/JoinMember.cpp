#include "JoinMember.h"
#include "JoinMemberUI.h"
#include "DataBase.h"
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
#include <cstring>
using namespace std;

/**
 * �⺻ ������
 */
JoinMember::JoinMember()
{
	this->dataBase = nullptr;
	joinMemberUI = new JoinMemberUI();
	joinMemberUI->startInterface();
}

/**
 * dataBase�� �޾ƿ� Ŭ������ dataBase�� �����ϴ� ������
 * @param dataBase
 */
JoinMember::JoinMember(DataBase* dataBase)
{
	this->dataBase = dataBase;
	joinMemberUI = new JoinMemberUI();
	joinMemberUI->startInterface();
}

/**
 * user_type, name, ssn, id, password�� �޾ƿ� �̹� �����ϴ� ȸ������ �ƴ����� Ȯ���ϰ� �������� ���� ��� MemberList�� �߰�
 * @param user_type
 * @param name
 * @param ssn
 * @param id
 * @param password
 * @return boolean
 */
bool JoinMember::addNewMember(string user_type,  string name,  string ssn,  string id,  string password)
{
	int i = 0;

	vector<Member*> memberList = (this->dataBase)->getMemberList();

	for (i = 0; i < memberList.size(); i++) {
		if (memberList[i]->getID() == id) {
			return false;
		}
	}

	if (stoi(user_type) == 1) {
		CompanyMember* member = new CompanyMember(user_type, name, ssn, id, password);
		dataBase->addMember(member);

	} 
	else {
		GeneralMember* member = new GeneralMember(user_type, name, ssn, id, password);
		dataBase->addMember(member);

	}
	return true;


}