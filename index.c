
#include<stdio.h>
#include<conio.h>
 int menu(); 
 void showdetails(); 
 void delete();
 void bike();
 void car();
 void bus();
 void track();
 int nob=0, noc=0, nobb=0, nott=0, amt=0, vehicle=0, count=0;
 int main()
  {
  	   printf("Durgesh's Project");
 while(1) 
 {        
    switch(menu())
    { 
        case 1:
               bike();
               break;
        case 2:
               car();
               break;
        case 3:
               bus();
               break;
        case 4:
               track();
               break;
        case 5:
               showdetails();
               break;
        case 6:
               delete();
        case 7:
		      exit(0);  
        default: 
               printf("\n choice  default");       
    
       } 

    }
     return 0;
  }
  int menu()
  {
    int ch;
    printf("\n [1]: Enter bike ");
    printf("\n [2]: Enter car ");
    printf("\n [3]: Enter bus ");
    printf("\n [4]: Enter track ");
    printf("\n [5]: Show details ");
    printf("\n [6]: Delete \n");
    printf(" [7]: Exit \n");
    printf("Enter the your chocie ");
    scanf("%d",&ch);
    return (ch);
  }
  void delete()
{
     nob=0;
     noc=0;
     nobb=0;
     nott=0;
     count=0;
}
void showdetails()
{
    printf("\n Number of Bike %d",nob);
    printf("\n Number of Car %d",noc);
    printf("\n Number of Bus %d",nobb);
    printf("\n Number of Track %d",nott);
    printf("\n Total Number vehicle  %d",vehicle);
    printf("\n Total Collection Amount   %d",amt);    
}
void bike()
{
printf("Bike Entry Done ");
nob++;
amt=amt+50;
vehicle =vehicle+1;
count++;
}
void car()
{
printf("Car Entry Done ");
noc++;
amt=amt+100;
vehicle =vehicle+1;
count++;
} 
void bus()
{
printf("Bus Entry Done ");
nobb++;
amt=amt+200;
vehicle =vehicle+1;
count++;
}
void track()
{
printf("Track Entry Done ");
nott++;
amt=amt+500;
vehicle =vehicle+1;
count++;
}
