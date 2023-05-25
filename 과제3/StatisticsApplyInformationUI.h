#pragma once

class StatisticsApplyInformation;
class File;

/**
 * ���������� �������̽��� �ٿ���� Ŭ����
 */

class StatisticsApplyInformationUI
{
public:
	/**
	* �⺻ ������
	*/
	StatisticsApplyInformationUI();

	/**
	* GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
	*/
	void startInterface();

	/**
	* file Ŭ������ ���� ���� ifs ���� �����͸� �о� ��� ������ ��Ʈ�� Ŭ������ �����ϰ�, ������ ������ ofs ���� �����Ϳ� ���
	* @param statisticsApplyInformation
	* @param file
	*/
	void selectStatisticsApplyInformation(StatisticsApplyInformation *statisticsApplyInformation, File *file);
};
