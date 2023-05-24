#pragma once
#include <iostream>
using namespace std;

/**
 * ä�� ���� ��ƼƼ Ŭ����
 */
class Recruitment
{
public:
	/**
	* �⺻ ������
	*/
	Recruitment();

	/**
	* task, recruitmentNumber, deadline, name, ssn�� �޾ƿ� �ν��Ͻ��� ����, �ο� ��, ��û ������, ȸ�� �̸�, ����ڹ�ȣ�� �ʱ�ȭ�ϴ� ������
	* @param task
	* @param recruitmentNumber
	* @param deadline
	* @param name
	* @param ssn
	*/
	Recruitment(string task, string recruitmentNumber, string deadline, string name, string ssn);

	void setMemberID(string MemberID) { this->MemberID = MemberID; }

	string getDeadline() { return deadline; }
	string getTask() { return task; }
	string getCompanyName() { return companyName; }
	int getRecruitmentNumber() { return recruitmentNumber; }
	int getApplyNumber() { return applyNumber; }
	string getBusinessNumber() { return businessNumber; }

	void setRecruitmentNumber() { this->recruitmentNumber++; }

private:
	string MemberID;
	string deadline;
	string task;
	string companyName;
	string businessNumber;
	int recruitmentNumber;
	int applyNumber;
};
