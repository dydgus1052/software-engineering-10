#pragma once
#include <iostream>
using namespace std;

class DataBase;
class JoinMemberUI;

/**
 * ȸ������ �������̽��� ��Ʈ�� Ŭ����
 */
class JoinMember
{
public:
	/**
	* �⺻ ������
	 */
	JoinMember();

	/**
	* dataBase�� �޾ƿ� Ŭ������ dataBase�� �����ϴ� ������
	* @param dataBase
	*/
	JoinMember(DataBase *dataBase);

	/**
	 * ȸ������ �������̽��� �ٿ���� Ŭ������ ��ȯ
	 * @return joinMemberUI
	 */
	JoinMemberUI *getJoinMemberUI() { return joinMemberUI; }


	/**
	* user_type, name, SSN, id, password�� �޾ƿ� ���� �α������� ȸ������ ä������ ����Ʈ�� ���
	* @param user_type
	* @param name
	* @param SSN
	* @param id
	* @param password
	* @param boolean
	*/
	bool addNewMember(string user_type, string name, string SSN, string id, string password);

private:
	DataBase *dataBase;
	JoinMemberUI *joinMemberUI;
};
