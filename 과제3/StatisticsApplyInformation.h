#pragma once
#include <vector>
#include "StatisticsApplyInformationUI.h"
#include <map>
#include <string>
using namespace std;

class DataBase;
class StatisticsApplyInformation;
class Recruitment;

/**
 * ä�� ���� ��� �������̽��� ��Ʈ�� Ŭ����
 */
class StatisticsApplyInformation
{
public:

	/**
	* �⺻ ������
	*/
	StatisticsApplyInformation();

	/**
	* dataBase�� �޾ƿ� Ŭ������ dataBase�� �����ϴ� ������
	* @param dataBase
	*/
	StatisticsApplyInformation(DataBase *dataBase);

	/**
	 * ä�� ���� ��� �������̽��� �ٿ���� Ŭ������ ��ȯ
	 * @return statisticsApplyInformationUI
	 */
	StatisticsApplyInformationUI *getStatisticsApplyInformationUI() { return statisticsApplyInformationUI; }

	/**
	* ����ĺ��� �޾ƿ� ���� �α������� ȸ������ ��� ����Ʈ�� ���
	* @param &taskCountMap
	*/
	void showStaticsApplyInformation(map<string, int> &taskCountMap);

private:
	DataBase *dataBase;
	StatisticsApplyInformationUI *statisticsApplyInformationUI;
};
