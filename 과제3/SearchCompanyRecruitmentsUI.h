#pragma once

class SearchCompanyRecruitments;
class File;

/**
 * ��ϵ� ä�� ���� ��ȸ �������̽��� �ٿ���� Ŭ����
 */
class SearchCompanyRecruitmentsUI
{
public:
	/**
	* �⺻ ������
	*/
	SearchCompanyRecruitmentsUI();

	/**
	* GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
	*/
	void startInterface();

	/**
	* data�� ��ȯ�� ä�� ���� ����Ʈ�� ��ȸ�ϸ� ����, �ο� ��, ��û ������ ������ ofs ���� �����Ϳ� ���
	* @param searchCompanyRecruitments
	* @param file
	*/
	void selectCompanyRecruitments(SearchCompanyRecruitments *searchCompanyRecruitments, File *file);
};