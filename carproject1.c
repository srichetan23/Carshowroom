#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int f=-1,r=-1;
//int CQ[MAX];
int flag=0,s=0,m;
int i,credit,cvv,fin,otp;
char bank,review,type;
//int company;
//char model;
//struct car
//{
   int colour,company;
    char model,address;
//}G[MAX];
struct customer
{
    char name[100];
    int number;
    char address;
} CQ[MAX];
enum boolean{true,false};
enum boolean isempty()
{
    if(f==-1||r==-1)
        return true;
    else
        return false;
}
enum boolean isfull()
{
    if(f==0&&r==MAX-1)
        return true;
    else
        return false;
}
void firstcust()
{
    if(f==-1||r==-1)
    {
        printf("No cars are available\n ");
        return;
    }
    printf("%s",CQ[f].name);
}
void lastcust()
{
    if(f==-1||r==-1)
    {
        printf("no cars are available\n");
        return;
    }
    printf("%s",CQ[r].name);
}
void display()
{
    int i;
    if(f==-1||r==-1)
    {
        printf("no cars are avaialable\n");
        return;
    }
    else if(f<r)
    {
        for(i=f;i<=r;i++)
            printf("%s",CQ[0].name);
    }
    else
    {
        for(i=f;i<MAX;i++)
            printf("%s",CQ[0].name);
        for(i=0;i<=r;i++)
            printf("%s",CQ[0].name);
    }
}
void dele()
{
    //char ele;
    if(isempty())
    {
        printf("no cars\n");
        return;
    }
   // ele=CQ[f];
    if(f==r)
    {
        f=-1;
        r=-1;
    }
    else
        f=(f+1)%MAX;
    printf("%s is deleted\n",CQ[0].name);
}
void bookacar()
{
   // printf(".........WELCOME TO VNRVJIET PLATFORM FOR BOOKING YOUR CARS THROUGH  ONLINE MODE..........\n ");
    int item;
    //if(top==-1)
    //{
      //  printf("NO CARS ARE AVAILABLE\n");
    //}

         //while(stack[top]==MAX-1)
         //{
             //top=top+1;
             //stack[top]=item;
           //  printf("MODEL 1\n");
         //    printf("MODEL 2\n");
           //  printf("MODEL 3\n");
          //  printf("MODEL 4\n");
           // printf("MODEL 5\n");
         //}
       //}
       printf("ENTER YOUR NAME :-\n");
               scanf("%s",CQ[0].name);
               printf("ENTER YOUR MOBLIE NUMBER :-\n");
               scanf("%d",&CQ[0].number);
               printf("Enter your house address to which delivery is needed to be done\n");
               scanf("%s",&address);
              // printf("Enter car model customer needed\n");
               //scanf("%s",&model);
        //       for(i=0;i<MAX-1;i++)
          //     {
            //       if(model!=stack[i])
              //  {
                //    printf("model is not available\n");
                  //  flag=0;
                //}
                //else
                 //{
                   //  printf("model is available\n");
                    // flag=1;
              //   }
               //}
                //if(flag==1);
               printf("Enter the COMPANY of the CAR you would prefer :-\n");
               printf("1:TATA 2:TESLA 3:FORD 4:BMW :-\n");
               scanf("%d",&company);
               printf("Enter the MODEL NAME of the prefered company :-\n");
               scanf("%s",&model);
               printf("Enter the COLOUR of the car :-\n");
               printf("1:BLUE 2:RED 3:BLACK 4:WHITE :-\n");
               scanf("%d",&colour);
               // {
                    {
                        printf("DO YOU FURTHER WANTED TO INITIATE PROCESS FOR YOUR BOOKING\n");
                        printf("                                note:-by this you have initiated process towards the payment\n");
                    printf("1: YES\n2: NO\n");
                    scanf("%d",&fin);
                      if(fin==1)
                    {
                        //printf("you have further initiated process for booking\n");
                        printf("Enter your BANK name\n");
                        scanf("%s",&bank);
                        printf("Enter your CREDIT CARD number\n");
                        scanf("%d",&credit);
                        printf("Enter your CVV number\n");
                        scanf("%d",&cvv);
                        otp:
                        printf("An OTP has been sent your registered number\n");
                        printf("Enter the OTP number\n");
                        scanf("%d",&otp);
                            if(otp==1234)
                             {
                               printf("OTP verified\n");
                               s=1;
                             }
                            else
                            {
                              printf("Enter correct OTP number\n");
                              goto otp;

                            }

                        if(s==1)
                          {
                              printf("YOUR BOOKING IS CONFIRMED\n");
                          }
                    }

                else
                    printf("thank you\n");

            }               // printf("Enter the right otp number\n");
}
int main()
{
    int choice;
   do
   {
       printf("      .......WELCOME TO VNRVJIET PLATFORM FOR BOOKING CARS THROUGH ONLINE MODE.......\n\n\n");
       printf(" Enter your option :-\n\n");
    printf("1:I WANT TO BOOK A CAR\n2:FIRSTCUST\n3:LASTCUST\n4:DELE\n5:EXIT\n\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            bookacar();
        break;
        case 2:firstcust();
        break;
        case 3:lastcust();
        break;
        case 4:dele();
        break;
        case 5:exit;
        break;

    }
   }while(choice!=5);
   printf("       ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^       \n");
            printf("give your review about our service\n");
            scanf("%s",&review);
            printf("******************************************************************\n\n");
            printf("     .......THANK YOU FOR YOUR BOOKING..........\n");
            printf("..........DO VISIT US AGAIN............\n");
        return 0;
}
