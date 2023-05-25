#pragma once
#include <vector>
#include <string>
using namespace std;

class Member;

/**
 * ��� Ŭ������ �ݷ��� Ŭ����
 */
class DataBase
{
public:
	/**
	 * �⺻ ������. ��� ����Ʈ�� �ʱ�ȭ�ϰ� ���� �α����� ����� �ε����� -1�� ������ �ʱ� ���¸� �˸�
	 */
	DataBase();

	vector<Member *> getMemberList() { return memberList; }

	/**
	 * ���� �α����� ����� ����Ʈ�� �ε����� ��ȯ
	 * @return logInIndex 
	 */
	int getLogInIndex() { return logInIndex; }

	/**
	 * ���� �α����� ����� ����Ʈ�� index��° ȸ������ ����
	 */
	void setLogInIndex(int index) { logInIndex = index; } // For Test

	/**
	 * ��� ����Ʈ���� index�� �ش��ϴ� ����� ����
	 * @param index
	 */
	void deleteMember(int index) { memberList.erase(memberList.begin() + index); }

	/**
	 * ��� ����Ʈ�� �Ű������� �޾ƿ� member�� �߰�.
	 */
	void addMember(Member *member) { memberList.push_back(member); } // For Test

private:
	vector<Member *> memberList;

	int logInIndex;
};