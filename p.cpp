#include<iostream>
#include<fstream>
#include<string>
#include<Windows.h>
using namespace std;
string chars = "!@#$%^&*()_+-=";
void textflow(string k, int t)//for better look.
{
	int s = size(k);
	for (int n = 0; n <= s; n++)
	{
		cout << k[n];
		Sleep(t);
	}
}
class Courses
{
private:
	double depositp, withdrawalp, dollarc;
public:
	Courses()
	{
		depositp = 11.2;
		withdrawalp = 12.2;
		dollarc = 10495;
	}
	void setdep()
	{
		textflow("\n\t\t\t Please set the yearly deposit percentage : ", 20);
		
		cin >> depositp;
		textflow("\n\t\t\t Deposit Percentage set to: ", 20);
		cout << depositp;
		textflow("% successfully", 20);
		cout << endl;
		Sleep(1200);
		system("cls");
	}
	void setwith()
	{
		textflow("\n\t\t\t Please set the yearly withdrawal percentage : ", 20);
		cin >> withdrawalp;
		textflow("\n\t\t\t Withdrawal Percentage set to: ", 20);
		cout << withdrawalp;
		textflow("% successfully", 20);
		cout << endl;
		Sleep(1200);
		system("cls");
	}
	void setdollarc()
	{
		textflow("\n\t\t\tEnter the current dollar course ($1 in Sums) : ", 20);
		cin >> dollarc;
		textflow("\n\t\t\tDollar course set to: ", 20);
		cout << dollarc;
		textflow(" successfully", 20);
		cout << endl;
		Sleep(1200);
		system("cls");
	}
	double getdep()
	{
		return depositp;
	}
	double getwith()
	{
		return withdrawalp;
	}
	double getdollarc()
	{
		return dollarc;
	}
};

class StaffID
{
private:
	string ID, PW;
public:
	StaffID() {}
	void setdata(string i, string p)
	{
		ID = i;
		PW = p;
	}
	string getID()
	{
		return ID;
	}
	string getPW()
	{
		return PW;
	}
};

class CustomerID
{
private:
	string ID, PW;
public:
	CustomerID()
	{
		ID = "defaultID";
		PW = "defaultPW";
	}
	void setdata(string i, string p)
	{
		ID = i;
		PW = p;
	}
	string getID()
	{
		return ID;
	}
	string getPW()
	{
		return PW;
	}
};

void currencyexchange()
{
	Courses crs;
	textflow("\n\t\t\t1. Dollar to Sums", 20);
	cout << endl;
	textflow("\n\t\t\t2. Sums to Dollar", 20);
	cout << endl;
	textflow("\n\n\t\t\t# Your option : ", 20);
	int k;
	double finalsum, money;
	cin >> k;
	switch (k)
	{
	case 1:
	{
		system("cls");
		cout << ("\n        O N L I N E   B A N K                                    D O L L A R   TO   S U M       \n");
		cout << "____________________________________________________________________________________________________\n\n";

		textflow("\n\t\t\tHow much money you want to convert? : ", 20);
		cin >> money;
		finalsum = money * crs.getdollarc();
		textflow("\n\t\t\tYour money in Sums will be: $", 20);
		cout << finalsum << endl;
		Sleep(2000);
		system("cls");
		break;
		
		
	}
	case 2:
	{
		system("cls");
		cout << ("\n        O N L I N E   B A N K                                  S U M   T O   D O L L A R            \n");
		cout << "____________________________________________________________________________________________________\n\n";
		textflow("\n\t\t\tHow much money you want to convert? : ", 20);
		cin >> money;
		finalsum = money / crs.getdollarc();
		textflow("Your money in Dollar will be: ", 20);
		cout << finalsum;
		textflow(" Sums", 20);
		cout << endl;
		Sleep(2000);
		system("cls");
		break;
		
		
	}
	default:
	{
		system("Color 0C");
		textflow("\n\t\t\tPlease choose available option!", 20);
		cout << endl;
		system("Color 0A");
		Sleep(1200);
		system("cls");
		currencyexchange();
	}
	}
}
void staffent()
{
	
	system("cls");
	cout << ("\n        O N L I N E   B A N K                                             S T A F F   M E N U       \n");
	cout << "____________________________________________________________________________________________________\n\n";
	textflow("\n\t\t  | | | | | Please choose one of the following options! | | | | |\n", 15);
	cout << endl;
	textflow("\n\t\t\t 1. To set Yearly Deposit Interest Percentage", 15);
	cout << endl;
	textflow("\n\t\t\t 2. To set Yearly Withdrawal Interest Percentage", 15);
	cout << endl;
	textflow("\n\t\t\t 3. To set Course of Dollar to Uzbek Sums", 15);
	cout << endl;
	textflow("\n\t\t\t 0. To exit the Bank", 15);
	cout << endl;
	textflow("\n\n\t\t\t # Your option : ", 15);
	
}
void cusent()
{
	system("cls");
	cout << ("\n        O N L I N E   B A N K                                       C U S T O M E R   M E N U       \n");
	cout << "____________________________________________________________________________________________________\n\n";
	textflow("\n\t\t  | | | | | Please choose one of the following options! | | | | |\n", 15);
	cout << endl;
	textflow("\n\t\t\t 1. Currency exchange", 15);
	cout << endl;
	textflow("\n\t\t\t 2. Making Savings", 15);
	cout << endl;
	textflow("\n\t\t\t 3. Taking out a loan", 15);
	cout << endl;
	textflow("\n\t\t\t 4. Apply for a credit card", 15);
	cout << endl;
	textflow("\n\t\t\t 0. To Exit the bank", 15);
	cout << endl;
	textflow("\n\n\t\t\t # Your option : ", 15);
}
int main()/////////////////////////////////////////////////////////////////////////////////////////////////
{
	ofstream dollarf("dollarfile.txt");
	ofstream depositper("depositfile.txt");
	ofstream withdrawalper("withdrawalfile.txt");
	string signin;
	ofstream inobj1;
	ofstream inobj2;
	ofstream inobj3;
	ofstream inobj4;
	ifstream outobj1;
	ifstream outobj2;
	StaffID s;
	CustomerID c;
	Courses objc;
	bool switcher;
	system("Color 0a");

	



startingpoint:;
	switcher = true;
	while (signin != "n" && switcher)
	{
		cout << ("\n        O N L I N E   B A N K                                             R E G I S T R A T I O N       \n");
		cout << "____________________________________________________________________________________________________\n\n";
		textflow("\n\t\t   | Please enter your ID if you have, or get a new one: |\n", 30);
		cout << endl;
		
		textflow("\n\t\t\t\t- Input [Y] to Get ID", 20);
		cout << endl;
		
		textflow("\n\t\t\t\t- Input [N] to Exit\n", 20);
		cout << endl;

		textflow("\n\t\t   # Input ID or choose one of the options : ", 20);
	
		cin >> signin;
		if (signin == "Y" || signin == "y" && switcher)
		{
			system("cls");
			cout << ("\n        O N L I N E   B A N K                                             G E T T I N G   I D       \n");
			cout << "____________________________________________________________________________________________________\n\n";
			textflow("\n\n\t\t\t     | Please choose the type of ID |", 30);
			cout << endl;
			textflow("\n\t\t\t\t  1. To get Staff ID", 20);
			cout << endl;
			textflow("\n\t\t\t\t  2. To get Customer ID", 20);
			cout << endl;
			textflow("\n\n\t\t\t     # Your option (1/2) : ", 20);
			int temp1;
			cin >> temp1;
			system("cls");
			switch (temp1)
			{
			case 1:
			{
			case1:
				string staffid, staffpw, temp2;
				cout << ("\n        O N L I N E   B A N K                                             S T A F F   I D       \n");
				cout << "____________________________________________________________________________________________________\n\n";
				textflow("\n\n\t\t\t   | Please enter 4 character ID |", 20);
				cout << endl;
				textflow("\n\t\t\t\tID: ", 20);
				cin >> staffid;
				for (int i = 0; i < size(staffid); i++)
				{
					for (int j = 0; j < size(chars); j++)
					{
						if (staffid[i] == chars[j])
						{
							system("Color 0C");
							textflow("\n\t\t\t  * ID cannot contain symbols!", 20);
							cout << endl;
							Sleep(1200);
							system("cls");
							system("Color 0A");
							goto case1;
						}
					}
				}
				if (size(staffid) != 4)
				{
					system("Color 0C");
					textflow("\n\t\t\t   | Staff ID should be 4 characters |", 20);
					cout << endl;
					Sleep(1200);
					system("cls");
					system("Color 0A");
					goto case1;
				}
				textflow("\n\t\t\t   - Please enter a password : ", 20);
				
				cin >> staffpw;
				textflow("\n\t\t\t   - Please confirm your password : ", 20);
				
				cin >> temp2;
				if (staffpw == temp2)
				{

					s.setdata(staffid, staffpw);
					inobj1.open("staffid.txt", ios::app, ios::binary);
					inobj1.write((char*)&s, sizeof(s));
					inobj1.close();
					textflow("\n\t\t\t | Staff Account Created Successfully |", 20);
					cout << endl;
					Sleep(1200);
					
					system("cls");
					goto startingpoint;
				}
				else
				{
					system("color 0c");
					textflow("\n\t\t\t * Passwords do not match", 20);
					cout << endl;
					system("color 0a");
					Sleep(1200);
					system("cls");
					goto case1;
				}
				break;
			}
			case 2:
			{
			case2:
				string customerid, customerpw, temp8;
				cout << ("\n        O N L I N E   B A N K                                             C U S T O M E R   I D       \n");
				cout << "____________________________________________________________________________________________________\n\n";
				textflow("\n\n\t\t\t   | Please enter 6 character ID |", 30);
				textflow("\n\n\t\t\t\tID: ", 20);

				cin >> customerid;
				for (int i = 0; i < size(customerid); i++)
				{
					for (int j = 0; j < size(chars); j++)
					{
						if (customerid[i] == chars[j])
						{
							system("Color 0C");
							textflow("\n\t\t\t  * ID cannot contain symbols!", 20);
							cout << endl;
							system("Color 0a");
							Sleep(1200);
							system("cls");
							goto case2;
						}
					}
				}
				if (size(customerid) != 6)
				{
					system("Color 0C");
					textflow("\n\t\t\t * Customer ID should be 6 characters", 20);
					system("Color 0a");
					Sleep(1200);
					system("cls");
					goto case2;
				}
				textflow("\n\t\t\t   - Please enter a password : ", 20);
			
				cin >> customerpw;
				textflow("\n\t\t\t   - Please confirm your password : ", 20);
				
				cin >> temp8;
				if (customerpw == temp8)
				{
					c.setdata(customerid, customerpw);
					inobj3.open("customerid.txt", ios::app, ios::binary);
					inobj3.write((char*)&c, sizeof(c));
					inobj3.close();
					textflow("\n\t\t\t | Staff Account Created Successfully |", 20);
					cout << endl;
					Sleep(1200);
					system("cls");
					goto startingpoint;
				}
				else
				{
					system("Color 0c");
					textflow("\n\t\t\t * Passwords do not match", 20);
					cout << endl;
					system("Color 0a");
					Sleep(1200);
					system("cls");
					goto case2;
				}
				break;
			}
			default:
			{
				break;
			}
			}
		}

		//registration for staff id
		else if (size(signin) == 4 && switcher)
		{
			inobj2.open("staffid.txt", ios::app, ios::binary);
			inobj2.write((char*)&s, sizeof(s));
			inobj2.close();
			outobj1.open("staffid.txt", ios::binary);
			bool temp6 = true;
			while (outobj1.read((char*)&s, sizeof(s)) && temp6)
			{
				if (s.getID() == signin && switcher)
				{
					temp6 = false;
					textflow("\n\t\t   Please enter your password : ", 20);
					string temp4;
					cin >> temp4;
					if (s.getPW() == temp4 && switcher)
					{
						STA://after tasks done staff come here
						staffent();
						int temp5;
						cin >> temp5;
						while (true)
						{
							switch (temp5)
							{
							case 1:
							{
								system("cls");
							cout << ("\n        O N L I N E   B A N K                                               D E P O S I T       \n");
							cout << "____________________________________________________________________________________________________\n\n";

								objc.setdep();
								goto STA;
								break;
							}
							case 2:
							{
								system("cls");
								cout << ("\n        O N L I N E   B A N K                                               W I T H D R A W A L       \n");
								cout << "____________________________________________________________________________________________________\n\n";

								objc.setwith();
								goto STA;
								break;
							}
							case 3:
							{
								system("cls");
								cout << ("\n        O N L I N E   B A N K                                       D O L L A R   C O U R S E       \n");
								cout << "____________________________________________________________________________________________________\n\n";

								objc.setdollarc();
								goto STA;
								break;
							}
							case 0:
							{
								textflow("\n\t\t\tThank You for Using our Service!", 20);
								Sleep(2000);
								return 0;
							}
							default:
							{
								goto STA;
							}
							}
						}
						outobj1.close();
					}
				}
			}
		}

		//registration for customer id
		else if (size(signin) == 6 && switcher)
		{
			inobj4.open("customerid.txt", ios::app, ios::binary);
			inobj4.write((char*)&c, sizeof(c));
			inobj4.close();
			outobj2.open("customerid.txt", ios::binary);
			while (outobj2.read((char*)&c, sizeof(c)) && switcher)
			{
				if (signin == c.getID() && switcher)
				{
					textflow("\n\t\t   Please enter your password : ", 20);
					string temp9;
					cin >> temp9;
					if (temp9 == c.getPW() && switcher)
					{
						CUS:
						cusent();
						int temp10;
						cin >> temp10;
						if (temp10 == 1)
						{
							system("cls");
							cout << ("\n        O N L I N E   B A N K                                C U R R E N C Y   E X C H A N G E       \n");
							cout << "____________________________________________________________________________________________________\n\n";

							currencyexchange();
							goto CUS;
						}
						else if (temp10 == 2)
						{
							Courses tmp1;
							system("cls");
							cout << ("\n        O N L I N E   B A N K                                               S A V I N G      \n");
							cout << "____________________________________________________________________________________________________\n\n";

							textflow("\n\t\t\tHow much money you want to save? : ", 20);
							double savingm, totalmoney;
							cin >> savingm;
							while (savingm <= 0)
							{
								system("Color 0c");
								textflow("\n\t\t\tYou cannot save that money, enter again", 20);
								cout << endl;
								system("Color 0A");
								cin >> savingm;
							}
							textflow("\n\t\t\tAfter how many years you will take your money back? : ", 20);
							int years;
							cin >> years;
							while (years <= 0)
							{
								system("Color 0c");
								textflow("\n\t\t\tPeriod must be at least 1 year : ", 20);
								system("Color 0a");
								cin >> years;
							}
							totalmoney = savingm;
							double temp12 = tmp1.getwith();
							for (int i = 0; i <= years; i++)
							{
								totalmoney += (savingm * temp12 / 100);
							}
							textflow("\n\t\t\tMoney saved successfully, after ", 20);
							cout << years;
							textflow(" years, you will get ", 20);
							cout << totalmoney << endl;
							ofstream savemoney;
							savemoney.open("Savings.txt", ios::app);
							savemoney << signin << temp9 << totalmoney;
							savemoney.close();
							switcher = false;
							Sleep(2000);
							goto CUS;
							break;
						}
						else if (temp10 == 3)
						{
							Courses tmp2;
							system("cls");
							cout << ("\n        O N L I N E   B A N K                                                      L O A N       \n");
							cout << "____________________________________________________________________________________________________\n\n";

							textflow("\n\t\t\tHow much money you want to borrow? : ", 20);
							double loanm, overallm;
							cin >> loanm;
							while (loanm <= 0)
							{
								system("Color 0c");
								textflow("\n\t\t\tYou cannot take that loan, enter again : ", 20);
								system("Color 0a");
								cin >> loanm;
							}
							textflow("\n\t\t\tAfter how many years you want to return money? : ", 20);
							int years1;
							cin >> years1;
							while (years1 <= 0)
							{
								system("Color 0c");
								cout << "\n\t\t\tPeriod must be at least 1 year" << endl;
								system("Color 0a");
								cin >> years1;
							}
							overallm = loanm;
							double temp11 = tmp2.getwith();
							for (int i = 0; i <= years1; i++)
							{
								overallm += (loanm * temp11 / 100);
							}
							textflow("\n\t\t\tYou will have to return ", 20);
							cout << overallm;
							textflow(" after ", 20);
							cout << years1;
							textflow(" years", 20);
							cout << endl;
							ofstream saveloan;
							saveloan.open("Loans.txt", ios::app);
							saveloan << signin << temp9 << overallm;
							saveloan.close();
							switcher = false;
							Sleep(2000);
							goto CUS;
							break;
						}
						else if (temp10 == 4)
						{
						 system("cls");
						 cout << ("\n        O N L I N E   B A N K                                           C R E D I T   C A R D       \n");
						 cout << "____________________________________________________________________________________________________\n\n";

							textflow("\n\t\t\tEnter Your Passport Serie Number : ", 20);
							string psn;
							cin >> psn;
							while (size(psn) != 9)
							{
								system("Color 0c");
								textflow("\n\t\t\tSerie should be in format: AA0000000 : ", 20);
								system("Color 0A");
								cin >> psn;
							}
							textflow("\n\t\t\tThe serial number of your credit card : ", 20);
							cout << c.getID() << psn << endl;
							string ccpw = "no", temp12 = "NA";
							while (temp12 != ccpw)
							{
								textflow("\n\t\t\tMake up a password for your Credit Card : ", 20);
								cin >> temp12;
								textflow("\n\t\t\tConfirm your password : ", 20);
								cin >> ccpw;
							}
							textflow("\n\t\t\tCredit Card Obtaiend Successfully!", 20);
							cout << endl;
							double balance = 0, temp14;
							textflow("\n\t\t\tIf you want to add to your balance, type y : ", 20);
							string temp13;
							cin >> temp13;
							if (temp13 == "y" || temp13 == "Y")
							{
								textflow("\n\t\t\tHow much you want to add to your balance? : ", 20);
								cin >> temp14;
								balance += temp14;
							}
							ofstream CCard;
							CCard.open("CreditCards.txt", ios::app);
							CCard << c.getID() << psn << ccpw << balance;
							CCard.close();
							switcher = false;
							Sleep(2000);
							goto CUS;
							break;
						}
						else if (temp10 == 0) 
                        {
						textflow("\n\t\t\tThank You for Using our Service!", 20);
						Sleep(2000);
						return 0;
                        }
						else
						{
						system("Color 0c");
						textflow("\n\t\t\t * Wrong Input! Try Again.", 20);
						cout << endl;
						system("Color 0a");
						Sleep(1200);
						goto CUS;
						
						}
					
					}
				}
			}

		}
		else if(signin == "N" || signin == "n" && switcher)
		{
		 return 0;
        }
		else
		{
		 system("Color 0c");
		 textflow("\n\t\t\t * Wrong Input! Try Again.", 20);
		 cout << endl;
		 system("Color 0a");
		 Sleep(1200);
		 system("cls");
		 goto startingpoint;
		}
	}
	dollarf << objc.getdollarc();
	depositper << objc.getdep();
	withdrawalper << objc.getwith();
	dollarf.close();
	depositper.close();
	withdrawalper.close();

	system("pause");
	return 0;
}
