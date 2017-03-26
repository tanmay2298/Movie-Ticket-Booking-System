#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void assist()
{
cout<<"\n";
cout<<"********************************************************************************\n";
cout<<"-------------FOR ANY HELP CALL OUR CEO: MR.TANMAY GULATI +91 987654321----------\n";
cout<<"********************************************************************************\n";
}


void card(int cost2)
{
clrscr();
int d1,d2,d3,d4;
char name[20],crno[10],phno[13];
cout<<"********************************************************************************\n";
cout<<"------------------------------- CARD PAYMENT -----------------------------------\n";
cout<<"********************************************************************************\n\n";
cout<<"FULL NAME: ";
gets(name);
cout<<"\nCREDIT CARD NUMBER: ";
gets(crno);
cout<<"\nCVV NUMBER: ";
d1=getch();
cout<<"-";
d2=getch();
cout<<"-";
d3=getch();
cout<<"-";
d4=getch();
cout<<"-";
cout<<"\n\nPHONE NUMBER: ";
gets(phno);
cout<<"\n******************************************************************************\n";
cout<<"YOUR TRANSACTION IS BEING PROCESSED....THIS MAY TAKE A WHILE.......";

clrscr();
cout<<"********************************************************************************\n";
cout<<"-------------------------------- BILL ------------------------------------------\n";
cout<<"********************************************************************************\n\n";
cout<<"FULL NAME: "<<name<<endl<<endl;
cout<<"CREDIT CARD NUMBER: "<<crno<<endl<<endl;
cout<<"AMOUNT TO BE PAID: Rs."<<cost2<<endl<<endl;
assist();
}
void home(int cost3)
{
clrscr();
char hno[5],name1[20],sector[3],phno1[12];
cout<<"********************************************************************************\n";
cout<<"--------------------------- HOME DELIVERY --------------------------------------\n";
cout<<"********************************************************************************\n\n";
cout<<"FULL NAME: ";
gets(name1);
cout<<"\nHOUSE NUMBER: ";
gets(hno);
cout<<"\nSECTOR: ";
gets(sector);
cout<<"\nPHONE NUMBER: ";
gets(phno1);
cout<<"\n******************************************************************************\n";
cout<<"YOUR TRANSACTION IS BEING PROCESSED.......THIS MAY TAKE A WHILE.......";

clrscr();
cout<<"********************************************************************************\n";
cout<<"-------------------------------- BILL ------------------------------------------\n";
cout<<"********************************************************************************\n";
cout<<"FULL NAME: "<<name1<<"\n"<<endl;
cout<<"PHONE NUMBER: "<<phno1<<"\n\n";
cout<<"AMOUNT TO BE PAID: Rs."<<cost3<<"\n\n";
cout<<"********************************************************************************\n";
cout<<"*******************     YOUR TICKETS HAVE BEEN BOOKED      *********************\n";
cout<<"***************** YOUR BILL SHALL BE REACHING YOUR HOUSE SHORTLY ***************\n";
 assist();

}
void snacks(int cost1)
{
int ch7,qtty;
char ch8,ch9;
do{
ch8='n';
clrscr();
cout<<"********************************************************************************\n";
cout<<"------------------------ WELCOME TO THE SNACKS BAR -----------------------------\n";
cout<<"********************************************************************************\n";
cout<<"\t  \t 1) VEG PIZZA                     Rs.85\n";
cout<<"\t  \t 2) NON-VEG PIZZA                 Rs.100\n";
cout<<"\t  \t 3) VEG PASTA                     Rs.80\n";
cout<<"\t  \t 4) NON-VEG PASTA                 Rs.90\n";
cout<<"\t  \t 5) POPCORN                       Rs.60\n";
cout<<"\t  \t 6) FRENCH FRIES                  Rs.45\n";
cout<<"\t  \t 7) COKE                          Rs.50\n";
cout<<"\t  \t 8) VEG BURGER                    Rs.70\n";
cout<<"\t  \t 9) NON VEG BURGER                Rs.80\n";
cout<<"\t  \t10) COLD COFFEE                   Rs.60\n\n";
cout<<"********************************************************************************\n";
cout<<"\t ENTER THE CORRECT CATEGORY OF YOUR CHOICE: ";
cin>>ch7;
cout<<endl<<"\t ";
switch(ch7)
{
case 1:
{
 cout<<"HOW MANY PLATES OF VEG PIZZA WOULD YOU LIKE: ";
 cin>>qtty;
 cost1+=(qtty*85);
 }
 break;
 case 2:
 {
 cout<<"HOW MANY PLATES OF NON-VEG PIZZA WOULD YOU LIKE: ";
 cin>>qtty;
 cost1+=(qtty*100);
 }
 break;
 case 3:
 {
 cout<<"HOW MANY PLATES OF VEG PASTA WOULD YOU LIKE: ";
 cin>>qtty;
 cost1+=(qtty*80);
 }
 break;
 case 4:
 {
 cout<<"HOW MANY PLATES OF NON-VEG PASTA WOULD YOU LIKE: ";
 cin>>qtty;
 cost1+=(qtty*90);
 }
 break;
 case 5:
 {
 cout<<"HOW MANY TUBS OF POPCORN WOULD YOU LIKE: ";
 cin>>qtty;
 cost1+=(qtty*60);
 }
 break;
 case 6:
 {
 cout<<"HOW MANY PLATES OF FRENCH FRIES WOULD YOU LIKE: ";
 cin>>qtty;
 cost1+=(qtty*45);
 }
 break;
 case 7:
 {
 cout<<"HOW MANY GLASSES OF COKE WOULD YOU LIKE: ";
 cin>>qtty;
 cost1+=(qtty*50);
 }
 break;
 case 8:
 {
 cout<<"HOW MANY VEG BURGERS WOULD YOU LIKE: ";
 cin>>qtty;
 cost1+=(qtty*70);
  }
  break;
  case 9:
  {
   cout<<"HOW MANY NON-VEG BURGERS WOULD YOU LIKE: ";
   cin>>qtty;
   cost1+=(qtty*80);
   }
   break;
   case 10:
   {
   cout<<"HOW MANY GLASSES OF COLD-COFFEE WOULD YOU LIKE: ";
   cin>>qtty;
   cost1+=(qtty*60);
   }
   break;
   default :
   {
   cout<<"WRONG INPUT";
   }
   }
   cout<<"\n\t WOULD YOU LIKE TO HAVE ANYTHING ELSE? (Y/N): ";
   cin>>ch8;
   }
   while((ch8=='y')||(ch8=='Y'));
   cout<<endl;

   cout<<"PLEASE SELECT A METHOD FOR PAYMENT('C' FOR CARD,'H' FOR HOME DELIVERY OF TICKETS): ";
   cin>>ch9;
   if((ch9=='c')||(ch9=='C'))
   card(cost1);
   else if((ch9=='h')||(ch9=='H'))
   home(cost1);
   else{
   cout<<"WRONG INPUT";
   assist();
   }
    }
void book()
{
int tkts,i,cost=0;
char ch5,ch6;
cout<<"\nENTER THE NUMBER OF TICKETS YOU WANT TO BOOK(Rs.150 per ticket): ";
cin>>tkts;
clrscr();
cout<<"--------------------------------------------------------------------------------\n";
cout<<"YOUR SEAT NUMBER/S IS/ARE: ";
for(i=1;i<=tkts;i++)
{
cout<<i<<" ";
}
cost=cost+(tkts*150);
cout<<endl<<endl;
cout<<"********************************************************************************\n";
cout<<"****************************** COMING SOON *************************************\n";
cout<<" RIO 2                                     ENGLISH\n";
cout<<" YEH JAVAANI HAI DEEWANI                   HINDI\n";
cout<<" TOP GUN-2                                 ENGLISH\n";
cout<<" MISSION IMPOSSIBLE-5                      ENGLISH\n";
cout<<" KRISHH-4                                  HINDI\n";
cout<<" TITANIC (in 3-D)                          ENGLISH\n\n";
cout<<"********************************************************************************\n";
cout<<"WOULD YOU LIKE TO ORDER SOME SNACKS ? ('Y' for yes,else press any other letter):";
cin>>ch5;
if((ch5=='y')||(ch5=='Y'))
{
snacks(cost);
}
else
{
cout<<endl<<"PLEASE SELECT A METHOD OF PAYMENT('C' for Card,'H' for home delivery of tickets)";
cin>>ch6;
if((ch6=='C')||(ch6=='c'))
{
card(cost);
}
else if((ch6=='h')||(ch6=='H'))
{
home(cost);
}
else
{
cout<<"WRONG INPUT";
assist();
}
}
}
void movies()
{
int ch4;
cout<<"************** ------------------------------------------- *********************\n";
cout<<"**************               NOW SHOWING                   *********************\n";
cout<<"********************************************************************************\n";
cout<<"  [MOVIE NAME]                 [RATING]       [LANGUAGE]      [SHOW TIMINGS]  \n\n";
cout<<"1) IRON MAN 3                   U/A            ENGLISH          5:15 p.m.\n";
cout<<"2) HARRY POTTER                 U/A            ENGLISH          6:30 p.m.\n";
cout<<"3) ARGO                         A              ENGLISH          8:10 p.m.\n";
cout<<"4) ROCKSTAR                     U/A            HINDI           11:55 p.m.\n";
cout<<"5) SHOLAY(in 3-D)               U/A            HINDI            3:30 p.m.\n";
cout<<"6) KUNG FU PANDA-3              U              ENGLISH         11:25 a.m.\n\n";
cout<<"********************************************************************************\n";
cout<<"PLEASE SELECT THE MOVIE YOU WISH TO SEE\n";
cout<<"ENTER THE CORRECT CATEGORY OF YOUR CHOICE: ";
cin>>ch4;
cout<<endl;
switch(ch4)
{
case 1:
{
cout<<"IRON MAN 3 BEGINS AT 5:15 p.m.";
book();
}
break;
case 2:
{
cout<<"HARRY POTTER BEGINS AT 6:30 p.m.";
book();
}
break;
case 3:
{
cout<<"ARGO BEGINS AT 8:10 p.m.";
book();
}
break;
case 4:
{
cout<<"ROCKSTAR BEGINS AT 11:55 p.m.";
book();
}
break;
case 5:
{
cout<<"SHOLAY BEGINS AT 3:30 p.m.(3-D GLASSES WILL BE PROVIDED)";
book();
}
break;
case 6:
{
cout<<"KUNG FU PANDA-3 BEGINS AT 11:25 a.m.";
book();
}
break;
default: {
cout<<"###### WRONG INPUT ########";
assist(); }
}
}
void chd()
{
int ch3;
clrscr();
cout<<"********************************************************************************\n";
cout<<"************** ------------------------------------------- *********************\n";
cout<<"**************    CHANDIGARH HAS THE FOLLOWING CINEMAS:    *********************\n";
cout<<"************** ------------------------------------------- *********************\n";
cout<<"**************    1) PVR CINEMAS                           *********************\n";
cout<<"**************    2) DT CINEMAS                            *********************\n";
cout<<"********************************************************************************\n";
cout<<"ENTER THE CORRECT CATEGORY NUMBER OF YOUR CHOICE: ";
cin>>ch3;
if((ch3==1)||(ch3==2))
{
clrscr();
cout<<"************* --------------------------------------------- ********************\n";
if(ch3==1)
{
cout<<"************* PVR CINEMAS HAVE THE FOLLOWING MOVIES PLAYING:********************\n";
movies();
}
else
{
cout<<"************* DT CINEMAS HAVE THE FOLLOWONG MOVIES PLAYING: ********************\n";
movies();
}
}
else
{
cout<<"#### WRONG INPUT ####";
assist();
}
}
void ggn()
{
int ch2;
clrscr();
cout<<"********************************************************************************\n";
cout<<"************** ------------------------------------------- *********************\n";
cout<<"**************    GURGAON HAS THE FOLLOWING CINEMAS:       *********************\n";
cout<<"************** ------------------------------------------- *********************\n";
cout<<"**************    1) SRS  CINEMAS                          *********************\n";
cout<<"**************    2) PVR  CINEMAS                          *********************\n";
cout<<"********************************************************************************\n";
cout<<"ENTER THE CORRECT CATEGORY NUMBER OF YOUR CHOICE: ";
cin>>ch2;
if((ch2==1)||(ch2==2))
{
clrscr();
cout<<"************** --------------------------------------------- *******************\n";
if(ch2==1)
{
cout<<"************** SRS CINEMAS HAVE THE FOLLOWING MOVIES PLAYING:*******************\n";
movies();
}
else
{
cout<<"************** PVR CINEMAS HAVE THE FOLLOWING MOVIES PLAYING:*******************\n";
movies();
}
}
else
{
cout<<"###### WRONG INPUT #######";
assist();
}
}
void delhi()
{
int ch1;
clrscr();
cout<<"********************************************************************************\n";
cout<<"************** ------------------------------------------- *********************\n";
cout<<"**************    DELHI HAS THE FOLLOWING CINEMAS :        *********************\n";
cout<<"************** ------------------------------------------- *********************\n";
cout<<"**************    1) INOX CINEMAS                          *********************\n";
cout<<"**************    2) EROS CINEMAS                          *********************\n";
cout<<"********************************************************************************\n";
cout<<"ENTER THE CORRECT CATEGORY NUMBER OF YOUR CHOICE: ";
cin>>ch1;
if((ch1==1)||(ch1==2))
{
clrscr();
cout<<"************ ---------------------------------------------- ********************\n";
if(ch1==1)
{
cout<<"************ INOX CINEMAS HAVE THE FOLLOWING MOVIES PLAYING:********************\n";
movies();
}
else
{
cout<<"************ EROS CINEMAS HAVE THE FOLLOWING MOVIES PLAYING:********************\n";
movies();
}
}
else
{
cout<<"WRONG INPUT";
assist();
}
}
void main()
{
int ch;
char choice;
do{    choice='n';
clrscr();
cout<<"********************************************************************************\n";
cout<<"**************** ------------------------------------------- *******************\n";
cout<<"**************** WELCOME TO THE INDIAN TICKET BOOKING SYSTEM *******************\n";
cout<<"**************** ------------------------------------------- *******************\n";
cout<<"****************           1) DELHI                          *******************\n";
cout<<"****************           2) GURGAON                        *******************\n";
cout<<"****************           3) CHANDIGARH                     *******************\n";
cout<<"********************************************************************************\n";
cout<<"ENTER THE CORRECT CATEGORY NUMBER OF YOUR CHOICE : ";
cin>>ch;
cout<<endl;
switch(ch)
{
case 1:
{
delhi();
}
break;
case 2:
{
ggn();
}
break;
case 3:
{
chd();
}
break;
default :
{
cout<<"####### WRONG INPUT #######";
assist();
}
}
cout<<"\nDo you wish to re-execute the program ?( 'Y' for yes, any other letter for no): ";cin>>choice;}while((choice=='y')||(choice=='Y'));
getch();
}