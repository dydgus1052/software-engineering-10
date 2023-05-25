#pragma once
#include "Member.h"

class JoinMember;
class File;
/**
 * ȸ������ �������̽��� �ٿ���� Ŭ����
 */
class JoinMemberUI
{
public:
	/**
	* �⺻ ������
	*/
	JoinMemberUI();

	/**
	* GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
	*/
	void startInterface();

	/**
	* file Ŭ������ ���� ���� ifs ���� �����͸� �о� user_type, name, SSN, id, password ������ ��Ʈ�� Ŭ������ �����ϰ�, ������ ������ ofs ���� �����Ϳ� ���
	* @param joinmember
	* @param file
	*/
	void selectJoinMember(JoinMember *joinmember, File *file);

private:
	JoinMember *joinMember;
};