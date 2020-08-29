#include<iostream>
#include<string>
using namespace std ;
int sizeroom,price,people,priceroom;
char r;
int x = 0 ;
int booking(char);
int main()
{
	char c;
	string name,surname,user,password,input_user,input_pass,login_new;
	cout << "===== Welcome to Hotel =====\n";
	    a:
		cout << "1.Register\n";
		cout << "2.Login\n";
		cout << "3.Booking\n";
		cout << "4.Check in\n";
		cout << "5.Check out\n";
		cout << "6.Exit\n";
		cout << "Enter choice [1-6] :";
		cin >> c;
		switch(c)
		{
			case '1':
				cout << "=====Register=====\n";
				cout << "Enter name : ";
				cin >> name;
				cout << "Enter surname : ";
				cin >> surname;
				cout << "Enter user : ";
				cin >> user;
				cout << "Enter your password : ";
				cin >> password;
				goto a;
				break;
	
			case '2':
				cout << "=====Login=====\n";
				do{
				cout << "Enter usere name : ";
				cin >> input_user;
				cout << "Enter password : ";
				cin >> input_pass;
				if(user == input_user  && password == input_pass )
				{
					cout<<"corect\n";
					goto a;
				}
				else if (user != input_user || password != input_pass)
				{
					x++;
				}
				}while( x != 5); 
				cout << "incorect";
					break;

			case '3':
				cout << "=====Booking=====\n";
				booking(r);
				goto a;
				break;

			case '4':
				cout << "=====Chekc in\n=====";
				cout << "Enter usere name : ";
				cin >> input_user;
				break;
				
			case '5':
				cout << "=====Chekc out=====\n";
				cout << "Enter usere name : ";
				cin >> input_user;
				break;

			case '6':
				cout << "===============Exit=================\n";
				break;

			default :
			cout << "Please enter  1, 2, 3 , 4 , 5 ,6"<<endl;
			break;

		}
	

	return(0);
}
int booking(char r)
{
	cout << "1.Small Room [s] 1000 B\n";
	cout << "2.Miduim Room[m] 1500 B\n";
	cout << "3.Large Room [l] 2000 B\n";
	cout << "Chooes size Room [s/m/l] : ";
	cin >>r;
	switch(r)
	{
		case 's' :
		cout << "You chooes small room price : 1000 B" << endl;
		cout << "How many people (if over 2 people + 300 : 1 people): " ;
		cin >> people ;
		if (people >2)
		{
			price = ((people-2 )*300 )+ 1000 ;
		}
		else
		{
			price = 1000;
		}
			cout <<"price total :" <<price << endl ;
			break;
		case 'm' :
		cout<<"You chooes midium room price : 1500 B" << endl ;
		cout << "How many people (if over 2 people + 450 : 1 people): " ;
		cin >> people ;
		if (people >2)
		{
			price = ((people-2 )*450 )+ 1500 ;
		}
		else
		{
			price = 1500;
		}
			cout << "price total :" <<price << endl ;
		break;
		case 'l' :
		cout<<"You chooes large room price : 2000 B" << endl ;
		cout << "How many people (if over 2 people + 550 : 1 people): " ;
		cin >> people ;
		if (people >2)
		{
			price = ((people-2 )*550 )+ 2000 ;
		}
		else 
		{
			price = 2000;
		}
			cout << "price total :" <<price << endl ;
			break;
		default :
			cout << "Please enter  s , m , l"<<endl;
			break;
	}
	return(0);
}
	