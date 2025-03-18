#include<stdio.h>
#include<time.h>
struct climateDate
{
    int day ;
    int month;
    int year;
};
struct Climatetime
{
    int hour;
    int minutes;
    int sec;
};

struct climatecontrol
    {
            struct climateDate date;
            struct Climatetime time;
                float temperature;
                float humidity;
                int luminocity;
                int fanstatus;
    };
void display(struct climatecontrol cc )
{   
    printf("\n date:%d.%d.%d",cc.date.day,cc.date.month,cc.date.year);
    printf("\n time:%02d:%02d.%02d",cc.time.hour, cc.time.minutes, cc.time.sec);

    printf("\ntemperature:%1fdegree celcious",cc.temperature);
    printf("\nHumidity: %1f%%",cc.humidity);
    printf("\nluminosity:%1fflux",cc.luminocity);
    printf("\nfan status:%s",cc.fanstatus?"on":"off");


}
void accept(struct climatecontrol *cc)
{     
      cc ->date.day=2;
        cc->date.month=10;
        cc->date.year=2024;
        cc->time.hour=2;
        cc->time.minutes=10;
        cc->time.sec=2;
        printf("\nreading climate data");
        printf("\nenter temp (degree cel)");
        scanf("%f",&cc->temperature);
        printf("\nenter humidity(%%):");
        scanf("%f",&cc->humidity);
        printf("\nenter luminocity(%%):");
        scanf("%f",&cc->luminocity);
        printf("\nenter fan status(0 for off and 1 for on):");
        scanf("%d",&cc->fanstatus);

}
int main()
{ 
    time_t currentTime;
    time(&currentTime);
    struct tm *localTime =localtime(&currentTime);
    printf("\ncurrent time and date:%s",asctime(localTime));
       
               /*struct climatecontrol greenhouseclimate1 = {22.5,45.0,5000,1};
                struct climatecontrol greenhouseclimate2 = {22.5,45.0,5000,1};
                struct climatecontrol greenhouseclimate3= {22.5,45.0,5000,1};
                struct climatecontrol greenhouseclimate3 = {22.5,45.0,5000,1};
              struct climatecontrol greenhouseclimate4= {22.5,45.0,5000,1};*/
printf("\nwelcome to tambademala greenhouse smart system");
    struct climatecontrol greenhouseclimate = {{20,1,20024},{19,5,3},22.5,45.0,5000,1};
   // display(greenhouseclimate);

    int choice=1;
    do
    {
       printf("\nTambademala smart green house automation climate control");
       printf("\n1. set climate Control settings");
       printf("\n2. display current settings");
       printf("\n3. exit");
       printf("\nentter your choice");
       scanf("%d",&choice);

       switch (choice)
       {
       case 1:
        accept(&greenhouseclimate);
        break;
        case 2:
        accept(&greenhouseclimate);
        break;
       case 3:
        accept(&greenhouseclimate);
        break;
       default:
       printf("\ninvalid choice. please try again.");
        break;
       }


    } while (choice !=3);
    
return 0;
}