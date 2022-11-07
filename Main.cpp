// ϳ�������� �� �������� �����
// �� ��������� ������ �����
// � ���� ����������� ������������
#include"all_samples.h"
#include <string>
#include <iostream>

// ��������� ��� ��������� 
// ����� ����� �������:
using std::string;	// �������� ���� ����� "�����"
using std::cout;	// ���� ��� ��������� ������
using std::endl;	// ������ �������� �� ����� �����



void laptopInformationModel()
{
	// ����� ��������
	string laptopName = "ASUS";
	// г� �������
	unsigned int dataRelease = 2019;
	// ����� ������������
	unsigned short int usePeriod = 1;
	// ����� ��������
	string madeIn = "�����";
	// �� ������ �������?
	bool isWorking = true;
	// ³��������
	string vCard = "RTX 3090";
	// �������� ��������
	string cpu = "I-5 11500";
	//��'�� ���������� �����
	string vRam = "16 GB";



		// ��������� ��'�� ���'�� (� ������) ���������� ��� 
		// ��������� ��������� ��� �������
		unsigned int totalMemoryInBytes = sizeof(laptopName) +
		sizeof(dataRelease) +
		sizeof(usePeriod) + 
		sizeof(madeIn) +
		sizeof(isWorking) +
		sizeof(vCard) +
		sizeof(cpu) +
		sizeof(vRam);

	cout << "����� ��������:\t\t" << laptopName << endl;
	cout << "г� �������:\t\t\t" << dataRelease << endl;
	cout << "����� �����������:\t" << usePeriod << endl;
	cout << "������������ � ���� :\t\t" << madeIn << endl;
	cout << "������ �������?:\t\t" << isWorking << endl;
	cout << "³��������:\t" << (vCard) << endl;
	cout << "��������:\t\t\t" << cpu << endl;
	cout << "��'�� ���������� �����:\t" << vRam << endl;
	cout << "��������� ��'�� ������������ ���'��i (� ������):\t" << totalMemoryInBytes << endl;
}

// ������� ������� 
int main(int argumentsCount,		 	// ������� ���������, �� ������� ����������
	char* argumentsValues[],		// �������� ���������, �� ������� ����������
	char* environmentParameters[]  // ���� ��������, ��� ��������� �����������
)
{

	// �������� ������� ���������
	// (���� �� ������������ ������������, 
	// ����� �� ������, ������ ���� � �.�.)
	setlocale(LC_ALL, "");

	overflowSample();
	underflowSample();
	overflowDoubleSample();
	underflowDoubleSample();
	overflowBoolSample();
	underflowBoolSample();

	cout << endl;
	laptopInformationModel();

	// �������� ���� ���������� 
	// ������� ����-��� ������, ��� 
	// ������� ��������
	getchar();

	return 0;
}