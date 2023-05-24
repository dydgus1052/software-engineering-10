#include "Recruitment.h"
#include <string>
using namespace std;

/**
 * �⺻ ������
 */
Recruitment::Recruitment()
{
	deadline = "";
	task = "";
	companyName = "";
	businessNumber = "";
	recruitmentNumber = 0;
	applyNumber = 0;
}

/**
 * task, recruitmentNumber, deadline, name, ssn�� �޾ƿ� �ν��Ͻ��� ����, �ο� ��, ��û ������, ȸ�� �̸�, ����ڹ�ȣ�� �ʱ�ȭ�ϴ� ������
 * @param task
 * @param recruitmentNumber
 * @param deadline
 * @param name
 * @param ssn
 */
Recruitment::Recruitment(string task,  string recruitmentNumber,  string deadline,  string name,  string ssn)
{
	this->task = task;
	this->recruitmentNumber =  stoi(recruitmentNumber);
	this->deadline = deadline;
	this->companyName = name;
	this->businessNumber = ssn;
	this->applyNumber = 0;
}
