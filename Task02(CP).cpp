#include<iostream>
#include<cmath>
using namespace std;
float pyramid (string outputUnit,float length,float width,float height);

int main()
{
    float length,width,height;
    string outputUnit;
    long  Result;

    cout<<"Enter length of pyramid :";
    cin>>length;
    cout<<"Enter width of pyramid :";
    cin>>width;
    cout<<"Enter height of pyramid :";
    cin>>height;
    cout<<"Enter volume unit(millimeters, centimeters,meters,kilometers)  :";
    cin>>outputUnit;

    Result= pyramid(outputUnit,length,width,height);if(outputUnit=="meters")
    if(outputUnit=="meters")
    {
      cout<<"Required answer is "<<Result<<" cubic meters";

    }
    if(outputUnit=="millimeters")
    {
        Result=Result*pow(10,9);
         cout<<"Required answer is "<<Result<<" cubic milimeters";

    }
    if(outputUnit=="centimeters")
    { 
        Result=Result*pow(10,6);
         cout<<"Required answer is "<<Result<<" cubic centimeters";

    }
    if(outputUnit=="kilometers")
    {
         double Result1;
         Result1=Result*pow(10,-9);
         cout<<"Required answer is "<<Result1<<" cubic kilometers";;

    }

   

}
float pyramid (string outputUnit,float length,float width,float height)
{
     long Result;
    Result=length*width*height/3;
       return Result;
    

}