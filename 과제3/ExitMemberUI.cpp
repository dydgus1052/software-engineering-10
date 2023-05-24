#include "ExitMemberUI.h"
#include "ExitMember.h"
#include "Member.h"
#include "File.h"

ExitMemberUI::ExitMemberUI()
{

}

void ExitMemberUI::StartInterface()
{
	// GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void ExitMemberUI::SelectExitMember(ExitMember* exitMember, File* file)
{
	// ���� �Է� �ޱ�
	std::string id = "";

	file->ifs.seekg(file->readed);
	file->ifs >> id;
	file->readed = file->ifs.tellg();

	if (exitMember->TryExitMember(id)) {
		file->ofs << "1.2. ȸ��Ż��" << '\n';
		file->ofs << "> " << id << " " << '\n' << '\n';
	}
	else {
		file->ofs << "1.2. ȸ��Ż��" << '\n';
		file->ofs << "ȸ��Ż�� ����" << '\n' << '\n';
	}


}