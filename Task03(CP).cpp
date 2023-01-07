#include<iostream>
#include<cmath>
using namespace std;
int taxCalculator(char itemCode,int itemPrice);

int main()
{
    int itemPrice;
    char itemCode;
    float finalPrice;

    cout<<"Enter the price of vehicle :";
    cin>>itemPrice;
    cout<<"Enter the code of vehicle(M,E,S,V,T)! :";
    cin>>itemCode;

    finalPrice= taxCalculator( itemCode, itemPrice);

    cout<<"The final price on a vehicle of type "<<itemCode;
    cout<<" after adding the tax is $"<<finalPrice;


}
int taxCalculator(char itemCode,int itemPrice)
{

    float taxRate;
    float taxAmount;
    float finalPrice;

    if(itemCode=='M')
        taxRate=0.06;
    if(itemCode=='E')
        taxRate=0.08;
    if(itemCode=='S')
        taxRate=0.1;
    if(itemCode=='V')
        taxRate=0.12;
    if(itemCode=='T')
        taxRate=0.15;

    taxAmount=itemPrice*taxRate/100;
    finalPrice=itemPrice+taxAmount;
    return finalPrice;
}