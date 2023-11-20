#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");

	cout << "Выберите день недели,расписание которого вы хотите узнать: " << endl;
	cout << "1.Понедельник" << endl;
	cout << "2.Вторник" << endl;
	cout << "3.Среда" << endl;
	cout << "4.Четверг" << endl;
	cout << "5.Пятница" << endl;

	int day;
	cin >> day;

	system("cls");

	switch (day) {

	case 1:
		cout << "Вы решили узнать расписание на понедельник:" << endl;
		cout << "Разговоры о важном 8:15-8:50" << endl;
		cout << "Учебная практика 9:00-14:30" << endl;
		break;
	case 2:
		cout << "Вы решили узнать расписание на вторник:" << endl;
		cout << "Учебная практика 9:00-16:20" << endl;
		break;
	case 3:
		cout << "Вы решили узнать расписание на среду:" << endl;
		cout << "Учебная практика 9:00-16:20" << endl;
		break;
	case 4:
		cout << "Вы решили узнать расписание на четверг:" << endl;
		cout << "Учебная практика 9:00-14:30" << endl;
		break;
	case 5:
		cout << "Вы решили узнать расписание на пятницу:" << endl;
		cout << "Учебная практика 9:00-18:10" << endl;
		break;
	}
	return 0;
}
