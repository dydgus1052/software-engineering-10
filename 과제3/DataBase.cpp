#include "DataBase.h"
#include "Member.h"

/**
 * �⺻ ������. ��� ����Ʈ�� �ʱ�ȭ�ϰ� ���� �α����� ����� �ε����� -1�� ������ �ʱ� ���¸� �˸�
 */
DataBase::DataBase()
{
	logInIndex = -1;
	memberList.clear();
}