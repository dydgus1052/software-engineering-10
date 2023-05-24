﻿#include "JoinMemberUI.h"
#include "JoinMember.h"
#include "Member.h"
#include "File.h"

JoinMemberUI::JoinMemberUI()
{

}

void JoinMemberUI::StartInterface()
{
	// GUI??? PopUp? ????, ??? ?????????? ???? ???????? ?????? ????? ????? ???? ????.
}

void JoinMemberUI::SelectJoinMember(JoinMember* joinMember, File* file)
{
	// ???? ??? ???
	std::string user_type = "";
	std::string name = "";
	std::string SSN = "";
	std::string id = "";
	std::string password = "";

	file->ifs.seekg(file->readed);
	file->ifs >> user_type >> name >> SSN >> id >> password;
	file->readed = file->ifs.tellg();

	if (joinMember->AddNewMember(user_type, name, SSN, id, password)) {
		file->ofs << "1.1. 회원가입" << '\n';

		std::cout << "1.1. 회원가입" << "\n";

		file->ofs << "> " << user_type << " " << name << " " << SSN << " " << id << " " << password << " " << '\n' << '\n';
	}
	else {
		file->ofs << "1.1. 회원가입" << '\n';

		std::cout << "1.1. 회원가입" << "\n";

		file->ofs << "> 깨져서 뭔지 모름" << '\n' << '\n';

		std::cout << "> 깨져서 뭔지 모름" << "\n";
	}
}

/*
void join()
{
	char user_type[MAX_STRING], name[MAX_STRING], SSN [[MAX_STRING], address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];

	// ??? ???? : ???, ??ι??, ID, Password?? ????κ??? ????
	fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);


	// ??? ??? ????  


	// ??? ????
	fprintf(out_fp, "1.1. ???????\n");
	fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}
*/