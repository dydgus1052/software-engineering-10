#pragma once

class AddRecruitment;
class File;

/**
 * ä�� ���� ��� �������̽��� �ٿ���� Ŭ����
 */
class AddRecruitmentUI
{
public:
	/**
	* �⺻ ������
	*/
	AddRecruitmentUI();

	/**
	* GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
	*/
	void startInterface();

	/**
	* file Ŭ������ ���� ���� ifs ���� �����͸� �о� task, recruitmentNumber, deadline ������ ��Ʈ�� Ŭ������ �����ϰ�, ������ ������ ofs ���� �����Ϳ� ���
	* @param AddRecruitment
	* @param file
	*/
	void createNewRecruitment(AddRecruitment *Addrecruitment, File *file);
};