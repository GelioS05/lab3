// Підключити всі необхідні файли
// за допомогою одного файла
// з усіма необхідними компонентами
#include"all_samples.h"
#include <string>
#include <iostream>

// підключити для поточного 
// файла тільки функції:
using std::string;	// підтримка типу даних "рядок"
using std::cout;	// потік для виведення тексту
using std::endl;	// символ переводу на новий рядок



void laptopInformationModel()
{
	// Назва ноутбука
	string laptopName = "ASUS";
	// Рік випуску
	unsigned int dataRelease = 2019;
	// Термін експлуатації
	unsigned short int usePeriod = 1;
	// Країна виробник
	string madeIn = "Китай";
	// Чи працює ноутбук?
	bool isWorking = true;
	// Відеокарта
	string vCard = "RTX 3090";
	// Процесор ноутбука
	string cpu = "I-5 11500";
	//Об'єм оперативної памяті
	string vRam = "16 GB";



		// Загальний об'єм пам'яті (в байтах) необхідний для 
		// зберігання відомостей про ноутбук
		unsigned int totalMemoryInBytes = sizeof(laptopName) +
		sizeof(dataRelease) +
		sizeof(usePeriod) + 
		sizeof(madeIn) +
		sizeof(isWorking) +
		sizeof(vCard) +
		sizeof(cpu) +
		sizeof(vRam);

	cout << "Назва ноутбука:\t\t" << laptopName << endl;
	cout << "Рік випуску:\t\t\t" << dataRelease << endl;
	cout << "Період викристання:\t" << usePeriod << endl;
	cout << "Виготовлений в країні :\t\t" << madeIn << endl;
	cout << "Робоий ноутбук?:\t\t" << isWorking << endl;
	cout << "Відеокарта:\t" << (vCard) << endl;
	cout << "Процесор:\t\t\t" << cpu << endl;
	cout << "Об'єм оперативної памяті:\t" << vRam << endl;
	cout << "Загальний об'єм використанної пам'ятi (в байтах):\t" << totalMemoryInBytes << endl;
}

// Головна функція 
int main(int argumentsCount,		 	// кількість параметрів, які передав користувач
	char* argumentsValues[],		// значення параметрів, які передав користувач
	char* environmentParameters[]  // змінні оточення, для поточного користувача
)
{

	// підтримка поточної локалізаці
	// (мови та національних особливостей, 
	// таких як валюта, формат часу і т.д.)
	setlocale(LC_ALL, "");

	overflowSample();
	underflowSample();
	overflowDoubleSample();
	underflowDoubleSample();
	overflowBoolSample();
	underflowBoolSample();

	cout << endl;
	laptopInformationModel();

	// зачекати поки користувач 
	// натисне будь-яку клавішу, щоб 
	// закрити програму
	getchar();

	return 0;
}