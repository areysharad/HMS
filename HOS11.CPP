#include<iostream.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include<iomanip.h>
#include<string.h>
#include<fstream.h>
#include<conio.h>
#include<process.h>
fstream f;

int i;
char c,yesno,choice,temp[50];

void userlogin();
void registration();
void wardenlogin();
void wardenmenu();
void rules();
void map();
void feestructure();
void aboutus();
void choicef(char a);
void choicef2(char a);
void searchu();
void modifyu();
void deleteu();
void allot();

void close();
void menu();
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//------------------------------------CLASSES----------------------------------
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
class user
{
   public:
      char namef[41],fname[20],mname[20],gender,dob[9];
      char phno[11];
      char sch_col[30];
      char course[20];
      char uname[20],pass[20];
      int roomno;
      void getdata();
      void showdata();
      void getuname();
      void getpass();

};
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//-----------------------------MEMBER FUNCTN DEFNTN~----------------------------------
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void user::getuname()
{	gets(uname);  }

void user::getpass()
{   i=0;
    while(i<20)
    {   c=getch();
	if(c==13){  pass[i]='\0';break;}
	pass[i]=c;cout<<"*";i++;
    }
    cout<<endl;
}
void user::getdata()
{
	cout<<"        Enter The Following Details: "<<endl<<endl;
	cout<<"     FIRST NAME     : ";gets(namef);
	cout<<"     LAST NAME      : ";gets(temp);
	strcat(namef," ")             ;strcat(namef,temp);
	cout<<"     DOB(dd/mm/yy)  : ";
	{
	  i=0;
	  while(i<9)
	  {
	    if(i==8)  dob[i]='\0';
	    else if(i==2||i==5) dob[i]='/';
	    else {c=getch();dob[i]=c;}
	    cout<<dob[i];i++;
	  }
	}  cout<<endl;
	cout<<"     FATHER'S NAME  : ";gets(fname);
	cout<<"     MOTHER'S NAME  : ";gets(mname);
	cout<<"     GENDER(M,m/F,f): ";cin>>gender;
	cout<<"     USERNAME       : ";getuname();
	cout<<"     PASSWORD       : ";getpass();
	cout<<"     MOBILE NO      : ";gets(phno);
	cout<<"     SCHOOL/COLLEGE : ";gets(sch_col);
	cout<<"     CLASS/COURSE   : ";gets(course);
	roomno=0;
}

void user::showdata()
{
	clrscr();
	gotoxy(1,3);
	cout<<"       ----------------------------------------------------------------";
	cout<<"                                    ..::|| USER DATA ||::..                 "; cout<<endl;
	cout<<"       ----------------------------------------------------------------";      cout<<endl;

	cout<<"     NAME           : ";puts(namef);cout<<endl;
	cout<<"     DOB(dd/mm/yy)  : ";puts(dob);cout<<endl;
	cout<<"     FATHER'S NAME  : ";puts(fname);cout<<endl;
	cout<<"     MOTHER'S NAME  : ";puts(mname);cout<<endl;
	cout<<"     GENDER(M,m/F,f): ";cout<<gender;cout<<endl;
	cout<<"     USERNAME       : ";puts(uname);cout<<endl;
	cout<<"     PASSWORD       : ";puts(pass);cout<<endl;
	cout<<"     MOBILE NO      : ";puts(phno);cout<<endl;
	cout<<"     SCHOOL/COLLEGE : ";puts(sch_col);cout<<endl;
	cout<<"     CLASS/COURSE   : ";puts(course);cout<<endl;
	cout<<"     ROOM NO        : ";cout<<roomno;cout<<endl;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//---------------------------------------MAIN-----------------------------------------
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


void main()
{
  clrscr();
  int choice;
  char pass[20];
  textcolor(BLUE);
  gotoxy(1,10);
  cprintf("                                   " );
  cprintf("                                                          " );
  cprintf("                                           " );
  cprintf("                                                          " );
  cprintf("                                 " );
  cout<<endl;
  textcolor(15);
  cprintf("                                             more than just a place to sleep... ");
  gotoxy(80,25);
  delay(2000);
  menu();
  getch();
 }


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//---------------------------------------MENU()----------------------------------------
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void menu()
{
  menu:
  clrscr();
  gotoxy(1,3);
  cout<<"       ----------------------------------------------------------------";
  cout<<"                                    ..::|| MAIN MENU ||::..                 "; cout<<endl;
  cout<<"       ----------------------------------------------------------------";      cout<<endl;
  cout<<"       1. Registration ";      cout<<endl;
  cout<<"       2. Warden Login ";      cout<<endl;
  cout<<"       3. User Login ";        cout<<endl;
  cout<<"       4. Fee Structure ";	cout<<endl;
  cout<<"       5. Rules ";		cout<<endl;
  cout<<"       6. Map ";		cout<<endl;
  cout<<"       7. About Us ";		cout<<endl;
  cout<<"       8. Exit ";		cout<<endl;
  cout<<"       ENTER YOUR CHOICE :  "; cin>>choice;
  cout<<endl;
  cout<<"       ----------------------------------------------------------------";cout<<endl;
  cout<<endl;
  cout<<"       YOU SURE?? (y,Y/n,N) "; cin>>yesno;
      if(yesno=='y'||yesno=='Y') choicef(choice);
      else goto menu;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//---------------------------------------CHOICEF()----------------------------------------
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void choicef(char a)
{
 switch(a)
   {
      case '1'  : registration();
		  break;
      case '2'  : wardenlogin();
		  break;
      case '3'  : userlogin();
		  break;
      case '4'  : feestructure();
		  break;
      case '5'  : rules();
		  break;
      case '6'  : map();
		  break;
      case '7'  : aboutus();
		  break;
      case '8'  : close();
		  break;
      default   : menu();

   }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//---------------------------------------CHOICEF2()----------------------------------------
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void choicef2(char a)
{
 switch(a)
   {
      case '1'  : searchu();
		  break;
//      case '2'  : modifyu();
  //		  break;
//      case '3'  : deleteu();
  //		  break;
      case '4'  : allot();
		  break;
      default   : wardenmenu();

   }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//---------------------------------------REGISTRATION()----------------------------------------
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void registration()
{
   registration:
   clrscr();
   user u;
   gotoxy(1,3);
   cout<<"       ----------------------------------------------------------------";
   cout<<"                             ..::|| REGISTRATION ||::..                 "; cout<<endl;
   cout<<"       ----------------------------------------------------------------";      cout<<endl;
   cout<<endl;
   u.getdata();
   cout<<"Is all your data correct??(y,Y/n,N)"; cin>>yesno;
   if(yesno=='y'||yesno=='Y')
   {
	cout<<"                            SUCCESS!!        "<<endl;
        cout<<"      Warden will give a phone call at the provided Ph. no for room allotment details ";
	f.open("REGIS.DAT",ios::out|ios::binary);
	f.write((char*)&u,sizeof(u));
	f.close();
	getch();
	menu();
   }
   else
   {
       cout<<endl;
       cout<<"      Enter R/r to TRY AGAIN, other key to return to MENU."; cin>>yesno;
       if(yesno=='r'||yesno=='R') goto registration;
       else menu();
   }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//---------------------------------------WARDENLOGIN()----------------------------------------
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


void wardenlogin()
{
    char u1[]="@thanos",u2[15];
    char p1[]="thanos", p2[25];
    char c;
    wardenlogin:
    clrscr();
    gotoxy(1,2);
    cout<<"       ----------------------------------------------------------------";
    cout<<"                             ..::|| WARDEN LOGIN ||::..               ";  cout<<endl;
    cout<<"       ----------------------------------------------------------------"; cout<<endl;
    cout<<endl<<endl<<endl;
    cout<<"                      USERNAME  :  ";gets(u2);
    cout<<endl<<endl;
    cout<<"                      PASSWORD  :  ";
    i=0;
    while(i<26)
    {    c=getch();
	if(c==13){  p2[i]='\0';break;}
	p2[i]=c;cout<<"*";i++;
    }
    cout<<endl<<endl;
    cout<<"       ----------------------------------------------------------------";cout<<endl<<endl;
    cout<<"       YOU SURE?? (y,Y/n,N) "; cin>>yesno;
       if(yesno=='y'||yesno=='Y')
       {
	  if(!strcmp(u1,u2) && !strcmp(p1,p2))
	  {     clrscr();
		cout<<"logged in"<<endl;   wardenmenu();
	  }
	  else
	  {     clrscr();
		gotoxy(30,10);
		cout<<"INCORRECT PASSWORD OR USERNAME !!!"  <<endl;
		getch();
		goto wardenlogin;
	  }
       }
       else
       {
	 cout<<"      Enter R/r to TRY AGAIN, other key to return to MENU."; cin>>yesno;
	 if(yesno=='r'||yesno=='R') goto wardenlogin;
	 else menu();
       }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//---------------------------------------WARDENMENU()---------------------------------
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void wardenmenu()
{
  menu:
  clrscr();
  gotoxy(1,3);
  cout<<"       ----------------------------------------------------------------";
  cout<<"                              ..::|| WARDEN MENU ||::..                 "; cout<<endl;
  cout<<"       ----------------------------------------------------------------";      cout<<endl;
  cout<<"       1. Search User";      cout<<endl;
  cout<<"       2. Modify Data";      cout<<endl;
  cout<<"       3. Delete Data";        cout<<endl;
  cout<<"       4. Allot Rooms ";	cout<<endl;
  cout<<"       ENTER YOUR CHOICE :  "; cin>>choice;
  cout<<endl;
  cout<<"       ----------------------------------------------------------------";cout<<endl;
  cout<<endl;
  cout<<"       YOU SURE?? (y,Y/n,N) "; cin>>yesno;
      if(yesno=='y'||yesno=='Y') choicef2(choice);
      else goto menu;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//---------------------------------------SEARCHU()---------------------------------
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void searchu()
{ searchu:
  clrscr();
  user u;
  gotoxy(1,3);
  cout<<"       ----------------------------------------------------------------";
  cout<<"                              ..::|| SEARCH USER ||::..                 "; cout<<endl;
  cout<<"       ----------------------------------------------------------------";      cout<<endl;
  cout<<endl<<endl;
  cout<<"                            Enter Username : "; gets(temp);
  cout<<"       ----------------------------------------------------------------";cout<<endl;
  cout<<endl;
  cout<<"       YOU SURE?? (y,Y/n,N) "; cin>>yesno;
      if(yesno=='y'||yesno=='Y') choicef(choice);
      else goto searchu;
}//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//---------------------------------------ALLOT()---------------------------------
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void allot()
{ allot:
  clrscr();
  user u;
  gotoxy(1,3);
  cout<<"       ----------------------------------------------------------------";
  cout<<"                              ..::|| ALLOT ROOMS ||::..                 "; cout<<endl;
  cout<<"       ----------------------------------------------------------------";      cout<<endl;

  while(f.open("REGIS.DAT",ios::in|ios::binary))
	{
	 f.read((char*)&u,sizeof(u));
	 u.showdata();
	 room:
	 cout<<"Enter Room no to be alloted ( 0 if no room available ) :";
	 cin>>i;
	 cout<<"       ----------------------------------------------------------------";cout<<endl;
	 cout<<"       YOU SURE?? (y,Y/n,N) "; cin>>yesno;
	 if(yesno=='y'||yesno=='Y')
	    { if(i>60)
		{ cout<<"INVALID ROOOM NO!!";getch();goto room; }
	      else u.roomno=i;
	    }
	 else goto room;
	}
  cout<<endl<<endl;
  cout<<"       ---------------------- NO MORE NEW REGISTRATIONS-------------------------";cout<<endl;
  cout<<endl;
  f.close();
  remove("REGIS.DAT");
  f.open("TEMP.DAT",ios::in|ios::out|ios::binary);
  f.close();
  rename("TEMP.DAT","REGIS.DAT");
  wardenmenu();
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//---------------------------------------USERLOGIN()----------------------------------
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void userlogin()
{
    userlogin:
    clrscr();
    user u;
    gotoxy(1,2);
    cout<<"       ----------------------------------------------------------------";
    cout<<"                             ..::|| USER LOGIN ||::..               ";  cout<<endl;
    cout<<"       ----------------------------------------------------------------";      cout<<endl;

    cout<<endl<<endl<<endl;
    cout<<"                      USERNAME  :  ";
    u.getuname();
    cout<<endl<<endl;
    cout<<"                      PASSWORD  :  ";
    u.getpass();
    cout<<endl;
    cout<<endl;
    cout<<"       ----------------------------------------------------------------";cout<<endl;
    cout<<endl;
    cout<<"       YOU SURE?? (y,Y/n,N) "; cin>>yesno;
    if(yesno=='y'||yesno=='Y') cout<<"done";
    else {
      cout<<"      Enter R/r to TRY AGAIN, other key to return to MENU."; cin>>yesno;
      if(yesno=='r'||yesno=='R')   goto userlogin;
      else menu();
    }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//---------------------------------------FEESTRUCTURE()-------------------------------
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void feestructure()
{ clrscr();
  cout<<"       ----------------------------------------------------------------";
  cout<<"                             ..::|| FEE STRUCTURE ||::..               ";  cout<<endl;
  cout<<"       ----------------------------------------------------------------";      cout<<endl;
  cout<<endl;
  cout<<"   1. RAGGING at no cost is permitted in the hostel campus."<<endl;
  cout<<"   2. Residents of the hostel have to pay the hostel fees upto 15th day of each month. Rs.10 will be added per day to the fees for any delay."<<endl;
  cout<<"   3. Drinking any kind of alcohol, smoking or any such act will lead to expulsion from hostel at the very moment when found guilty by hostel authorities. "<<endl;
  cout<<"   4. No interchange of rooms allowed without mutual consent of authorities and residents of the particular room."<<endl;
  cout<<endl<<endl<<"Enter any key to go back to menu : ";
  cin>>yesno;
  menu();
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//---------------------------------------RULES()----------------------------------------
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void rules()
{
  clrscr();
  cout<<"       ----------------------------------------------------------------";
  cout<<"                                 ..::|| RULES ||::..                   ";  cout<<endl;
  cout<<"       ----------------------------------------------------------------";      cout<<endl;
  cout<<endl;
  cout<<"   1. RAGGING at no cost is permitted in the hostel campus."<<endl;
  cout<<"   2. Residents of the hostel have to pay the hostel fees upto 15th day of each month. Rs.10 will be added per day to the fees for any delay."<<endl;
  cout<<"   3. Drinking any kind of alcohol, smoking or any such act will lead to expulsion from hostel at the very moment when found guilty by hostel authorities. "<<endl;
  cout<<"   4. No interchange of rooms allowed without mutual consent of authorities and residents of the particular room."<<endl;
  cout<<endl<<endl<<"Enter any key to go back to menu : ";
  cin>>yesno;
  menu();
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//---------------------------------------MAP()----------------------------------------
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void map()
{
  clrscr();
  gotoxy(1,2);
  cout<<"       ----------------------------------------------------------------";
  cout<<"                                  ..::|| MAP ||::..                    ";  cout<<endl;
  cout<<"       ----------------------------------------------------------------";      cout<<endl;
  cout<<endl;
  cout<<"---------------------------------------------------------------------------"<<endl;
  cout<<"| |-------------------------||--------------||--------------------------| |"<<endl;
  cout<<"| |                         ||              ||                          | |"<<endl;
  cout<<"| |     GIRLS HOSTEL        ||              ||      BOYS HOSTEL         | |"<<endl;
  cout<<"| |                         ||              ||                          | |"<<endl;
  cout<<"| |    ROOM NO 1-30         ||     MESS     ||    ROOM NO 31-60         | |"<<endl;
  cout<<"| |                         ||              ||                          | |"<<endl;
  cout<<"| |__________|__|___________||              ||____________|__|__________| |"<<endl;
  cout<<"|                            |              |                             |"<<endl;
  cout<<"|  |--------|                |____|____|____|                             |"<<endl;
  cout<<"|  |        |                                     _______________________ |"<<endl;
  cout<<"|  |BADMINTON    _---______                       |                     | |"<<endl;
  cout<<"|  |        |    |        |                       |  FOOTBALL           | |"<<endl;
  cout<<"|  | COURT  |    | WARDEN |                       |                     | |"<<endl;
  cout<<"|  |        |    | HOUSE  |                       |         GROUND      | |"<<endl;
  cout<<"|  |________|    |________|        GATE           |_____________________| |"<<endl;
  cout<<"|________________________________||____||_________________________________|"<<endl;
  cout<<endl<<"Enter any key to go back to menu : ";
  cin>>yesno;
  menu();
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//---------------------------------------ABOUTUS()----------------------------------------
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void aboutus()
{
  clrscr();
  cout<<"       ----------------------------------------------------------------";
  cout<<"                                 ..::|| ABOUT US ||::..                   ";  cout<<endl;
  cout<<"       ----------------------------------------------------------------";      cout<<endl;
  cout<<endl;
  cout<<"   1. RAGGING at no cost is permitted in the hostel campus."<<endl;
  cout<<"   2. Residents of the hostel have to pay the hostel fees upto 15th day of each month. Rs.10 will be added per day to the fees for any delay."<<endl;
  cout<<"   3. Drinking any kind of alcohol, smoking or any such act will lead to expulsion from hostel at the very moment when found guilty by hostel authorities. "<<endl;
  cout<<"   4. No interchange of rooms allowed without mutual consent of authorities and residents of the particular room."<<endl;
  cout<<endl<<endl<<"Enter any key to go back to menu : ";
  cin>>yesno;
  menu();
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//---------------------------------------CLOSE()----------------------------------------
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void close()
{
  clrscr();
  gotoxy(37,10);
  cout<<"CLOSING";
  gotoxy(34,8); cout<<"_";delay(42);
  gotoxy(35,8); cout<<"_";delay(42);
  gotoxy(36,8); cout<<"_";delay(42);
  gotoxy(37,8); cout<<"_";delay(42);
  gotoxy(38,8); cout<<"_";delay(42);
  gotoxy(39,8); cout<<"_";delay(42);
  gotoxy(40,8); cout<<"_";delay(42);
  gotoxy(41,8); cout<<"_";delay(42);
  gotoxy(42,8); cout<<"_";delay(42);
  gotoxy(43,8); cout<<"_";delay(42);
  gotoxy(44,8); cout<<"_";delay(42);
  gotoxy(45,8); cout<<"_";delay(42);
  gotoxy(46,8); cout<<"_";delay(42);
  gotoxy(47,9); cout<<"|";delay(42);
  gotoxy(47,10);cout<<"|";delay(42);
  gotoxy(47,11);cout<<"|";delay(42);
  gotoxy(47,12);cout<<"|";delay(42);
  gotoxy(46,12);cout<<"_";delay(42);
  gotoxy(45,12);cout<<"_";delay(42);
  gotoxy(44,12);cout<<"_";delay(42);
  gotoxy(43,12);cout<<"_";delay(42);
  gotoxy(42,12);cout<<"_";delay(42);
  gotoxy(41,12);cout<<"_";delay(42);
  gotoxy(40,12);cout<<"_";delay(42);
  gotoxy(39,12);cout<<"_";delay(42);
  gotoxy(38,12);cout<<"_";delay(42);
  gotoxy(37,12);cout<<"_";delay(42);
  gotoxy(36,12);cout<<"_";delay(42);
  gotoxy(35,12);cout<<"_";delay(42);
  gotoxy(34,12);cout<<"_";delay(42);
  gotoxy(33,12);cout<<"|";delay(42);
  gotoxy(33,11);cout<<"|";delay(42);
  gotoxy(33,10);cout<<"|";delay(42);
  gotoxy(33,9); cout<<"|";delay(42);
  gotoxy(80,25);
  exit(0);
}