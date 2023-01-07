#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    float iniHours;
    int hours;
    float days;
    int workers;
    int workingHours;
    int remainingHours;

    cout<<"Enter needed hours :";
    cin>>iniHours;
    hours=iniHours;

    cout<<"Enter days :";
    cin>>days;
    cout<<"Enter total number of workers :";
    cin>>workers;

    days=days-days*0.1;
    workingHours=workers*days*10;


    if(workingHours>hours)
    {
        remainingHours=workingHours-hours;
        cout<<"Yes! "<<remainingHours<<" hours left";
    }
    if(workingHours<hours)
    {
        remainingHours=hours-workingHours;
        cout<<"Not enough time! "<<remainingHours;
        cout<<" hours needed";
    }

}