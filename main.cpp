#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int i=0,flag = 0;
    //using this flag to put the code into while loop to order multiple items.
    int price=0;
    /*using this price var to declare the total money to user and send it to shopkeeper for cash payment later sending it to main file 
    in which the data is being stored. SQL database*/

    while(flag = 1)
{

    
    
    cout<<"Enter the item no."<<endl;
 
    int ItNo;
    cin>>ItNo;
    int ItQty = 1;
    cout<<"Enter the quantity of the item."<<endl;
    //cout<<"x";//using this x to define the quantity, ek hi line me aayega na
    cin>>ItQty;
    int ItVal,z;

    int prices[] = {49,99,59,99,99,75,75,49,25,45,30,10,40,5,99};
    int size = sizeof(prices)/sizeof(prices[0]);
    for(z = 0; z < size; z++)
    {
        if(ItNo == z+1)
        {
            ItVal = prices[z];
            price = price + (ItVal * ItQty);
        }
    }

/*

    switch(ItNo){
case 1:
    price = price + (ItVal*ItQty);
    break;


case 2:
 
    price = price + (ItVal*ItQty);
    break;

case 3:
 
    price = price + (ItVal*ItQty);
    break;    

case 4:
 
    price = price + (ItVal*ItQty);
    break;

case 5:
 
    price = price + (ItVal*ItQty);
    break;

case 6:
 
    price = price + (ItVal*ItQty);
    break;

case 7:
 
    price = price + (ItVal*ItQty);
    break;

case 8:
 
    price = price + (ItVal*ItQty);
    break;

case 9:
 
    price = price + (ItVal*ItQty);
    break;

case 10:
 
    price = price + (ItVal*ItQty);
    break;

case 11:
 
    price = price + (ItVal*ItQty);
    break;

case 12:
 
    price = price + (ItVal*ItQty);
    break;

case 13:
 
    price = price + (ItVal*ItQty);
    break;

case 14:
 
    price = price + (ItVal*ItQty);
    break;

case 15:
 
    price = price + (ItVal*ItQty);
    break;


default:
    cout<<"Enter the value which is present in the menu please.";
    break;
    }








*/



    cout<<"Do you want to order something else?"<<endl;
    cin.ignore();
    string YesNo;
    getline(cin,YesNo);
    if (YesNo == "Yes" || YesNo == "yes")
    {
        flag++;
    }

    else 
    {
       // request is send to sk
    }
   
    //THIS IS WHERE TO END THE WHILE LOOP
    cout<<"Your total is:"<<price<<endl;
}

    return 0;

}