#pragma once
#include <iostream>
#include <vector>
#include "Recruitment.h"
#include "DataBase.h"
#include "ApplyInfo.h"
#include <cstring>
using namespace std;

/**
 * ȸ�� ��ƼƼ Ŭ����
 */
class Member
{
public:
	/**
	 * �⺻ ������
	 */
	Member();

	/**
	 * user_type, name, ssn, id, password���� �޾ƿ� �ʱ�ȭ�ϴ� ������
	 * @param user_type
	 * @param name
	 * @param ssn
	 * @param id
	 * @param password
	 */
	Member(string user_type,  string name,  string ssn,  string id,  string password);

	/**
	 * �α��� �� �Ű������� �޾ƿ� id, password�� �޾� ����� ���� id, password�� ���Ͽ� ��ġ ���θ� bool������ �����Ѵ�.
	 * @param id
	 * @param password
	 * @return 
	 */
	bool checkIdAndPassword(string id, string password);

	/**
	 * �Ű������� �޾ƿ� id�� �޾� ����� ���� id�� ���Ͽ� ��ġ ���θ� bool������ �����Ѵ�.
	 * @param id
	 * @return 
	 */
	bool checkId(string id);
	//void CheckLogInInfo();

	string getID() {
		return id; }
	string getSSN() {
		return ssn; }
	string getPassword() {
		return password; }
	string getName() {
		return name;
	}
	string getType() {
		return user_type;
	}
	void setUserType(string newUserType) {
		this->user_type = newUserType;
	}

	void setName(string name) {
		this->name = name;
	}

	void setSsn(string ssn) {
		this->ssn = ssn;
	}

	void setId(string id) {
		this->id = id;
	}

	void setPassword(string password) {
		this->password = password;
	}

	/**  
	 * ȸ�� Ŭ������ �ּ� �ϳ��� virtual �Լ��� ���� �ϱ� ���� ���� dummy �Լ�
	 */
	virtual void toPoly() {
		cout << "Parent"
	}

private:
	string user_type;
	string name;
	string ssn;
	string id;
	string password;
};