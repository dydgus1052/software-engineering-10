#pragma once
#include <vector>
using namespace std;

class DataBase;
class SearchCompanyRecruitmentsUI;
class Recruitment;

/**
 * ��ϵ� ä�� ���� ��ȸ �������̽��� ��Ʈ�� Ŭ����
 */
class SearchCompanyRecruitments
{
public:
	/**
	* �⺻ ������
	*/
	SearchCompanyRecruitments();

	/**
	* dataBase�� �޾ƿ� Ŭ������ dataBase�� �����ϴ� ������
	* @param dataBase
	*/
	SearchCompanyRecruitments(DataBase *dataBase);

	/**
	 * ����� ä�� ���� ��ȸ �������̽��� �ٿ���� Ŭ������ ��ȯ
	 * @return searchCompanyRecruitmentsUI
	 */
	SearchCompanyRecruitmentsUI *getSearchCompanyRecruitmentsUI() { return searchCompanyRecruitmentsUI; }

	/**
	* ���� �α������� ȸ������ ����� ä������ ����Ʈ�� ��ȯ
	* @return member->getRecruitmentList()
	*/
	vector<Recruitment *> showCompanyRecruitments();

private:
	DataBase *dataBase;
	SearchCompanyRecruitmentsUI *searchCompanyRecruitmentsUI;
};
