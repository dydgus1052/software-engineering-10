#pragma once
#include <iostream>
using namespace std;

class DataBase;
class AddRecruitmentUI;

/**
 * ä�� ���� ��� �������̽��� ��Ʈ�� Ŭ����
 */
class AddRecruitment
{
public:
	/**
	* �⺻ ������
	 */
	AddRecruitment();

	/**
	* dataBase�� �޾ƿ� Ŭ������ dataBase�� �����ϴ� ������
	* @param dataBase
	*/
	AddRecruitment(DataBase *dataBase);

	/**
	 * ä�� ���� ��� �������̽��� �ٿ���� Ŭ������ ��ȯ
	 * @return addRecruitmentUI
	 */
	AddRecruitmentUI *getAddRecruitmentUI() { return addRecruitmentUI; }

	/**
	* task, recruitmentNumber, deadline�� �޾ƿ� ���� �α������� ȸ������ ä������ ����Ʈ�� ���
	* @param task
	* @param recruitmentNumber
	* @param deadline
	*/
	void addNewRecruitment(string task, string recruitmentNumber, string deadline);

private:
	DataBase *dataBase;
	AddRecruitmentUI *addRecruitmentUI;
};