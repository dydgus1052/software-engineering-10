#include "CompanyMember.h"
#include "Recruitment.h"
#include <vector>
using namespace std;

/**
 * recruitment�� ������ ȸ�� ȸ�� �ν��Ͻ��� ���� ä�� ���� ��Ͽ� ��� 
 * @param recruitment
 */
void CompanyMember::createRecruitment(Recruitment* recruitment) {
    this->listOfRecruitments.push_back(recruitment);
}