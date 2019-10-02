	//**********************************************************
	//	MONTHLY SALARY CALCULATOR
	//**********************************************************

//**********************************************************
//	INCLUDED HEADER FILES
//**********************************************************

#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
//#include <conio.h>
#include<iostream>
#include<Windows.h>
#include<DOC.h>
using namespace std;


//**********************************************************
// THIS CLASS CONTROL ALL THE FUNCTIONS IN THE MENU
//**********************************************************
class enter
{
	public:
	void page()
	    {
	    char n;
	    system("cls");
	    cout<<"\t\t\t\t<----------------MONTHLY SALARY CALCULATOR---------------->"<<endl;
	    cout<<"\t\t\t\t___________________________________________________________"<<endl;
	    cout<<"\n\n\n\n";
		cout<<"SUBMITTED BY:\t\t\t\t\t\tSUBMITTED TO:"<<endl;
		cout<<"NAME:KULDEEP MISHRA\t\t\t\t\tRITIKA SHARMA:"<<endl;
		cout<<"ROLL.NO: A18"<<endl;
		cout<<"RES.NO: 11614315"<<endl;
		cout<<"SECTION: K1659"<<endl;
		cout<<"\n\n\n\n";
		cout<<"press any key for login";
		getch();
		system("cls");
		while(n!='4')
		     {
		     	a:
		     	system("cls");
		     	cout<<"\t\t\t<----------------MONTHLY SALARY CALCULATOR----------------->"<<endl;
		     	cout<<"\t\t\t____________________________________________________________"<<"\n"<<"\n"<<endl;
		     	cout<<"PRESS--->1 ADMIN LOGIN"<<endl;
		     	cout<<"PRESS--->2 EMPLOYE LOGIN"<<endl;
		     	cout<<"PRESS--->3 EXIT"<<endl;
		     	cout<<"\n\n\n\n";
		     	cout<<"enter correct choice:";
	            n=getche();	
				switch(n)
				         {
				         case '1':
				         	admlogin();
				         	break;
				         case '2':
						    emplogin();
							break;
						 case '3':
						    cout<<"\n\n\n\t\tExiting-------";
						    Sleep(10);
						    exit(0);
							break;	
						 default:
						 cout<<"\n\t\t\t\tPlease Enter correct choice:";
						 getch();			 	
						 goto a;
						 }    
			 }
			
		}
	 void admlogin();
	 void emplogin();
};
void enter::admlogin()
{
	char a[20],b[10];
	l1:
	system("cls");
	cout<<"\t\t\t<------------------MONTHLY SALARY CALCULATOR----------------->"<<endl;
	cout<<"\t\t\t_____________________________________________________________"<<endl;
	cout<<"\n\n\t\t<------ADMIN LOGIN------>";
	cout<<"\n\nUSER NAME:";
	cin>>a;
	if(stricmp(a,"admin")==0)
	 {
	 	cout<<"\n"<<"PASSWORD:";
	 	cin>>b;
	 	if(strcmp(b,"abc")==0)
	 	{
	 		//admin();
		}
		else
		{
		cout<<"Incorrect password---------";
        Sleep(1000);
		goto l1;	
		}
	 }
	
 } 
void enter::emplogin()
{
	char a[20],b[10];
	l2:
	system("cls");
	cout<<"\t\t\t<------------------MONTHLY SALARY CALCULATOR----------------->"<<endl;
	cout<<"\t\t\t_____________________________________________________________"<<endl;
	cout<<"\n\n\t\t<------EMPLOYE LOGIN------>";
	cout<<"\n\nUSER NAME:";
	cin>>a;
	if(stricmp(a,"EMP")==0)
	 {
	 	cout<<"\n"<<"PASSWORD:";
	 	cin>>b;
	 	if(strcmp(b,"password")==0)
	 	{
	 	//	employe ();
		}
		else
		{
		cout<<"Incorrect password---------";
        Sleep(1000);
        } 
     }
}
class MENU
{
	public :
			void MAIN_MENU(void) ;
	private :
			void EDIT_MENU(void) ;
			void INTRODUCTION(void) ;
} ;




//**********************************************************
// THIS CLASS CONTROL ALL THE FUNCTIONS RELATED TO EMPLOYEE
//**********************************************************

class EMPLOYEE
{
	public :
			void NEW_EMPLOYEE(void) ;
			void MODIFICATION(void) ;
			void DELETION(void) ;
			void DISPLAY(void) ;
			void LIST(void) ;
			void SALARY_SLIP(void) ;
	private :
			void ADD_RECORD(int, char[], char[], char[], int, int, int, char[], char, char, char, float, float) ;
			void MODIFY_RECORD(int, char [], char [], char [], char [], char, char, char, float, float) ;
			void DELETE_RECORD(int) ;
			int  LASTCODE(void) ;
			//int  CODEFOUND(int) ;
			int  RECORDNO(int) ;
			int  FOUND_CODE(int) ;
			void DISPLAY_RECORD(int) ;
			int  VALID_DATE(int, int, int) ;

			int   code, dd, mm, yy ;
			char  name[26], address[31], phone[10], desig[16] ;
			char  grade, house, convense ;
			float loan, basic ;
} ;


//**********************************************************
// THIS FUNCTION CONTROL ALL THE FUNCTIONS IN THE MAIN MENU
//**********************************************************

void MENU :: MAIN_MENU(void)
{
	char ch ;
    system("cls");
	while (1)
	{	int textcolor[15];
		int textbackground[1];
		system("cls");
		cout <<" INDIAN PVT. LTD.\n" ;
		cout <<"1: NEW EMPLOYEE\n" ;
		cout <<"2: DISPLAY EMPLOYEE\n" ;
		cout <<"3: LIST OF EMPLOYEES\n" ;
		cout <<"4: SALARY SLIP\n" ;
		cout <<"5: EDIT\n" ;
		cout <<"0: QUIT\n" ;
		cout <<"ENTER YOUR CHOICE :" ;
		ch = getch() ;
		if (ch == 27 || ch == '0')
			break ;
		else
		if (ch == '1')
		{
			EMPLOYEE E ;
			E.NEW_EMPLOYEE() ;
		}
		else
		if (ch == '2')
		{
			EMPLOYEE E ;
			E.DISPLAY() ;
		}
		else
		if (ch == '3')
		{
			EMPLOYEE E ;
			E.LIST() ;
		}
		else
		if (ch == '4')
		{
			EMPLOYEE E ;
			E.SALARY_SLIP() ;
		}
		else
		if (ch == '5')
			EDIT_MENU() ;
	}
	system("cls");
}


//**********************************************************
// THIS FUNCTION CONTROL ALL THE FUNCTIONS IN THE EDIT MENU
//**********************************************************

void MENU :: EDIT_MENU(void)
{
	char ch ;
	system("cls");
	while (1)
	{
		cout <<"E D I T  M E N U\n" ;
		cout <<"1: DELETE RECORD\n";
		cout <<"2: MODIFY RECORD\n" ;
		cout <<"0: EXIT\n\n" ;
		cout <<"ENTER YOUR CHOICE :" ;
		ch = getch() ;
		if (ch == 27 || ch == '0')
			break ;
		else
		if (ch == '1')
		{
			EMPLOYEE E ;
			E.DELETION() ;
		}
		else
		if (ch == '2')
		{
			EMPLOYEE E ;
			E.MODIFICATION() ;
		}
	}
	system("cls");
}
//**********************************************************
// THIS FUNCTION ADDS THE GIVEN DATA IN THE EMPLOYEE'S FILE
//**********************************************************

void EMPLOYEE :: ADD_RECORD(int ecode, char ename[26], char eaddress[31], char ephone[10], int d, int m, int y, char edesig[16], char egrade, char ehouse, char econv, float eloan, float ebasic)
{
	fstream file ;
	file.open("EMPLOYEE.DAT", ios::app) ;
	code = ecode ;
	strcpy(name,ename) ;
	strcpy(address,eaddress) ;
	strcpy(phone,ephone) ;
	dd = d ;
	mm = m ;
	yy = y ;
	strcpy(desig,edesig) ;
	grade = egrade ;
	house = ehouse ;
	convense = econv ;
	loan = eloan ;
	basic = ebasic ;
	file.write((char *) this, sizeof(EMPLOYEE)) ;
	file.close() ;
}


//**********************************************************
// THIS FUNCTION MODIFY THE GIVEN DATA IN THE
// EMPLOYEE'S FILE
//**********************************************************

void EMPLOYEE :: MODIFY_RECORD(int ecode, char ename[26], char eaddress[31], char ephone[10], char edesig[16], char egrade, char ehouse, char econv, float eloan, float ebasic)
{
	int recno ;
	recno =RECORDNO (ecode) ;
	fstream file ;
	file.open("EMPLOYEE.DAT", ios::out | ios::ate) ;
	strcpy(name,ename) ;
	strcpy(address,eaddress) ;
	strcpy(phone,ephone) ;
	strcpy(desig,edesig) ;
	grade = egrade ;
	house = ehouse ;
	convense = econv ;
	loan = eloan ;
	basic = ebasic ;
	int location ;
	location = (recno-1) * sizeof(EMPLOYEE) ;
	file.seekp(location) ;
	file.write((char *) this, sizeof(EMPLOYEE)) ;
	file.close() ;
}


//**********************************************************
// THIS FUNCTION DELETE THE RECORD IN THE EMPLOYEE FILE
// FOR THE GIVEN EMPLOYEE CODE
//**********************************************************

void EMPLOYEE :: DELETE_RECORD(int ecode)
{
	fstream file ;
	file.open("EMPLOYEE.DAT", ios::in) ;
	fstream temp ;
	temp.open("temp.dat", ios::out) ;
	file.seekg(0,ios::beg) ;
	while (!file.eof())
	{
		file.read((char *) this, sizeof(EMPLOYEE)) ;
		if (file.eof())
			break ;
		if (code != ecode)
			temp.write((char *) this, sizeof(EMPLOYEE)) ;
	}
	file.close() ;
	temp.close() ;
	file.open("EMPLOYEE.DAT", ios::out) ;
	temp.open("temp.dat", ios::in) ;
	temp.seekg(0,ios::beg) ;
	while (!temp.eof())
	{
		temp.read((char *) this, sizeof(EMPLOYEE)) ;
		if ( temp.eof() )
			break ;
		file.write((char *) this, sizeof(EMPLOYEE)) ;
	}
	file.close() ;
	temp.close() ;
}


//**********************************************************
// THIS FUNCTION RETURNS THE LAST EMPLOYEE'S CODE
//**********************************************************

int EMPLOYEE :: LASTCODE(void)
{
	fstream file ;
	file.open("EMPLOYEE.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	int count=0 ;
	while (file.read((char *) this, sizeof(EMPLOYEE)))
		count = code ;
	file.close() ;
	return count ;
}


//**********************************************************
// THIS FUNCTION RETURNS 0 IF THE GIVEN CODE NOT FOUND
//**********************************************************

int EMPLOYEE :: FOUND_CODE(int ecode)
{
	fstream file ;
	file.open("EMPLOYEE.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	int found=0 ;
	while (file.read((char *) this, sizeof(EMPLOYEE)))
	{
		if (code == ecode)
		{
			found = 1 ;
			break ;
		}
	}
	file.close() ;
	return found ;
}


//**********************************************************
// THIS FUNCTION RETURNS RECORD NO. OF THE GIVEN CODE
//**********************************************************

int EMPLOYEE :: RECORDNO(int ecode)
{
	fstream file ;
	file.open("EMPLOYEE.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	int recno=0 ;
	while (file.read((char *) this, sizeof(EMPLOYEE)))
	{
		recno++ ;
		if (code == ecode)
			break ;
	}
	file.close() ;
	return recno ;
}


//**********************************************************
// THIS FUNCTION DISPLAYS THE LIST OF THE EMPLOYEES
//**********************************************************

void EMPLOYEE :: LIST(void)
{
		system("cls");
	int found=0,row=0,flag=0 ;
	char ch ;
	cout <<"LIST OF EMPLOYEES"<<endl ;
	cout <<"~~~~~~~~~~~~~~~~~~~"<<endl ;
	cout <<"CODE NAME                     PHONE    DOJ         DESIGNATION    GRADE  SALARY" <<endl;
	cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ;
	fstream file ;
	file.open("EMPLOYEE.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	while (file.read((char *) this, sizeof(EMPLOYEE)))
	{
		flag = 0 ;
		//delay(20) ;
		found = 1 ;
		cout <<code<<endl ;
		cout <<name <<endl;
		cout	<<phone<<endl ;
		cout <<dd <<"/" <<mm <<"/" <<yy<<endl ;
		cout <<desig<<endl ;
		cout <<grade ;
		if (grade != 'E')
		{
			cout <<basic ;
		}
		else
		{
			cout <<"-" ;
		}
		if ( row == 23 )
		{
			flag = 1 ;
			row = 6 ;
			cout <<"Press any key to continue or Press <ESC> to exit" ;
			ch = getch() ;
			if (ch == 27)
				break ;
			system("cls");
			cout <<"LIST OF EMPLOYEES"<<endl ;
			cout <<"~~~~~~~~~~~~~~~~~~~" ;
			cout <<"CODE NAME                     PHONE    DOJ         DESIGNATION    GRADE  SALARY" ;
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ;
		}
		else
			row++ ;
	}
	if (!found)
	{
		cout <<"\7Records not found" ;
	}
	if (!flag)
	{
		cout <<"Press any key to continue..." ;
		getche() ;
	}
	file.close () ;
}


//**********************************************************
// THIS FUNCTION DISPLAYS THE RECORD OF THE EMPLOYEES
//**********************************************************

void EMPLOYEE :: DISPLAY_RECORD(int ecode)
{
	fstream file ;
	file.open("EMPLOYEE.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	while (file.read((char *) this, sizeof(EMPLOYEE)))
	{
		if (code == ecode)
		{
			cout <<"Employee Code # " <<code<<endl ;
			cout <<"~~~~~~~~~~~~~" ;
			cout <<"Name         : " <<name<<endl ;
			cout <<"Address      : " <<address<<endl ;
			cout <<"Phone no.    : " <<phone<<endl ;
			cout <<"JOINING DATE" <<endl;
			cout <<"~~~~~~~~~~~~"<<endl ;
			cout <<"Day   : " <<dd<<endl;
			cout <<"Month : " <<mm<<endl;
			cout <<"Year  : " <<yy<<endl;
			cout <<"Designation  : " <<desig<<endl;
			cout <<"Grade        : " <<grade<<endl ;
			if (grade != 'E')
			{
				cout<<"\n";
				cout <<"House (y/n)    : " <<house<<endl ;
				cout <<"Convense (y/n) : " <<convense<<endl ;
				cout <<"Basic Salary   : " <<basic<<endl ;
			}
			cout <<"Loan           : " <<loan ;
		}
	}
	file.close() ;
}


//**********************************************************
// THIS FUNCTION GIVE DATA TO ADD IN THE FILE
//**********************************************************

void EMPLOYEE :: NEW_EMPLOYEE(void)
{
	system("cls");
	char  ch, egrade, ehouse='N', econv='N' ;
	char  ename[26], eaddress[31], ephone[10], edesig[16], t1[10] ;
	float t2=0.0, eloan=0.0, ebasic=0.0 ;
	int   d, m, y, ecode, valid ;
	cout<<"\n";
	cout <<"<0>=EXIT" ;
	cout <<"ADDITION OF NEW EMPLOYEE"<<endl ;
	cout <<"Employee Code # "<<endl ;
	cout <<"~~~~~~~~~~~~~" ;
	cout <<"Name         : "<<endl ;
	cout <<"Address      : "<<endl ;
	cout <<"Phone no.    : " <<endl;
	cout <<"JOINING DATE"<<endl ;
	cout <<"~~~~~~~~~~~~"<<endl ;
	cout <<"Day   : "<<endl ;
	cout <<"Month : "<<endl ;
	cout <<"Year  : "<<endl ;
	cout <<"Designation  : "<<endl ;
	cout <<"Grade        : "<<endl ;
	cout <<"Loan           : " <<endl;

	ecode = LASTCODE() + 1 ;
	if (ecode == 1)
	{
		ADD_RECORD(ecode, "null", "null", "null", 0, 0, 0, "null", 'n', 'n', 'n', 0.0, 0.0) ;
		DELETE_RECORD(ecode) ;
	}
	cout <<ecode ;
	do
	{
		valid = 1 ;
		cout <<"Enter the name of the Employee" ;
		gets(ename) ;
		strupr(ename) ;
		if (ename[0] == '0')
			return ;
		if (strlen(ename) < 1 || strlen(ename) > 25)
		{
			valid = 0 ;
			cout<<"\n";
			cout <<"\7Enter correctly (Range: 1..25)" ;
			getch() ;
		}
	} while (!valid) ;
	do
	{
		valid = 1 ;
		cout<<"\n";
		cout <<"Enter Address of the Employee" ;
		gets(eaddress) ;
		strupr(eaddress) ;
		if (eaddress[0] == '0')
			return ;
		if (strlen(eaddress) < 1 || strlen(eaddress) > 30)
		{
			valid = 0 ;
			cout<<"\n";
			cout <<"\7Enter correctly (Range: 1..30)" ;
			getch() ;
		}
	} while (!valid) ;
	do
	{
		valid = 1 ;
		cout<<"\n";
		cout <<"Enter Phone no. of the Employee or Press <ENTER> for none" ;
		gets(ephone) ;
		if (ephone[0] == '0')
			return ;
		if ((strlen(ephone) < 7 && strlen(ephone) > 0) || (strlen(ephone) > 9))
		{
			valid = 0 ;
			cout<<"\n";
			cout <<"\7Enter correctly" ;
			getch() ;
		}
	} while (!valid) ;
	if (strlen(ephone) == 0)
		strcpy(ephone,"-") ;
	char tday[3], tmonth[3], tyear[5] ;
	int td ;
	do
	{
		valid = 1 ;
		do
		{
	        cout<<"\n";
			cout <<"ENTER DAY OF JOINING" ;
			gets(tday) ;
			td = atoi(tday) ;
			d = td ;
			if (tday[0] == '0')
				return ;
		} while (d == 0) ;
		do
		{
			cout<<"\n";
			cout <<"ENTER MONTH OF JOINING"<<endl ;
			gets(tmonth) ;
			td = atoi(tmonth) ;
			m = td ;
			if (tmonth[0] == '0')
				return ;
		} while (m == 0) ;
		do
		{
			cout<<"\n";
			cout <<"ENTER YEAR OF JOINING" ;
			gets(tyear) ;
			td = atoi(tyear) ;
			y = td ;
			if (tyear[0] == '0')
				return ;
		} while (y == 0) ;
		if (d>31 || d<1)
			valid = 0 ;
		else
		if (((y%4)!=0 && m==2 && d>28) || ((y%4)==0 && m==2 && d>29))
			valid = 0 ;
		else
		if ((m==4 || m==6 || m==9 || m==11) && d>30)
			valid = 0 ;
		else
		if (y<1990 || y>2020)
			valid = 0 ;
		if (!valid)
		{
			valid = 0 ;
			cout<<"\n";
			cout <<"\7Enter correctly" ;
			getch() ;
		}
	} while (!valid) ;
	do
	{
		valid = 1 ;
		cout<<"\n";
		cout <<"Enter Designation of the Employee" ;
		gets(edesig) ;
		strupr(edesig) ;
		if (edesig[0] == '0')
			return ;
		if (strlen(edesig) < 1 || strlen(edesig) > 15)
		{
			valid = 0 ;
			cout<<"\n";
			cout <<"\7Enter correctly (Range: 1..15)" ;
			getch() ;
		}
	} while (!valid) ;
	do
	{
		cout<<"\n";
		cout <<"Enter Grade of the Employee (A,B,C,D,E)" ;
		egrade = getche() ;
		egrade = toupper(egrade) ;
		if (egrade == '0')
			return ;
	} while (egrade < 'A' || egrade > 'E') ;
	if (egrade != 'E')
	{
		cout<<"\n";
		cout <<"House (y/n)    : "<<endl ;
		cout <<"Convense (y/n) : "<<endl ;
		cout <<"Basic Salary   : "<<endl ;
		do
		{
			cout<<"\n";
			cout <<"ENTER IF HOUSE ALLOWANCE IS ALLOTED TO EMPLOYEE OR NOT" ;
			ehouse = getche() ;
			ehouse = toupper(ehouse) ;
			if (ehouse == '0')
				return ;
		} while (ehouse != 'Y' && ehouse != 'N') ;
		do
		{
			cout<<"\n";
			cout <<"ENTER IF CONVENCE ALLOWANCE IS ALLOTED TO EMPLOYEE OR NOT" ;
			econv = getche() ;
			econv = toupper(econv) ;
			if (econv == '0')
				return ;
		} while (econv != 'Y' && econv != 'N') ;
	}
	do
	{
		valid = 1 ;
		cout<<"\n";
		cout <<"ENTER LOAN AMOUNT IF ISSUED" ;
		gets(t1) ;
		t2 = atof(t1) ;
		eloan = t2 ;
		if (eloan > 50000)
		{
			valid = 0 ;
			cout<<"\n";
			cout <<"\7SHOULD NOT GREATER THAN 50000" ;
			getch() ;
		}
	} while (!valid) ;
	if (egrade != 'E')
	{
		do
		{
			valid = 1 ;
			cout<<"\n";
			cout <<"ENTER BASIC SALARY OF THE EMPLOYEE" ;
			gets(t1) ;
			t2 = atof(t1) ;
			ebasic = t2 ;
			if (t1[0] == '0')
				return ;
			if (ebasic > 50000)
			{
				valid = 0 ;
				cout<<"\n";
				cout <<"\7SHOULD NOT GREATER THAN 50000" ;
				getch() ;
			}
		} while (!valid) ;
	}
	cout<<"\n";
	do
	{
		cout<<"\n";
		cout <<"Do you want to save (y/n) " ;
		ch = getche() ;
		ch = toupper(ch) ;
		if (ch == '0')
			return ;
	} while (ch != 'Y' && ch != 'N') ;
	if (ch == 'N')
		return ;
	ADD_RECORD(ecode, ename, eaddress, ephone, d, m, y, edesig, egrade, ehouse, econv, eloan, ebasic) ;
}


//**********************************************************
// THIS FUNCTION GIVE CODE FOR THE DISPLAY OF THE RECORD
//**********************************************************

void EMPLOYEE :: DISPLAY(void)
{
	system("cls");
	char t1[10] ;
	int t2, ecode ;
	cout <<"<0>=EXIT" ;
	system("cls");
	cout <<"Enter code of the Employee  " ;
	gets(t1) ;
	t2 = atoi(t1) ;
	ecode = t2 ;
	if (ecode == 0)
		return ;
	system("cls");
	if (!FOUND_CODE(ecode))
	{
	 cout<<"\n";
		cout <<"\7Record not found" ;
		getch() ;
		return ;
		
	}
	DISPLAY_RECORD(ecode) ;
	cout<<"\n" ;
	cout <<"Press any key to continue..." ;
	getch() ;
}




//**********************************************************
// THIS FUNCTION GIVE DATA FOR THE MODIFICATION OF THE
// EMPLOYEE RECORD
//**********************************************************

void EMPLOYEE :: MODIFICATION(void)
{
	system("cls") ;
	char  ch, egrade, ehouse='N', econv='N' ;
	char  ename[26], eaddress[31], ephone[10], edesig[16], t1[10] ;
	float t2=0.0, eloan=0.0, ebasic=0.0 ;
	int   ecode, valid ;
	cout <<"<0>=EXIT"<<"\n" ;
	cout <<"Enter code of the Employee  " ;
	gets(t1) ;
	t2 = atoi(t1) ;
	ecode = t2 ;
	if (ecode == 0)
		return ;
	system("cls") ;
	if (!FOUND_CODE(ecode))
	{
		cout<<"\n";
		cout <<"\7Record not found" ;
		getch() ;
		return ;
	}
	cout <<"<0>=EXIT" ;
	cout <<"MODIFICATION OF THE EMPLOYEE RECORD" ;
	DISPLAY_RECORD(ecode) ;
	do
	{
	    cout<<"\n";
		cout <<"Do you want to modify this record (y/n) " ;
		ch = getche() ;
		ch = toupper(ch) ;
		if (ch == '0')
			return ;
	} while (ch != 'Y' && ch != 'N') ;
	if (ch == 'N')
		return ;
	system("cls");
	fstream file ;
	file.open("EMPLOYEE.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	while (file.read((char *) this, sizeof(EMPLOYEE)))
	{
		if (code == ecode)
			break ;
	}
	file.close() ;
	cout<<"\n";
	cout <<"Employee Code # " <<ecode ;
	cout<<"\n" ;
	cout <<"~~~~~~~~~~~~~" ;
	cout <<"JOINING DATE : "<<endl ;
	cout <<"~~~~~~~~~~~~~~" ;
	cout <<dd <<"/" <<mm <<"/" <<yy ;
	cout<<"\n";
	cout <<"Name         : " ;
	cout<<"\n";
	cout <<"Address      : " ;
	cout<<"\n";
	cout <<"Phone no.    : " ;
	cout<<"\n";
	cout <<"Designation  : " ;
	cout<<"\n";
	cout <<"Grade        : " ;
	cout<<"\n";
	cout <<"Loan           : " ;
	do
	{
		valid = 1 ;
		cout<<"\n";
		cout <<"Enter the name of the Employee or <ENTER> FOR NO CHANGE" ;
		gets(ename) ;
		strupr(ename) ;
		if (ename[0] == '0')
			return ;
		if (strlen(ename) > 25)
		{
			valid = 0 ;
			cout<<"\n";
			cout <<"\7Enter correctly (Range: 1..25)" ;
			getch() ;
		}
	} while (!valid) ;
	if (strlen(ename) == 0)
	{
		strcpy(ename,name) ;
		cout <<ename ;
	}
	do
	{
		valid = 1 ;
		cout<<"\n";
		cout <<"Enter Address of the Employee or <ENTER> FOR NO CHANGE" ;
		gets(eaddress) ;
		strupr(eaddress) ;
		if (eaddress[0] == '0')
			return ;
		if (strlen(eaddress) > 30)
		{
			valid = 0 ;
			cout<<"\n";
			cout <<"\7Enter correctly (Range: 1..30)" ;
			getch() ;
		}
	} while (!valid) ;
	if (strlen(eaddress) == 0)
	{
		strcpy(eaddress,address) ;
		cout <<eaddress ;
	}
	do
	{
		valid = 1 ;
	    cout<<"\n";
		cout <<"Enter Phone no. of the Employee or or <ENTER> FOR NO CHANGE" ;
		gets(ephone) ;
		if (ephone[0] == '0')
			return ;
		if ((strlen(ephone) < 7 && strlen(ephone) > 0) || (strlen(ephone) > 9))
		{
			valid = 0 ;
			cout<<"\n";
			cout <<"\7Enter correctly" ;
			getch() ;
		}
	} while (!valid) ;
	if (strlen(ephone) == 0)
	{
		strcpy(ephone,phone) ;
		cout <<ephone ;
	}
	do
	{
		valid = 1 ;
		cout<<"\n";
		cout <<"Enter Designation of the Employee or <ENTER> FOR NO CHANGE" ;
		gets(edesig) ;
		strupr(edesig) ;
		if (edesig[0] == '0')
			return ;
		if (strlen(edesig) > 15)
		{
			valid = 0 ;
		    cout<<"\n";
			cout <<"\7Enter correctly (Range: 1..15)" ;
			getch() ;
		}
	} while (!valid) ;
	if (strlen(edesig) == 0)
	{
		strcpy(edesig,desig) ;
		cout <<edesig ;
	}
	do
	{
		cout<<"\n";
		cout <<"Enter Grade of the Employee (A,B,C,D,E) or <ENTER> FOR NO CHANGE" ;
	     cout<<"\n";
		egrade = getche() ;
		egrade = toupper(egrade) ;
		if (egrade == '0')
			return ;
		if (egrade == 13)
		{
			egrade = grade ;
			cout <<grade ;
		}
	} while (egrade < 'A' || egrade > 'E') ;
	if (egrade != 'E')
	{
		cout<<"\n";
		cout <<"House (y/n)    : " ;
		cout<<"\n";
		cout <<"Convense (y/n) : " ;
		cout<<"\n";
		cout <<"Basic Salary   : " ;
		do
		{
			cout<<"\n";
			cout <<"ALLOTED HOUSE ALLOWANCE ? or <ENTER> FOR NO CHANGE" ;
			ehouse = getche() ;
			ehouse = toupper(ehouse) ;
			if (ehouse == '0')
				return ;
			if (ehouse == 13)
			{
				ehouse = house ;
				cout <<ehouse ;
			}
		} while (ehouse != 'Y' && ehouse != 'N') ;
		do
		{
			cout<<"\n";
			cout <<"ALLOTED CONVENCE ALLOWANCE or <ENTER> FOR NO CHANGE" ;
			econv = getche() ;
			econv = toupper(econv) ;
			if (econv == '0')
				return ;
			if (econv == 13)
			{
				econv = convense ;
				cout <<econv ;
			}
		} while (econv != 'Y' && econv != 'N') ;
	}
	do
	{
		valid = 1 ;
		cout<<"\n";
		cout <<"ENTER LOAN AMOUNT or <ENTER> FOR NO CHANGE" ;
		gets(t1) ;
		t2 = atof(t1) ;
		eloan = t2 ;
		if (eloan > 50000)
		{
			valid = 0 ;
			cout<<"\n";
			cout <<"\7SHOULD NOT GREATER THAN 50000" ;
			getch() ;
		}
	} while (!valid) ;
	if (strlen(t1) == 0)
	{
		eloan = loan ;
		cout <<eloan ;
	}
	if (egrade != 'E')
	{
		do
		{
			valid = 1 ;
			cout<<"\n";
			cout <<"ENTER BASIC SALARY or <ENTER> FOR NO CHANGE" ;
			gets(t1) ;
			t2 = atof(t1) ;
			ebasic = t2 ;
			if (t1[0] == '0')
				return ;
			if (ebasic > 50000)
			{
				valid = 0 ;
				cout<<"\n";
				cout <<"\7SHOULD NOT GREATER THAN 50000" ;
				getch() ;
			}
		} while (!valid) ;
		if (strlen(t1) == 0)
		{
			ebasic = basic ;
			cout <<ebasic ;
		}
	}
	cout<<"\n";
	do
	{
		cout<<"\n";
		cout <<"Do you want to save (y/n) " ;
		ch = getche() ;
		ch = toupper(ch) ;
		if (ch == '0')
			return ;
	} while (ch != 'Y' && ch != 'N') ;
	if (ch == 'N')
		return ;
	MODIFY_RECORD(ecode,ename,eaddress,ephone,edesig,egrade,ehouse,econv,eloan,ebasic) ;
	cout<<"\n";
	cout <<"\7Record Modified" ;
	cout<<"\n";
	cout <<"Press any key to continue..." ;
	getch() ;
}


//**********************************************************
// THIS FUNCTION GIVE CODE NO. FOR THE DELETION OF THE
// EMPLOYEE RECORD
//**********************************************************

void EMPLOYEE :: DELETION(void)
{
	system("cls");
	char t1[10], ch ;
	int t2, ecode ;
	cout <<"<0>=EXIT" ;
	cout<<"\n";
	cout <<"Enter code of the Employee  " ;
	gets(t1) ;
	t2 = atoi(t1) ;
	ecode = t2 ;
	if (ecode == 0)
		return ;
	system("cls") ;
	if (!FOUND_CODE(ecode))
	{
		cout <<"\7Record not found" ;
		getch() ;
		return ;
    }
	cout <<"<0>=EXIT" ;
	cout <<"DELETION OF THE EMPLOYEE RECORD\n" ;
	DISPLAY_RECORD(ecode) ;
	do
	{
		
		cout <<"Do you want to delete this record (y/n) " ;
		ch = getche() ;
		ch = toupper(ch) ;
		if (ch == '0')
			return ;
	} while (ch != 'Y' && ch != 'N') ;
	if (ch == 'N')
		return ;
	DELETE_RECORD(ecode) ;
	system("cls");
	cout<<"\n";
	cout <<"\7Record Deleted" ;
	cout<<"\n";
	cout <<"Press any key to continue..." ;
	getch() ;
}


//**********************************************************
// THIS FUNCTION RETURN 0 IF THE GIVEN DATE IS INVALID
//**********************************************************

int EMPLOYEE :: VALID_DATE(int d1, int m1, int y1)
{
	int valid=1 ;
	if (d1>31 || d1<1)
		valid = 0 ;
	else
	if (((y1%4)!=0 && m1==2 && d1>28) || ((y1%4)==0 && m1==2 && d1>29))
		valid = 0 ;
	else
	if ((m1==4 || m1==6 || m1==9 || m1==11) && d1>30)
		valid = 0 ;
	return valid ;
}



//**********************************************************
// THIS FUNCTION PRINTS THE SALARY SLIP FOR THE EMPLOYEE
//**********************************************************

void EMPLOYEE :: SALARY_SLIP(void)
{
	system("cls");
	char t1[10] ;
	int t2, ecode, valid ;
	cout <<"<0>=EXIT" ;
	cout<<"\n";
	cout <<"Enter code of the Employee  " ;
	gets(t1) ;
	t2 = atoi(t1) ;
	ecode = t2 ;
	if (ecode == 0)
		return ;
	system("cls") ;
	if (!FOUND_CODE(ecode))
	{
		cout <<"\7Record not found" ;
		getch() ;
		return ;
	}
	fstream file ;
	file.open("EMPLOYEE.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	while (file.read((char *) this, sizeof(EMPLOYEE)))
	{
		if (code == ecode)
			break ;
	}
	file.close() ;
	int d1, m1, y1 ;
	/*struct date d;
	getdate(&d);
	d1 = d.da_day ;
	m1 = d.da_mon ;
	y1 = d.da_year ;
	char *mon[12]={"January","February","March","April","May","June","July","August","September","November","December"} ;
	cout <<"KULDEEP PVT. LTD.\n" ;
	cout <<"SALARY SLIP\n" ;
	cout <<"Date: " <<d1 <<"/" <<m1 <<"/" <<y1<<"\t" ;
	cout <<mon[m1-1] <<", " <<y1 ;*/
	cout<<"\n";
	cout <<"Employee Name : " <<name ;
	cout<<"\n";
	cout <<"Designation   : " <<desig ;
	cout <<"Grade : " <<grade ;
	int days, hours ;
	if (grade == 'E')
	{
		do
		{
			valid = 1 ;
			cout <<"ENTER NO. OF DAYS WORKED IN THE MONTH \n" ;
			cout <<"No. of Days   : " ;
			gets(t1) ;
			t2 = atof(t1) ;
			days = t2 ;
			if (!VALID_DATE(days,m1,y1))
			{
				valid = 0 ;
				cout <<"\7ENTER CORRECTLY                       " ;
				getch() ;
				cout <<"                    " ;
			}
		} while (!valid) ;
		do
		{
			valid = 1 ;
	         cout<<"\n";
			cout <<"ENTER NO. OF HOURS WORKED OVER TIME   " ;
			cout<<"\n";
			cout <<"No. of hours  : " ;
			gets(t1) ;
			t2 = atof(t1) ;
			hours = t2 ;
			if (hours > 8 || hours < 0)
			{
				valid = 0 ;
			 
				cout <<"\7ENTER CORRECTLY                     " ;
				getch() ;
			
				cout <<"                    " ;
			}
		} while (!valid) ;
		cout<<"\n";
		cout <<"                                               " ;

		cout <<"                        "<<endl;
		cout <<"                        " ;
}
    cout<<"\n";
	cout <<"Basic Salary         : Rs." ;
	cout <<"ALLOWANCE" ;
	if (grade != 'E')
	{
		cout<<"\n";
		cout <<"HRA  : Rs." ;
	    cout<<"\n";
		cout <<"CA   : Rs." ;
		cout<<"\n";
		cout <<"DA   : Rs." ;
	}
	else
	{
		cout<<"\n"; ;
		cout <<"OT   : Rs." ;
	}
	cout<<"\n";
	cout <<"DEDUCTIONS" ;
	cout<<"\n";
	cout <<"LD   : Rs." ;
	if (grade != 'E')
	{
       cout<<"\n";
       cout<<"\n";
		cout <<"PF   : Rs." ;
	}
	cout<<"\n";
	cout<<"\n";
	cout <<"NET SALARY           : Rs." ;
	cout <<"CASHIER" ;
	cout <<"EMPLOYEE" ;
	float HRA=0.0, CA=0.0, DA=0.0, PF=0.0, LD=0.0, OT=0.0, allowance, deduction, netsalary ;
	if (grade != 'E')
	{
		if (house == 'Y')
			HRA = (5*basic)/100 ;
		if (convense == 'Y')
			CA  = (2*basic)/100 ;
		DA  = (5*basic)/100 ;
		PF  = (2*basic)/100 ;
		LD  = (15*loan)/100 ;
		allowance = HRA+CA+DA ;
		deduction = PF+LD ;
	}
	else
	{
		basic = days * 30 ;
		LD  = (15*loan)/100 ;
		OT  = hours * 10 ;
		allowance = OT ;
		deduction = LD ;
	}
	netsalary = (basic+allowance)-deduction ;
	cout<<"\n";
	cout <<basic ;
	if (grade != 'E')
	{
	    cout<<"\n";
		cout <<HRA ;
		cout<<"\n";
		cout <<CA ;
		cout<<"\n";
		cout <<DA ;
		cout<<"\n";
		cout <<PF ;
	}
	else
	{
	    cout<<"\n";
		cout <<OT ;
	}
	cout<<"\n";
	cout <<LD ;
	cout<<"\n";
	cout <<"Rs." <<allowance ;
	cout<<"\n";
	cout <<"Rs." <<deduction ;
	cout<<"\n";
	cout <<netsalary ;
	cout<<"\n";
	getch() ;
}


//**********************************************************
// MAIN FUNCTION CALLING MAIN MENU
//**********************************************************

int main()
{
	 system("cls");
         int i=23,j,k;
		 char ch[100];
         cout<<"\n";
 cout<<"press enter to continue";
 cout<<"loading ";
 for(i=0;i<8;i++)
 {
 cprintf(".");


  }
  struct intro
  {
  char pro[20];
  char pronam[20];
  char dir[20];
  char dirnam[20];
  char gra[20];
  char graname[20];
  };

	MENU menu ;
	menu.MAIN_MENU() ;
}

