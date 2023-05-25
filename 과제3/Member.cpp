#include "Member.h"
#include "ApplyInfo.h"

/**
* �⺻ ������
*/
Member::Member()
{
	id = 1; // For Test
}

/**
* user_type, name, ssn, id, password���� �޾ƿ� �ʱ�ȭ�ϴ� ������
* @param user_type
* @param name
* @param ssn
* @param id
* @param password
*/
Member::Member(string user_type, string name, string ssn, string id, string password)
{
	this->user_type = user_type;
	this->name = name;
	this->ssn = ssn;
	this->id = id;
	this->password = password;
}

/**
* �α��� �� �Ű������� �޾ƿ� id, password�� �޾� ����� ���� id, password�� ���Ͽ� ��ġ ���θ� bool������ �����Ѵ�.
* @param id
* @param password
* @return
*/
bool Member::checkIdAndPassword(string id, string password)
{
	return strcmp(this->id.c_str(), id.c_str()) == 0 &&
		   strcmp(this->password.c_str(), password.c_str()) == 0;
}

/**
* �Ű������� �޾ƿ� id�� �޾� ����� ���� id�� ���Ͽ� ��ġ ���θ� bool������ �����Ѵ�.
* @param id
* @return
*/
bool Member::checkId(string id)
{
	return strcmp(this->id.c_str(), id.c_str()) == 0;
}