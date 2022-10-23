#include<bits/stdc++.h>
using namespace std;
void manualMode();
void defaultMode();
int temp, timeToWash, operation;


int main() {
     int mode, part, waterLevel;
     int doorSensor=0, waterLevelSensor = 0, tempSensor = 25;
     char startPause;
     cout<<"\n\n************ Welcome To Our Controlling Washing Machine Project **********\n\n"<<endl;
 do{
      cout<<"\nChoose Mode:\n    (1)Automatic Mode\n    (2)Manual Mode \n";
      cin>>mode;
      if (mode == 1)
                 defaultMode();
      if (mode == 2)
                 manualMode();
 }
 while(mode <= 0 || mode > 2);
 cout<<"\nChoose Types of Cloths to wash:\n(1)Cotton\n(2)Silk\n(3)Woolen \n";
 cin>>part;
 switch(part){
            case 1:waterLevel= 15;
                 break;
            case 2:
                 waterLevel= 5;
                 break;
            case 3:
                 waterLevel = 10;
                 break;

            default :
                system("COLOR F") ;
                system("cls") ;
                cout<< " \n\n\n\n                   Sorry ! ! ! Wrong input . TRY AGAIN \n\n" ;
                exit(0) ;
 }
 if (doorSensor == 0){
      do{
                 cout<<"\nPress (S/s) to Start,and close the Door.\n"<<endl;
                 cin>>startPause;
                 cout<<"\nLED is On\n";
                 while(waterLevelSensor != waterLevel){
                             waterLevelSensor++;
                 }
                 while(tempSensor != temp){
                             tempSensor++;
                 }
                 cout<<"Washing Operation Started!               Time Left:"<<timeToWash<<endl;
                 cout<<"Washing with Powder Operation Started!\n";
                 timeToWash = timeToWash / 2 ;

                 if(operation == 1)
                 {
                     break;
                 }

                 cout<<"Deep Wash Operation Started!               Time Left:"<<timeToWash<<endl;
                 timeToWash = timeToWash / 2 ;

                 if(operation == 2)
                 {
                     break;
                 }

                 cout<<"Drying Operation Started!               Time Left:"<<timeToWash<<endl;
                 timeToWash = 0 ;
                 startPause = 'P';
      }
      while((startPause == 's') || (startPause =='S'));
 }
 cout<<"End!\nLED is Off";
 return 0;
}
void manualMode(){
    do
    {
        cout<<"\nEnter Temperature: \n";
        cin>>temp;
        if(temp < 25)
        {
            cout << "You can't select below room temperature. Try again!!" << endl ;
        }
    }
     while(temp<25);
     do
     {
         cout<<"\nEnter Time to wash: \n";
         cin>>timeToWash;
         if(timeToWash < 0)
        {
            cout << "Time Can't be NEGATIVE. Try again!!" << endl ;
        }
        else if(timeToWash ==0 || timeToWash < 6)
        {
            cout << "The machine need minimum time to wash(6 unit). Try again!!" << endl ;
        }
     }
     while(timeToWash <=5);
     cout<<"\nChoose Operation:\n(1)Water and Powder\n(2)Deep Wash\n(3)Dry\n(4)All\n";
     cin>>operation;
}
void defaultMode(){
     int whatToWash;
     cout<<"\nChoose what to Wash:\n(1)Shirt\n(2)Jeans Pant\n(3)Jacket\n";
     cin>>whatToWash;
     switch(whatToWash){
          case 1:
                temp = 30;
                timeToWash = 10;
                break;
          case 2:
                temp = 40;
                timeToWash = 15;
                break;
          case 3:
                temp = 60;
                timeToWash = 20;
                break;

          default :
                system("COLOR F") ;
                system("cls") ;
                cout<< " \n\n\n\n                   Sorry ! ! ! Wrong input . TRY AGAIN \n\n" ;
                exit(0) ;



                     }
 }
