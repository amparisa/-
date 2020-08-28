#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name,surname;
	int dd,mm,yyyy;
	char choice;
	string color ;

	cout << "Programe lucky number" <<endl;
	cout << "Enter your name  : ";
	cin >> name;
	cout << "Enter your surname  : ";
	cin >> surname;

	day:
	cout << "Enter your birthday [Day] : ";
	cin >> dd;
	if (dd < 1 || dd > 31) {
		cout << "\nPlease try again\n";
		goto day;
		
	}
	mounth:
	cout << "Enter your birthday [Mounth] : ";
	cin >> mm;
	if (mm < 1 || mm > 12) {
		cout << "\nPlease try again\n";
		goto mounth;
	}

	year:
	cout << "Enter your birthday [Year(A.D.)] : ";
	cin >> yyyy;
	if (yyyy < 1 || yyyy > 2020) {
		cout << "\nPlease try again\n";
		goto year;
	}

	cout << "choose the color(number) \n";
	cout << "1.red\n2.green\n3.blue\n4.yellow\n5.white\n6.orange\n7.pink\n";
	cout << "Your choice is : ";
	cin >> choice;
	
	switch (choice)
	{
	case '1':
		color = "RED";
		break;
	case '2':
		color = "GREEN";
		break;
	case '3':
		color = "BLUE";
		break;
	case '4':
		color = "YELLOW";
		break;
	case '5':
		color = "WHITE";
		break;
	case '6':
		color = "ORANGE";
		break;
	case '7':
		color = "PINK";
		break;
	default : cout << "I don't know.";
	}

	cout << "\n-------------------------------------" <<endl;
	cout << "Your name is  " << name  << " " << surname <<endl;
	cout << "Your birth day is  " << dd << "/" <<mm<< "/" << yyyy <<endl;
	cout << "Your age is  " << 2020 - yyyy << " years old." <<endl;
	cout << "Your color is  " << color << endl;

	return(0);
}