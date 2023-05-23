#include "LogoutUI.h"
#include "Logout.h"
#include "Member.h"
#include "File.h"

LogoutUI::LogoutUI()
{
}

void LogoutUI::StartInterface()
{
    // GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void LogoutUI::SelectLogout(Logout* logout, File* file)
{
    std::string result = logout->TryLogout();
    file->ofs << "2.2. �α׾ƿ�" << '\n';
    file->ofs << "> " << result << " " << "\n" << "\n";
}