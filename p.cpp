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
		textflow("Please set the yearly deposit percentage", 20);
		cout << endl;
		cin >> depositp;
		textflow("Deposit Percentage set to: ", 20);
		cout << depositp;
		textflow("% successfully", 20);
		cout << endl;
	}
	void setwith()
	{
		textflow("Please set the yearly withdrawal percentage", 20);
		cout << endl;
		cin >> withdrawalp;
		textflow("Withdrawal Percentage set to: ", 20);
		cout << withdrawalp;
		textflow("% successfully", 20);
		cout << endl;
	}
	void setdollarc()
	{
		textflow("Enter the current dollar course ($1 in Sums)", 20);
		cout << endl;
		cin >> dollarc;
		textflow("Dollar course set to: ", 20);
		cout << dollarc;
		textflow(" successfully", 20);
		cout << endl;
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
	textflow("[1] Dollar to Sums", 20);
	cout << endl;
	textflow("[2] Sums to Dollar", 20);
	cout << endl;
	int k;
	double finalsum, money;
	cin >> k;
	switch (k)
	{
	case 1:
	{
		textflow("How much money you want to convert?", 20);
		cout << endl;
		cin >> money;
		finalsum = money * crs.getdollarc();
		textflow("Your money in Sums will be: $", 20);
		cout << finalsum << endl;
		break;
	}
	case 2:
	{
		textflow("How much money you want to convert?", 20);
		cout << endl;
		cin >> money;
		finalsum = money / crs.getdollarc();
		textflow("Your money in Dollar will be: ", 20);
		cout << finalsum;
		textflow(" Sums", 20);
		cout<< endl;
		break;
	}
	default:
	{
		system("Color 0C");
		textflow("Please choose available option", 20);
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
	textflow("Staff entered the system successfully", 20);
	cout << endl;
	textflow("Please choose one of the following options!", 15);
	cout << endl;
	textflow("[1] To set Yearly Deposit Interest Percentage", 15);
	cout << endl;
	textflow("[2] To set Yearly Withdrawal Interest Percentage", 15);
	cout << endl;
	textflow("[3] To set Course of Dollar to Uzbek Sums", 15);
	cout << endl;
	textflow("[0] To exit the Bank", 15);
	cout << endl;
}
void cusent()
{
	textflow("Customer entered the system successfully", 20);
	cout << endl;
	textflow("Please choose one of the following options", 15);
	cout << endl;
	textflow("[1] Currency exchange", 15);
	cout << endl;
	textflow("[2] Making Savings", 15);
	cout << endl;
	textflow("[3] Taking out a loan", 15);
	cout << endl;
	textflow("[4] Apply for a credit card", 15); 
	cout << endl;
	textflow("[0] To Exit the bank", 15);
	cout << endl;
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
	cout << "\t\t\t\t\t";
	textflow("Welcome to our system", 40);
	cout << endl;
startingpoint:;
	switcher = true;
	while (signin != "n" && switcher)
	{
		textflow("Please enter your ID if you have, or:", 30);
		cout << endl;
		textflow("[Y] To get ID", 20);
		cout<< endl;
		textflow("[N] To exit", 20);
		cout << endl;
		cin >> signin;
		if (signin == "Y" || signin == "y" && switcher)
		{
			system("cls");
			textflow("Please choose the type of ID", 30);
			cout << endl;
			textflow("[1] To get Staff ID", 20);
			cout << endl;
			textflow("[2] To get Customer ID", 20);
			cout << endl;
			int temp1;
			cin >> temp1;
			system("cls");
			switch (temp1)
			{
			case 1:
			{
			case1:
				string staffid, staffpw, temp2;
				textflow("Please enter 4 character ID", 20);
				cout << endl;
				cin >> staffid;
				for (int i = 0; i < size(staffid); i++)
				{
					for (int j = 0; j < size(chars); j++)
					{
						if (staffid[i] == chars[j])
						{
							system("Color 0C");
							textflow("ID cannot contain symbols!", 20);
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
					textflow("Staff ID should be 4 characters", 20);
					cout << endl;
					Sleep(1200);
					system("cls");
					system("Color 0A");
					goto case1;
				}
				textflow("Please enter password", 20);
				cout << endl;
				cin >> staffpw;
				textflow("Please confirm password", 20);
				cout << endl;
				cin >> temp2;
				if (staffpw == temp2)
				{

					s.setdata(staffid, staffpw);
					inobj1.open("staffid.txt", ios::app, ios::binary);
					inobj1.write((char*)&s, sizeof(s));
					inobj1.close();
					textflow("Staff Account Created Successfully", 20);
					cout << endl;
					Sleep(1200);
					goto startingpoint;
				}
				else
				{
					system("color 0c");
					textflow("Passwords do not match", 20);
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
				textflow("Please enter 6 character ID", 30);
				cout << endl;
				cin >> customerid;
				for (int i = 0; i < size(customerid); i++)
				{
					for (int j = 0; j < size(chars); j++)
					{
						if (customerid[i] == chars[j])
						{
							system("Color 0C");
							cout << "ID cannot contain symbols" << endl;
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
					cout << "Customer ID should be 6 characters" << endl;
					system("Color 0a");
					Sleep(1200);
					system("cls");
					goto case2;
				}
				textflow("Please enter password", 20); 
				cout << endl;
				cin >> customerpw;
				textflow("Please confirm password", 20);
				cout << endl;
				cin >> temp8;
				if (customerpw == temp8)
				{
					c.setdata(customerid, customerpw);
					inobj3.open("customerid.txt", ios::app, ios::binary);
					inobj3.write((char*)&c, sizeof(c));
					inobj3.close();
					textflow("Customer Account Created Successfully", 30);
					cout << endl;
					Sleep(1200);
					system("cls");
					goto startingpoint;
				}
				else
				{
					system("Color 0c");
					textflow("Passwords do not match", 20);
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
					textflow("Please enter your password", 20);
					cout << endl;
					string temp4;
					cin >> temp4;
					if (s.getPW() == temp4 && switcher)
					{
						staffent();
						int temp5;
						cin >> temp5;
						while (true)
						{
							switch (temp5)
							{
							case 1:
							{
								objc.setdep();
								goto startingpoint;
								break;
							}
							case 2:
							{
								objc.setwith();
								goto startingpoint;
								break;
							}
							case 3:
							{
								objc.setdollarc();
								goto startingpoint;
								break;
							}
							default:
							{
								goto startingpoint;
							}
							}
						}
						outobj1.close();
					}
				}
			}
		}
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
					textflow("Please enter your password", 20);
					cout << endl;
					string temp9;
					cin >> temp9;
					if (temp9 == c.getPW() && switcher)
					{
						cusent();
						int temp10;
						cin >> temp10;
						if (temp10 == 1)
						{
							currencyexchange();
						}
						else if (temp10 == 2)
						{
							Courses tmp1;
							textflow("How much money you want to save?", 20);
							cout << endl;
							double savingm, totalmoney;
							cin >> savingm;
							while (savingm <= 0)
							{
								system("Color 0c");
								textflow("You cannot save that money, enter again", 20);
								cout << endl;
								system("Color 0A");
								cin >> savingm;
							}
							textflow("After how many years you will take your money back?", 20);
							cout << endl;
							int years;
							cin >> years;
							while (years <= 0)
							{
								system("Color 0c");
								textflow("Period must be at least 1 year", 20);
								cout << endl;
								system("Color 0a");
								cin >> years;
							}
							totalmoney = savingm;
							double temp12 = tmp1.getwith();
							for (int i = 0; i <= years; i++)
							{
								totalmoney += (savingm * temp12 / 100);
							}
							textflow("Money saved successfully, after ", 20);
							cout << years;
							textflow(" years, you will get ", 20);
							cout << totalmoney << endl;
							ofstream savemoney;
							savemoney.open("Savings.txt", ios::app);
							savemoney << signin << temp9 << totalmoney;
							savemoney.close();
							switcher = false;
							goto startingpoint;
							break;
						}
						else if (temp10 == 3)
						{
							Courses tmp2;
							textflow("How much money you want to borrow?", 20);
							cout << endl;
							double loanm, overallm;
							cin >> loanm;
							while (loanm <= 0)
							{
								system("Color 0c");
								textflow("You cannot take that loan, enter again", 20);
								cout << endl;
								system("Color 0a");
								cin >> loanm;
							}
							textflow("After how many years you want to return money?", 20);
							cout << endl;
							int years1;
							cin >> years1;
							while (years1 <= 0)
							{
								system("Color 0c");
								cout << "Period must be at least 1 year" << endl;
								system("Color 0a");
								cin >> years1;
							}
							overallm = loanm;
							double temp11 = tmp2.getwith();
							for (int i = 0; i <= years1; i++)
							{
								overallm += (loanm * temp11 / 100);
							}
							textflow("You will have to return ", 20);
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
							goto startingpoint;
							break;
						}
						else if (temp10 == 4)
						{
						textflow("Enter Your Passport Serie Number", 20);
						cout << endl;
							string psn;
							cin >> psn;
							while (size(psn) != 9)
							{
								system("Color 0c");
								textflow("Serie should be in format: AA0000000", 20);
								cout << endl;
								system("Color 0A");
								cin >> psn;
							}
							textflow("The serial number of your credit card: ", 20);
							cout<< c.getID() << psn << endl;
							string ccpw = "no", temp12 = "NA";
							while (temp12 != ccpw)
							{
								textflow("Make up a password for your Credit Card", 20);
								cout << endl;
								cin >> temp12;
								textflow("Confirm your password", 20);
								cout << endl;
								cin >> ccpw;
							}
							textflow("Credit Card Obtaiend Successfully", 20);
							cout << endl;
							double balance = 0, temp14;
							textflow("If you want to add to your balance, type y", 20);
							cout << endl;
							string temp13;
							cin >> temp13;
							if (temp13 == "y" || temp13 == "Y")
							{
								textflow("How much you want to add to your balance?", 20);
								cout << endl;
								cin >> temp14;
								balance += temp14;
							}
							ofstream CCard;
							CCard.open("CreditCards.txt", ios::app);
							CCard << c.getID() << psn << ccpw << balance;
							CCard.close();
							switcher = false;
							goto startingpoint;
							break;
						}
						else
						{
							goto startingpoint;
						}
						goto startingpoint;
					}
				}
			}

		}
		else
		{
			goto startingpoint;
		}
	}
	dollarf << objc.getdollarc();
	depositper << objc.getdep();
	withdrawalper << objc.getwith();
	dollarf.close();
	depositper.close();
	withdrawalper.close();
	return 0;
}
