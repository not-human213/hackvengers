#include <bits/stdc++.h>
using namespace std;

int main()
{
    int flag=0;
    //using this flag to put the code into while loop to order multiple items.
    int price=0;
    /*using this price var to declare the total money to user and send it to shopkeeper for cash payment later sending it to main file 
    in which the data is being stored. SQL database*/




    
    
    cout<<"Enter the item no."<<endl;
 
    int ItNo;
    cin>>ItNo;
    int ItQty;
    cout<<"Enter the quantity of the item."<<endl;
    cout<<"x";//using this x to define the quantity, ek hi line me aayega na
    cin>>ItQty;
        int ItVal;


if(ItNo==1)
{
    ItVal=49;
}
else if(ItNo==2)
{
    ItVal=99;
}
else if(ItNo==3)
{
    ItVal=59;
}
else if(ItNo==4)
{
    ItVal=99;
}

else if(ItNo==5)
{
    ItVal=99;
}
else if(ItNo==6)
{
    ItVal=75;
}
else if(ItNo==7)
{
    ItVal=75;
}
else if(ItNo==8)
{
    ItVal=49;
}
else if(ItNo==9)
{
    ItVal=25;
}
else if(ItNo==10)
{
    ItVal=45;
}
else if(ItNo==11)
{
    ItVal=30;
}
else if(ItNo==12)
{
    ItVal=10;
}
else if(ItNo==13)
{
    ItVal=40;
}
else if(ItNo==14)
{
    ItVal=99;
}
else if(ItNo==15)
{
    ItVal=99;
}









   
   
   
   
   





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












    cout<<"Do you want to order something else?"<<endl;
    int YesNo;
    cin>>YesNo;
    if (YesNo=='Y')
    {
        flag++;
    }

    else 
    {
       
    }
   
    //THIS IS WHERE TO END THE WHILE LOOP
    cout<<"Your total is:"<<price;

    return 0;

}