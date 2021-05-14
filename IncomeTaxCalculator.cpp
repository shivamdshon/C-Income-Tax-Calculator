#include<conio.h>
#include<string>
#include<stdio.h>
#include<windows.h>
#include<iostream>
using namespace std;


//***************************BaseClass**********************//

class tax
{
	public:
		char g,f,name[50],address[50],occ[50],gen[50];
		string nam;
		int id,age;
		void get()
		{ 
			cout<<"Enter Your Occupation : \n";
			cin>>occ;
			cout<<"Enter Your Name : \n";
			cin>>nam;
			//cin.getline(name,50);
			//char c=getchar();
			//getline(cin,nam);
			cout<<"Enter Your Gender (M/F) : \n";
			cin>>gen;
			cout<<"Enter Your Age : \n";
			g:
			cin>>age;
			if(age<18)
			{
				cout<<"Enter Valid Age\n";
				goto g;
			}	
			cout<<"Enter Id : \n";
			cin>>id;
			cout<<"Give your Address in Detail : \n";
			cin>>address;
		}
		void show()
		{
			cout<<"\nName : "<<name;
			cout<<"\nGender : "<<gen;
			cout<<"\nAge : "<<age;
			cout<<"\nOccupation : "<<occ;
			cout<<"\nId No. : "<<id;
			cout<<"\nAddress : "<<address;
		}
};

//*************************BaseClass2****************************//

class first:public tax
{
	public:
		float sal,tax1;
		void getit()
		{
			cout<<"How much you earn in a Year : ";
			cin>>sal;
			if(sal<250000)
			{
				tax1=0;
			}
			if((sal>250000)&&(sal<=500000))
			{
				tax1=sal*(.10);
			}
			if((sal>500000)&&(sal<1000000))
			{
				tax1=sal*(.20);
			}
			if(sal>1000000)
			{
				tax1=sal*(.30);
			}
		}
		void showit()
		{
			cout<<"\nYour IncomeTax is = Rs "<<tax1<<endl;
			sal=sal-tax1;
			cout<<"And your sallary after paying tax is = Rs "<<sal;
		}
};


//******************MainFunction*********************//

int main()
{
	tax m;
	first n;
	int a,d;
	char b,c,e,p;
	cout<<"\t\t\t\tName : Shivam Yadav"<<endl;
	cout<<"\t\t\t\tReg No. : 11603729"<<endl;
	cout<<"//******************************INCOME TAX CALCULATOR*****************************//"<<endl<<endl;
	cout<<"\t\t\tWelcome to Income Tax Calculator"<<endl<<endl;
	cout<<"Enter the choice you want ?"<<endl;
	z:
	cout<<"\n1.Want to know your 'IncomTax' ?"<<endl;
	cout<<"2.Want to view old 'IncomTax' ?"<<endl;
	cout<<"3.Want to know what is 'IncomTax' and how it works for improvment of our Country ?"<<endl;
	cout<<"4.Exit -_-"<<endl;
	cout<<"Enter Your Choice"<<endl;
	cin>>a;
	if((a!=1)&&(a!=2)&&(a!=3)&&(a!=4))
	{
		cout<<"\n*********ERROR********\n";
		cout<<"\nEnter valid no \n";
		goto z;
	}
	//a=getch();
	switch(a)
	{
		case 1:
			{
				cout<<"\nHow many members ? \n";
				cin>>d;
				if(d==0)
				{
					cout<<"Enter the valid number .\n\n";
				}
				for(int i=1;i<=d;i++)
				{
					m.get();
					n.getit();
				}
				for(int i=1;i<=d;i++)
				{
					m.show();
					n.showit();
				}
				cout<<"\nDo you Want to Save Data ?\n"<<"(Y/N)";
				e=getch();
				if(e == 'y')
				{
					cout<<"\nYour Data Saved";
					return 0;
				}
				else;
				{
					return 0;
				}
				break;
			}
			case 2:
				{
					cout<<"here is case 2";
					break;
				}
				case 3:
					{
						cout<<"\nAn income tax is a tax imposed on individuals or entities (taxpayers) that varies with the"<<endl; 
						cout<<"income or profits (taxable income) of the taxpayer. Details vary widely by jurisdiction."<<endl; 
						cout<<"Many jurisdictions refer to income tax on business entities as companies tax or corporate tax."<<endl; 
						cout<<"Partnerships generally are not taxed; rather, the partners are taxed on their share of partnership items."<<endl;
						cout<<"Tax may be imposed by both a country and subdivisions. Most jurisdictions exempt locally organized "<<endl;
						cout<<"charitable organizations from tax."<<endl<<endl;
						p:
						cout<<"Want to know more ?\n"<<endl<<"(Y/N)"<<endl;
						c=getch();
						if(c == 'y')
						{
							ShellExecute(NULL, "open", "https://en.wikipedia.org/wiki/Income_tax",NULL, NULL, SW_SHOWNORMAL);
							return 0;
						}
						if(c == 'n')
						{
							goto z;
						}
						if((c!='y')&&(c!='n'))
						{
							cout<<"\nWrong Choice\n";
							goto p;
							
						}
						break;
					}
					case 4:
						{
							cout<<"Really want to exit\n";
							cout<<"(Y/N)"<<endl;
							b=getch();
							if(b == 'y')
							{
								exit;
							}
							if(b == 'n')
							{
								cout<<endl;
								goto z;
							}
							else;
							{
								exit;
							}
						}
	}
}
//*************************End Of Main Function*********************//

