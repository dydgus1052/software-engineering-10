#pragma once
#include <fstream>
using namespace std;

/**
 * ���� ������ ���� Ŭ����
 */
class File
{
public:
	/**
	 * ���� ������ ������. input.txt�� output.txt�� ���� �����͸� �����Ѵ�
	 */
	File();

public:
	ifstream ifs;
	ofstream ofs;

	int readed = 0;
};