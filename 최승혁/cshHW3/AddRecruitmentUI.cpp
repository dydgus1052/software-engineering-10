#include "AddRecruitmentUI.h"
#include "AddRecruitment.h"
#include "File.h"

AddRecruitmentUI::AddRecruitmentUI()
{

}

void AddRecruitmentUI::StartInterface()
{
	// GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void AddRecruitmentUI::createNewRecruitment(AddRecruitment* AddRecruitment, File* file)
{
	// ���� �Է� �ޱ�
	std::string task = "";
	std::string recruitmentNumber = "";
	std::string deadline = "";

	file->ifs.seekg(file->readed);
	file->ifs >> task >> recruitmentNumber >> deadline;
	file->readed = file->ifs.tellg();

	AddRecruitment->AddNewRecruitment(task, recruitmentNumber, deadline);

	file->ofs << "3.1. ä�� ���� ���" << '\n';

	std::cout << "3.1. ä�� ���� ���" << '\n';

	file->ofs << "> " << task << " " << recruitmentNumber << " " << deadline << '\n' << '\n';

	std::cout << "> task" << task << " recruitmentNum" << recruitmentNumber << " deadline" << deadline << '\n' << '\n';

}