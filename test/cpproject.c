#include <stdio.h>
#include <string.h>
char *mov[30],*cin[30];
void login();
void choice();
void movie();
void comedy();
void sports();
void seatm();
void seatc();
void seats();
void pricem();
void pricec();
void prices();
void displaym();
void displays();
void displayc();
char *langmo[20];
char name[20];
int mve; //movie viewing experince
int nos; //no. of seat
int schm; // choice of seat
int day,hour,month;
int langm;
//sports
char *qualitys[20];
int dates;
int months;
int hours;
char *sportstd[30];
char *sportname[20];
int sve;
int noss;
int n;
//comedy
int langc;
char *comedyname[30];
char *comedyplace[20];
int datec;
int monthc;
int hourc;
char *placec[100];
int nosc;
int cve;
int main()
{
  printf("Welcome to Bookmyshow.\n");
  login();
  printf("\n ENTER YOUR NAME: ");
  scanf("%s",name);
  choice();
  printf("Thank You.");
}
void choice()
{
  int c1;
  printf("Select the Section:\n");
  printf("1.Movie Ticket Booking.\n");
  printf("2.Comedy Show Ticket Booking.\n");
  printf("3.Sports Ticket Booking.\n");
  scanf("%d",&c1);
  if(c1==1){
    movie();


  }else if(c1==2){
    comedy();

  }else if (c1==3){
    sports();

  }
}
void movie()
{
  char *place[100];
  printf("\n Enter a date :");
  scanf("%d",&day);
  printf("\n Enter a month :");
  scanf("%d",&month);
  printf("\n Enter time (hour)  :");
  scanf("%d",&hour);



  printf("These movies are available on the basis of your choice:\n");
  printf("1.PATHAN \n");
  printf("2.RRR \n");
  printf("3.ANT MAN AND THE WASP \n");
  printf("4.INCANTATION \n");
  printf("5.50 SHADES OF GREY \n");
  printf("Select your movie:\n");
  int n;
  scanf("%d",&n);
  if(n==1)
  { *mov="PATHAN";

}
if(n==2)
{ *mov="RRR";

}
if(n==3)
{ *mov="ANT MAN AND THE WASP";

}
if(n==4)
{ *mov="INCANTATION";

}
if(n==5)
{ *mov="50 SHADES OF GREY";

}
int cinema;
switch(n)
{
  case 1:
  {
    printf("Select Cinema Hall \n");
    printf("1. NOVA CINEMAZ  \n");
    printf("2. IMPERIAL CINEMA  \n");
    printf("3. DELITE CINEMA\n ");
    scanf("%d",&cinema);
    if(cinema==1)
    {
      *cin="NOVA CINEMAZ";
    }
    if(cinema==2)
    {
      *cin="IMPERIAL CINEMA";
    }
    if(cinema==3)
    {
      *cin="DELITE CINEMA";
    }



    break;
  }

  case 2:
  {
    printf("\n select any CINEMA HALL NEAR TO YOU \n");
    printf("\n 1. NOVA CINEMAZ  \n");
    printf("\n 2. IMPERIAL CINEMA  \n");
    printf("\n 3. DELITE CINEMA \n");
    scanf("%d",&cinema);
    if(cinema==1)
    {
      *cin="NOVA CINEMAZ";
    }
    if(cinema==2)
    {
      *cin="IMPERIAL CINEMA";
    }
    if(cinema==3)
    {
      *cin="DELITE CINEMA";
    }



    break;
  }

  case 3:
  {
    printf("\n select any CINEMA HALL NEAR TO YOU \n");
    printf("\n 1. NOVA CINEMAZ  \n");
    printf("\n 2. IMPERIAL CINEMA  \n");
    printf("\n 3. DELITE CINEMA \n");
    scanf("%d",&cinema);
    if(cinema==1)
    {
      *cin="NOVA CINEMAZ";
    }
    if(cinema==2)
    {
      *cin="IMPERIAL CINEMA";
    }
    if(cinema==3)
    {
      *cin="DELITE CINEMA";
    }



    break;
  }

  case 4:
  {

    printf("\n select any CINEMA HALL NEAR TO YOU \n");
    printf("\n 1. NOVA CINEMAZ  \n");
    printf("\n 2. IMPERIAL CINEMA  \n");
    printf("\n 3. DELITE CINEMA \n");
    scanf("%d",&cinema);
    if(cinema==1)
    {
      *cin="NOVA CINEMAZ";
    }
    if(cinema==2)
    {
      *cin="IMPERIAL CINEMA";
    }
    if(cinema==3)
    {
      *cin="DELITE CINEMA";
    }


    break;
  }

  case 5:
  {

    printf("\n select any CINEMA HALL NEAR TO YOU \n");
    printf("\n 1. NOVA CINEMAZ  \n");
    printf("\n 2. IMPERIAL CINEMA  \n");
    printf("\n 3. DELITE CINEMA \n");
    scanf("%d",&cinema);
    if(cinema==1)
    {
      *cin="NOVA CINEMAZ";
    }
    if(cinema==2)
    {
      *cin="IMPERIAL CINEMA";
    }
    if(cinema==3)
    {
      *cin="DELITE CINEMA";
    }



    break;
  }
} seatm();
}
void seatm()
{
  printf("\n Select language \n");
  printf("\n 1. Hindi \n");
  printf("\n 2. English  \n");
  printf("\n 3. Tamil  \n");
  printf("\n 4. Telugu \n");
  //language selection

  scanf("%d",&langm);
  printf("\n Select Movie Viewing Experince \n");
  printf("\n 1. 2D \n");
  printf("\n 2. 3D  \n");
  printf("\n 3. IMAX  \n");
  printf("\n 4. IMAX 4D \n");

  scanf("%d",&mve);
  printf("\n How many seats ?\n");
  int ar[10]={1,2,3,4,5,6,7,8,9,10};
  for(int i=0; i<10; i++)
  {
    printf("  %d",ar[i]);
  }
  printf("\n");

  scanf("%d",&nos);
  int sn[nos];
  printf("Select seat preference\n");
  printf("1. Premium \n");
  printf("2. Executive\n");
  printf("3 Club\n");
  printf("4 Normal\n");

  scanf("%d",&schm);
  switch(schm)
  {
    case 1:
    {
      printf("Now select your seat\n ");
      printf(" \n Premium \n");
      int k=1;
      for(int  i=1; i<=6 ;i++)
      {
        for (int j=1; j<=5; j++)
        {
          printf(" | %d",k,"  |");
          k++;
        }
        printf("\n\n");
      }
      printf("\n \n This way screen \n\n");
    } break;
    case 2:
    {
      printf("Now select your seat\n ");
      printf(" \n Executive \n");
      int k=1;
      for(int  i=1; i<=5 ;i++)
      {
        for (int j=1; j<=4; j++)
        {
          printf(" | %d",k,"  |");
          k++;
        }
        printf("\n\n");
      }
      printf("\n \n This way screen \n\n");
    } break;
    case 3:
    {
      printf("Now select your seat\n ");
      printf(" \n Club \n");
      int k=1;
      for(int  i=1; i<=3 ;i++)
      {
        for (int j=1; j<=6; j++)
        {
          printf(" | %d",k,"  |");
          k++;
        }
        printf("\n\n");
      }
      printf("\n \n This way screen \n\n");
    } break;
    case 4:
    {
      printf("Now select your seat\n ");
      printf(" \n Normal \n");
      int k=1;
      for(int  i=1; i<=4 ;i++)
      {
        for (int j=1; j<=8; j++)
        {
          printf(" | %d",k,"  |");
          k++;}
          printf("\n\n");
        }
        printf("\n \n This way screen \n\n");
      } break;
      default: printf("\n Invalid choice \n");
      break;
    }
    for(int i=0; i<nos; i++)
    {
      scanf("%d",&sn[i]);
    }
    printf("\n Confirming Your Ticket \n");
    pricem();
}
void pricem()
{
    int a,b,c,d,e;
    a=150*schm;
    b=50*mve;
    c=((a+b)*nos);
    d=0.08*c+c;
    e=0.1*c;
    printf("          Movie Bill\n");
    printf("Seat Charge:                  %d\n",a);
    printf("Viewing Experience Charges:   %d\n",b);
    printf("Number of Seats:              %d\n",nos);
    printf("Taxes(18%):                   %d\n",c);
    printf("1st time Discount(10%):      -%d\n",e);
    printf("Total Payable Amount:         %d\n",d);
    displaym(d);
  }
void comedy()
{
    int select;
    printf("\n Enter a date  for comedy show :");
    scanf("%d",&datec);
    printf("\n Enter a month for comedy show :");
    scanf("%d",&monthc);
    printf("\n Enter time for comedy show :");
    scanf("%d",&hourc);



    printf("These show are available on the basis of your choice\n");
    printf("\n 1. ZYADA HOGAYA  (A STAND UP COMEDY SHOW  BY ADITYA GUNDETI)\n");
    printf("\n 2. IN CONVERSTION WIYH JAYA\n");
    printf("\n 3. OML COMEDY PIT SHOP\n");
    printf("\n 4. COMEDY LADDER\n");
    printf("\n 5. SAIKIRAN - ROLLING NEW JOKES\n");
    printf("\n select any show by clicking  the number\n");
    int n;
    scanf("%d",&n);
    if(n==1)
    {
      *comedyname="ZYADA HOGAYA  (A STAND UP COMEDY SHOW  BY ADITYA GUNDETI";
    }
    if(n==2)
    {
      *comedyname="IN CONVERSTION WIYH JAYA";
    }
    if(n==3)
    {
      *comedyname="OML COMEDY PIT SHOP";
    }
    if(n==4)
    {
      *comedyname="COMEDY LADDER";
    }
    if(n==5)
    {
      *comedyname="SAIKIRAN - ROLLING NEW JOKES";
    }

    switch(n)
    {
      case 1:
      {
        printf("\n SELECT PLACE\n");
        printf("\n 1.NAGPUR \n ");
        printf("\n 2.MUMBAI \n ");
        printf("\n 3. PUNE \n ");
        scanf("%d",&select);
        if(select==1)
        {
          *comedyplace="NAGPUR";
        }
        if(select==2)
        {
          *comedyplace="MUMBAI";
        }
        if(select==3)
        {
          *comedyplace=" PUNE";
        }


        break;
      }

      case 2:
      {
        printf("\n SELECT PLACE\n");
        printf("\n 1.NAGPUR \n ");
        printf("\n 2.MUMBAI \n ");
        printf("\n 3.  PUNE \n ");
        scanf("%d",&select);
        if(select==1)
        {
          *comedyplace="NAGPUR";
        }
        if(select==2)
        {
          *comedyplace="MUMBAI";
        }
        if(select==3)
        {
          *comedyplace=" PUNE";
        }
        break;
      }

      case 3:
      {
        printf("\n SELECT PLACE\n");
        printf("\n 1.NAGPUR \n ");
        printf("\n 2.MUMBAI \n ");
        printf("\n 3.  PUNE \n ");
        scanf("%d",&select);
        if(select==1)
        {
          *comedyplace="NAGPUR";
        }
        if(select==2)
        {
          *comedyplace="MUMBAI";
        }
        if(select==3)
        {
          *comedyplace=" PUNE";
        }
        break;
      }

      case 4:
      {
        printf("\n SELECT PLACE\n");
        printf("\n 1.NAGPUR \n ");
        printf("\n 2.MUMBAI \n ");
        printf("\n 3.  PUNE \n ");
        scanf("%d",&select);
        if(select==1)
        {
          *comedyplace="NAGPUR";
        }
        if(select==2)
        {
          *comedyplace="MUMBAI";
        }
        if(select==3)
        {
          *comedyplace=" PUNE";
        }
        break;
      }

      case 5:
      {
        printf("\n SELECT PLACE\n");
        printf("\n 1.NAGPUR \n ");
        printf("\n 2.MUMBAI \n ");
        printf("\n 3.  PUNE \n ");
        scanf("%d",&select);
        if(select==1)
        {
          *comedyplace="NAGPUR";
        }
        if(select==2)
        {
          *comedyplace="MUMBAI";
        }
        if(select==3)
        {
          *comedyplace=" PUNE";
        }
        break;
      }
    }

    seatc();
  }
void sports()
{
    int select,l;
    char *place[100];
    printf("\n Enter date :");
    scanf("%d",&dates);
    printf("\n Enter month :");
    scanf("%d",&months);
    printf("\n Enter time duration (hour)  :");
    scanf("%d",&hours);




    printf("These sports are available on the basis of your choice\n");
    printf("1.\n CRICKET \n");
    printf("2.\n FOOTBALL\n");
    printf("3.\n PRO KABBADI \n");
    printf("Select any sport by clicking the number\n");

    scanf("%d",&n);
    if(n==1)
    {
      *sportname="CRICKET";
    }
    if(n==2)
    {
      *sportname="FOOTBALL";
    }
    if(n==3)
    {
      *sportname=" PRO KABBADI ";
    }




    switch(n)
    {
      case 1:
      {
        printf("\n select any stadium \n");
        printf("\n 1. BRABOURNE STADIUM ,MUMBAI \n");
        printf("\n 2.INDRA GANDHI STADIUM ,VIJAYAWADA \n");
        printf("\n 3. INTRNATIONAL CRICKET STADIUM ,RAIPUR\n");
        scanf("%d",&select);

        if(select==1)
        {
          *sportstd="BRABOURNE STADIUM ,MUMBAI";
        }
        if(select==2)
        {
          *sportstd="INDRA GANDHI STADIUM ,VIJAYAWADA";
        }
        if(select==3)
        {
          *sportstd=" INTRNATIONAL CRICKET STADIUM ,RAIPUR";
        }


        break;
      }

      case 2:
      {
        printf("\n select any stadium \n");
        printf("\n 1. WEMBLEY STADIUM \n");
        printf("\n 2. LUZHNIKI STADIUM \n");
        printf("\n 3.  FNB STADIUM \n");
        scanf("%d",&select);

        if(select==1)
        {
          *sportstd="WEMBLEY STADIUM";
        }
        if(select==2)
        {
          *sportstd="LUZHNIKI STADIUM";
        }
        if(select==3)
        {
          *sportstd=" FNB STADIUM";
        }


        break;
      }

      case 3:
      {
        printf("\n select any stadium \n");
        printf("\n 1. SAWAI MANSINGH STADIUM \n");
        printf("\n 2. SHAHEED BHAGAT SINGH STADIUM  \n");
        printf("\n 3. SARDAR VALLABBHAI STADIUM  \n");
        scanf("%d",&select);
        if(select==1)
        {
          *sportstd="SAWAI MANSINGH STADIUM";
        }
        if(select==2)
        {
          *sportstd="SHAHEED BHAGAT SINGH STADIUM";
        }
        if(select==3)
        {
          *sportstd=" SARDAR VALLABBHAI STADIUM  ";
        }
        break;
      }
      default :
      {
        printf("INVALID CHOICE");
      }

    }
    seats();
}
void login()
{
    int n;
    while(1){
      printf("Enter the size of password:\n");
      scanf("%d",&n);
      char pass[n];
      printf("Enter password:\n");
      scanf("%s",pass);
      char saved[3]="xyz";
      int res=(strcmp(pass,saved));
      if(res==-1)
      {
        printf("Successfull Login!\n");
        break;
      }
      else
      {
        printf("Login Failed!!\n");
      }
    }
}
void displaym(int h)//sp seat preference
{
    int hall,bi;// bi is booking id
    char *expview[20],*seatp[20],*lang[20], *place[20];
    if (mve==1)
    {
      *expview="2D";
    }
    else if(mve==2)
    {
      *expview="3D";
    }
    else if(mve==3)
    {
      *expview="IMAX";
    }
    else if(mve==4)
    {
      *expview="IMAX 4D";
    }
    if(langm==1)
    {
      *langmo="HINDI";
    }
    else if(langm==2)
    {
      *langmo="ENGLISH";
    }
    else if(langm==3)
    {
      *langmo="TAMIL";
    }
    else if(langm==4)
    {
      *langmo="TELUGU";
    }
    if(schm==1)
    {
      *seatp="PREMIUM";
    }
    else if(schm==2)
    {
      *seatp="EXECUTIVE";
    }
    else   if(schm==3)
    {
      *seatp="CLUB";
    }
    else if(schm==4)
    {
      *seatp="NORMAL";
    }
    if(mve==1)
    {
      hall=1;
      bi=123;
    }
    if(mve==2)
    {
      hall=2;
      bi=124;
    }
    if(mve==3)
    {
      hall=3;
      bi=125;
    }
    if(mve==4)
    {
      hall =4;
      bi=126;
    }
    printf("\n Press 1 to display Ticket\n");
    printf("\n Press 2 to cancel the Ticket\n");
    int d;
    scanf("%d",&d);
    if(d==1)
    {    printf("\n                             BOOK MY SHOW\n");
    printf("\n                               YOUR TICKET \n");
    printf("\n \n");
    printf("\n %s\n",*mov);

    printf("Month:%d\n",month);
    printf("Date:%d\n",day);
    printf("Time:%d:00",hour);
    printf("\n EXPERINCE\n%s ",*expview);
    printf("\n SEAT PREFERENCE %s",*seatp);
    printf("\n LANGUAGE \n %s",*langmo);
    printf("\n No of seat selected %d\n",nos);
    printf("\n Price %d\n ",h);
    printf("\n Cinema hall %s\n",*cin);// for this fucntion to work changes should be done in void movie
    printf("\n Hall no. %d",hall);
    printf("\n BOOKED BY\n %s", name);
    printf("\n Booking id %d",bi);
    printf("\n For Contact Support  \n");
    printf("\n  Phone Number : 931980005\n");
    printf("\nDisclaimer\n");
    //disclaimer
    printf("1. Entry is allowed only for valid ticket holders.\n");
    printf("2. Guests aged under 18 will not be allowed in `A` rated movies.\n");
    printf("3. Children above the age of 3 years require tickets for `U` or `U/A` rated movies.\n");
    printf("4. In case a ticket is lost or misplaced, a duplicate ticket cannot be issued.\n");
    printf("5. Tickets once purchased cannot be cancelled, exchanged or refunded.\n");
    printf("6. Guest Agrees to be contacted by A M Cinema Management for the purpose of seeking feedback for service improvement.\n");
    printf("7. Decision(s) taken by A M Cinema Management shall be final and binding, Rights of admission reserved.\n");
    printf("8. Outside food and beverages are not allowed inside the cinema premises.\n");
    printf("9. Patrons under the influence of alcohol or drugs will not be allowed inside the Cinema Premises.\n");
  }



  else if(d==2)
  {
    printf("Your ticket is cancelled \n");
    printf("\n Refund will be sent back to your account in 24 hours\n");
  }
}
void pricec()
{
  int a,c,d,e;
  {

    a=150*cve;
    c=((a)*nosc);
    d=0.08*c+c;
    e=0.1*c;
    printf("           Bill\n");
    printf("Seat Charge:                  %d\n",a);
    printf("Number of Seats:              %d\n",nosc);
    printf("Taxes(18%):                   %d\n",c);
    printf("1st time Discount(10%):      -%d\n",e);
    printf("Total Payable Amount:         %d\n",d);
  } displayc(d);
}
void seatc()
{
  printf("\n Select language \n");
  printf("\n 1. Hindi \n");
  printf("\n 2. English  \n");
  printf("\n 3. Tamil  \n");
  printf("\n 4. Telugu \n");

  scanf("%d",&langc);
  printf("\n How many seats ?\n");
  int ar[10]={1,2,3,4,5,6,7,8,9,10};
  for(int i=0; i<10; i++)
  {
    printf("  %d",ar[i]);
  }
  printf("\n");
  scanf("%d",&nosc);
  int sn[nosc];
  printf("Select seat preference\n");
  printf("1. Premium \n");
  printf("2. Normal\n");
  printf("3 Private Lounge\n");
  scanf("%d",&cve);
  switch(cve)
  {
    case 1:
    {
      printf("Now select your seat\n ");
      printf(" \n Premium \n");
      int k=1;
      for(int  i=1; i<=6 ;i++)
      {
        for (int j=1; j<=5; j++)
        {
          printf(" | %d",k,"  |");
          k++;
        }
        printf("\n\n");
      }
      printf("\n \n This Way Stage \n\n");
    } break;
    case 2:
    {
      printf("Now select your seat\n ");
      printf(" \n Normal \n");
      int k=1;
      for(int  i=1; i<=5 ;i++)
      {
        for (int j=1; j<=4; j++)
        {
          printf(" | %d",k,"  |");
          k++;
        }
        printf("\n\n");
      }
      printf("\n \n This Way Stage \n\n");
    } break;
    case 3:
    {
      printf("Now select your seat\n ");
      printf(" \n Private Lounge \n");
      int k=1;
      for(int  i=1; i<=2 ;i++)
      {
        for (int j=1; j<=2; j++)
        {
          printf(" | %d",k,"  |");
          k++;
        }
        printf("\n\n");
      }
      printf("\n \n This Way Stage \n\n");
    } break;
    default: printf("\n Invalid choice \n");
    break;
  }
  for(int i=0; i<nosc; i++)
  { scanf("%d",&sn[i]);
}
printf("\n Confirming Your Ticket \n");
pricec();
}
void prices()
{
  int a,c,d,e;
  a=150*sve;
  c=((a)*noss);
  d=0.08*c+c;
  e=0.1*c;
  int b=d+150;
  printf("           Bill\n");
  printf("Seat Charge:                  %d\n",a);
  printf("Number of Seats:              %d\n",nos);
  printf("Taxes(18%):                   %d\n",c);
  printf("1st time Discount(10%):      -%d\n",e);
  printf("Hospitality Charges:          150");
  printf("Total Payable Amount:         %d\n",b);
  displays(b);
}
void displays(int y)//sp seat preference
{
  int bi;// bi is booking id
  char *seatps[20];



  if(noss%2==0)
  {

    bi=123;
  }
  else   if(noss%3==0)
  {

    bi=124;
  }
  else   if(noss%5==0)
  {

    bi=125;
  }
  else if(noss%7==0)
  {

    bi=126;
  }
  printf("\n Press 1 to display Ticket\n");
  printf("\n Press 2 to cancel the Ticket\n");
  int d;
  scanf("%d",&d);
  if(d==1)
  {    printf("\n BOOK MY SHOW\n");
  printf("\n YOUR TICKET \n");
  printf("\n \n");
  printf("\n sports chosen %s",*sportname);
  printf("\n Date:%d ",dates);
  printf("\n Month:%d",months);
  printf("\n Time:%d:00",hours);

  printf("\n SEAT PREFERENCE %s",*qualitys);

  printf("\n NO of seats selected %d\n",noss);
  printf("\n Price %d\n ",y);
  printf("\n stadium %s\n",*sportstd);// for this fucntion to work changes should be done in void movie

  printf("\n BOOKED BY\n %s", name);
  printf("\n Booking id %d",bi);
  printf("\n For Contact Support  \n");
  printf("\n  Phone Number : 931980005\n");
  printf("                                   Disclaimer\n");
  //disclaimer
  printf("1. Entry is allowed only for valid ticket holders.\n");
  printf("3. Children above the age of 3 years require tickets \n");
  printf("4. In case a ticket is lost or misplaced, a duplicate ticket cannot be issued.\n");
  printf("5. Tickets once purchased cannot be cancelled, exchanged or refunded.\n");
  printf("6. Guest Agrees to be contacted by A M Cinema Management for the purpose of seeking feedback for service improvement.\n");
  printf("7. Decision(s) taken by A M Cinema Management shall be final and binding, Rights of admission reserved.\n");
  printf("8. Outside food and beverages are not allowed inside the premises.\n");
  printf("9. Patrons under the influence of alcohol or drugs will not be allowed inside the Cinema Premises.\n");


}
if(d==2)
{
  printf("Your ticket is cancelled \n");
  printf("\n Refund will be sent back to your account in 24 hours\n");
}

}
void displayc(int y)//sp seat preference
{
  int hall,bi;// bi is booking id
  char *seatpc[20],*langcc[20];

  if(langc==1)
  {
    *langcc="HINDI";
  }
  else if(langc==2)
  {
    *langcc="ENGLISH";
  }
  else if(langc==3)
  {
    *langcc="TAMIL";
  }
  else if(langc==4)
  {
    *langcc="TELUGU";
  }
  if(cve==1)
  {
    *seatpc="PREMIUM";
  }
  else if(cve==2)
  {
    *seatpc="NORMAL";
  }
  else   if(cve==3)
  {
    *seatpc="PRIVATE LOUNGE";
  }

  else   if(cve==1)
  {
    hall=1;
    bi=123;
  }
  else if(cve==2)
  {
    hall=2;
    bi=124;
  }
  else  if(cve==3)
  {
    hall=3;
    bi=125;
  }

  printf("\n Press 1 to display Ticket\n");
  printf("\n Press 2 to cancel the Ticket\n");
  int d;
  scanf("%d",&d);
  if(d==1)
  {    printf("\n BOOK MY SHOW\n");
  printf("\n YOUR TICKET \n");
  printf("\n \n");
  printf("\n %s",*comedyname);
  printf("\n Date:%d ",datec);
  printf("\n Time:%d:00",hourc);

  printf("\n SEAT PREFERENCE %s",*seatpc);
  printf("\n LANGUAGE \n %s",*langcc);
  printf("\n No of seats selected %d\n",nosc);
  printf("\n Price %d\n ",y);
  printf("\n Place  %s\n",*comedyplace);// for this fucntion to work changes should be done in void movie
  printf("\n Hall no. %d",hall);
  printf("\n BOOKED BY\n %s", name);
  printf("\n Booking id %d",bi);

  printf("\n For Contact Support  \n");
  printf("\n Phone Number : 931980005\n");
  printf("\nDisclaimer\n");
  //disclaimer
  printf("1. Entry is allowed only for valid ticket holders.\n");

  printf("2. Children above the age of 3 years require tickets .\n");
  printf("3. In case a ticket is lost or misplaced, a duplicate ticket cannot be issued.\n");
  printf("4. Tickets once purchased cannot be cancelled, exchanged or refunded.\n");
  printf("5. Guest Agrees to be contacted by A M  Management for the purpose of seeking feedback for service improvement.\n");
  printf("6. Decision(s) taken by A M  Management shall be final and binding, Rights of admission reserved.\n");
  printf("7. Outside food and beverages are not allowed inside the  premises.\n");
  printf("8. Patrons under the influence of alcohol or drugs will not be allowed inside the Cinema Premises.\n");
}
if(d==2)
{
  printf("Your ticket is cancelled \n");
  printf("\n Refund will be sent back to your account in 24 hours\n");
}

}
void seats()
{

  switch(n)
  {
    case 1: { printf("Cricket seat selection \n");
    printf("\n How many seats ?\n");
    int ar[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0; i<10; i++)
    {
      printf("  %d",ar[i]);
    }
    printf("Enter number of seats:\n");
    scanf("%d",&noss);
    int sn[noss];
    printf("Select seat preference\n");
    printf("1. Premium Seating \n");
    printf("2. Platinum Seating \n");
    printf("3 Royal Box\n");
    printf("4 VIP Box\n");
    scanf("%d",&sve);
    if(sve==1)
    {
      *qualitys=" Premium Seating ";
    }
    if(sve==2)
    {
      *qualitys="  Platinum Seating ";
    }
    if(sve==3)
    {
      *qualitys="  Royal Box ";
    }
    if(sve==4)
    {
      *qualitys=" VIP Box";
    }
    switch(sve)
    {
      case 1:
      {
        printf("Now select your seat\n ");
        printf(" \n Premium Seating \n");
        int k=1;
        for(int  i=1; i<=6 ;i++)
        {
          for (int j=1; j<=8; j++)
          {
            printf(" | %d",k,"  |");
            k++;
          }
          printf("\n\n");
        }
        printf("\n \n North side \n\n");
        break; }
        case 2:
        {
          printf("Now select your seat\n ");
          printf(" \n Platinum Seating \n");
          int k=1;
          for(int  i=1; i<=5 ;i++)
          {
            for (int j=1; j<=8; j++)
            {
              printf(" | %d",k,"  |");
              k++;
            }
            printf("\n\n");
          }
          printf("\n \n East Side \n\n");
        } break;
        case 3:
        {
          printf("Now select your seat\n ");
          printf(" \n Royal Box \n");
          int k=1;
          for(int  i=1; i<=3 ;i++)
          {
            for (int j=1; j<=4; j++)
            {
              printf(" | %d",k,"  |");
              k++;
            }
            printf("\n\n");
          }
          printf("\n \n Pavillion Side \n\n");
        } break;
        case 4:
        {
          printf("Now select your seat\n ");
          printf(" \n Vip Box \n");
          int k=1;
          for(int  i=1; i<=4 ;i++)
          {
            for (int j=1; j<=4; j++)
            {
              printf(" | %d",k,"  |");
              k++;}
              printf("\n\n");
            }
            printf("\n \n South Side \n\n");
          } break;
          default: printf("\n Invalid choice \n");
          break;
        }  for(int i=1; i<=noss; i++)
        { scanf("%d",&sn[i]);
      } break;
    }
    case 2: { printf("Football seat selection \n");
    printf("\n How many seats ?\n");
    int ar[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0; i<10; i++)
    {
      printf("  %d",ar[i]);
    }
    printf("\n");
    scanf("%d",&noss);
    int sn[noss];
    printf("Select seat preference\n");
    printf("1. Front side \n");
    printf("2. East Midfield Side \n");
    printf("3 West Middield Side\n");
    printf("4 VIP Box \n");
    scanf("%d",&sve);

    if(sve==1)
    {
      *qualitys=" Front side";
    }
    if(sve==2)
    {
      *qualitys="  East Midfield Side";
    }
    if(sve==3)
    {
      *qualitys=" West Middield Side ";
    }
    if(sve==4)
    {
      *qualitys="VIP Box ";
    }

    switch(sve)
    {
      case 1:
      {
        printf("Now select your seat\n ");
        printf(" \n Front Side \n");
        int k=1;
        for(int  i=1; i<=6 ;i++)
        {
          for (int j=1; j<=8; j++)
          {
            printf(" | %d",k,"  |");
            k++;
          }
          printf("\n\n");
        }
        printf("\n \n North side \n\n");
      } break;
      case 2:
      {
        printf("Now select your seat\n ");
        printf(" \n East Midfield Side \n");
        int k=1;
        for(int  i=1; i<=5 ;i++)
        {
          for (int j=1; j<=8; j++)
          {
            printf(" | %d",k,"  |");
            k++;
          }
          printf("\n\n");
        }
        printf("\n \n East Side \n\n");
      } break;
      case 3:
      {
        printf("Now select your seat\n ");
        printf(" \n West Midfield Side \n");
        int k=1;
        for(int  i=1; i<=5 ;i++)
        {
          for (int j=1; j<=8; j++)
          {
            printf(" | %d",k,"  |");
            k++;
          }
          printf("\n\n");
        }
        printf("\n \n West Side \n\n");
      } break;
      case 4:
      {
        printf("Now select your seat\n ");
        printf(" \n Vip Box \n");
        int k=1;
        for(int  i=1; i<=4 ;i++)
        {
          for (int j=1; j<=4; j++)
          {
            printf(" | %d",k,"  |");
            k++;}
            printf("\n\n");
          }
          printf("\n \n South Side \n\n");
        } break;
        default: printf("\n Invalid choice \n");
        break;
      }  for(int i=1; i<=noss; i++)
      { scanf("%d",&sn[i]);
    } break;
  }

  case 3: { printf("Pro Kabaddi seat selection \n");
  printf("\n How many seats ?\n");
  int ar[10]={1,2,3,4,5,6,7,8,9,10};
  for(int i=0; i<10; i++)
  {
    printf("  %d",ar[i]);
  }
  printf("\n");
  scanf("%d",&noss);
  int sn[noss];
  printf("Select seat preference\n");
  printf("1. Yellow Upper \n");
  printf("2. Orange Lower \n");
  printf("3 Green Lower\n");
  printf("4 VIP Box \n");
  scanf("%d",&sve);

  if(sve==1)
  {
    *qualitys=" Yellow Upper";
  }
  if(sve==2)
  {
    *qualitys="   Orange Lower ";
  }
  if(sve==3)
  {
    *qualitys="Green Lower ";
  }
  if(sve==4)
  {
    *qualitys="VIP Box ";
  }
  switch(sve)
  {
    case 1:
    {
      printf("Now select your seat\n ");
      printf(" \n Yellow Upper \n");
      int k=1;
      for(int  i=1; i<=6; i++)
      {
        for (int j=1; j<=7; j++)
        {
          printf(" | %d",k,"  |");
          k++;
        }
        printf("\n\n");
      }
      printf("\n \n North Side \n\n");
    } break;
    case 2:
    {
      printf("Now select your seat\n ");
      printf(" \n Orange Lower \n");
      int k=1;
      for(int  i=1; i<=5 ;i++)
      {
        for (int j=1; j<=8; j++)
        {
          printf(" | %d",k,"  |");
          k++;
        }
        printf("\n\n");
      }
      printf("\n \n East Side \n\n");
    } break;
    case 3:
    {
      printf("Now select your seat\n ");
      printf(" \n Green Lower \n");
      int k=1;
      for(int  i=1; i<=5 ;i++)
      {
        for (int j=1; j<=8; j++)
        {
          printf(" | %d",k,"  |");
          k++;
        }
        printf("\n\n");
      }
      printf("\n \n West Side \n\n");
    } break;
    case 4:
    {
      printf("Now select your seat\n ");
      printf(" \n Vip Box \n");
      int k=1;
      for(int  i=1; i<=4 ;i++)
      {
        for (int j=1; j<=4; j++)
        {
          printf(" | %d",k,"  |");
          k++;}
          printf("\n\n");
        }
        printf("\n \n South Side \n\n");
      } break;
      default: printf("\n Invalid choice \n");
      break;
    }  for(int i=1; i<=noss; i++)
    { scanf("%d",&sn[i]);
  }
}
} prices();
}
