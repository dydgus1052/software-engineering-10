//#include "StatisticsApplyInformationUI.h"
//#include "StatisticsApplyInformation.h"
//#include "File.h"
//#include "Recruitment.h"
//#include <vector>
//
//StatisticsApplyInformationUI::StatisticsApplyInformationUI()
//{
//
//}
//
//void StatisticsApplyInformationUI::StartInterface()
//{
//	// GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
//}
//
//void StatisticsApplyInformationUI::SelectStatisticsApplyInformation(StatisticsApplyInformation* statisticsApplyInformation, File* file)
//{
//	std::vector<Recruitment*> data = statisticsApplyInformation->ShowMemberRecruitment();
//
//	file->ofs << "5.1. ���� ���� ���" << '\n';
//	for (Recruitment* recuitment : data)
//	{
//		if (recruitment->GetTotalSales() > 0)
//		{
//			file->ofs << "> " << recruitment->GetRecruitName() << " " << recruitment->GetPrice() * recruitment->GetTotalSales() << " " << floor(recruitment->GetAverageSatisfaction() + 0.5) << '\n';
//		}
//	}
//	file->ofs << '\n';
//}