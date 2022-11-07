#include"overflows.h"

// "������� ��������" (include guard)
#ifndef OVERFLOWS_H

#define OVERFLOWS_H

void overflowSample()
{
	unsigned short number = USHRT_MAX; // 65535
	cout << "�������� ��i��� �� ������������ �����:\t" << number << endl;
	number += 5; //�������� ������� �������� �� 2
	cout << "�������� ��i��� �� ������������ �����:\t" << number << endl;
}

void underflowSample()
{
	signed short number = SHRT_MIN; // -32768
	cout << "�������� ��i��� �� ������������ �����:\t" << number << endl;
	number -= 10; // �������� ������� �������� �� 10
	cout << "�������� ��i��� �� ������������ �����:\t" << number << endl;
}

void overflowDoubleSample()
{
	double numberMax = DBL_MAX; //  1.7976931348623158e+308
	cout << "�������� ��i��� �� ������������ �����:\t" << numberMax << endl;
	numberMax *= 2; // �������� ������� �������� �����
	cout << "�������� ��i��� �� ������������ �����:\t" << numberMax << endl;
}

void underflowDoubleSample()
{
	double numberMin = DBL_MIN; // 2.2250738585072014e-308
	cout << "�������� ��i��� �� ������������ �����:\t" << numberMin << endl;
	numberMin -= 10; // �������� ������� �������� �� 10
	cout << "�������� ��i��� �� ������������ �����:\t" << numberMin << endl;
}

void overflowBoolSample()
{
	bool logicalValue = true;
	cout << "�������� ��i��� �� ������������ �����:\t" << logicalValue << endl;
	logicalValue += 2; // �������� ������� �������� �����
	cout << "�������� ��i��� �� ������������ �����:\t" << logicalValue << endl;
}

void underflowBoolSample()
{
	bool logicalValue = false;
	cout << "�������� ��i��� �� ������������ �����:\t" << logicalValue << endl;
	logicalValue -= 10; // �������� ������� �������� �����
	cout << "�������� ��i��� �� ������������ �����:\t" << logicalValue << endl;
}

#endif