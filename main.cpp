#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int i,token=1;
    while(1){ 
    int NoIt = 1;
    //using this flag to put the code into while loop to order multiple items.
    int price=0,flag = 1;
    /*using this price var to declare the total money to user and send it to shopkeeper for cash payment later sending it to main file 
    in which the data is being stored. SQL database*/

    while(flag == 1)
    {

    
    
    cout<<"Enter the item no."<<endl;
 
    int ItNo;
    cin>>ItNo;
    int ItQty = 1;
    cout<<"Enter the quantity of the item."<<endl;
    //cout<<"x";//using this x to define the quantity, ek hi line me aayega na
    cin>>ItQty;
    int ItVal,z,f = 0;
    int prices[] = {49,99,59,99,99,75,75,49,25,45,30,10,40,5,99};
    int size = sizeof(prices)/sizeof(prices[0]);
    int cusIt[size][2];
    for(z = 0; z < size; z++)
    {
        if(ItNo == z+1)
        {
            ItVal = prices[z];
            price = price + (ItVal * ItQty);
            cusIt[f][0] = ItNo;
            cusIt[f][1] = ItQty;
            f++;
        }
    }


    cout<<"Do you want to order something else?"<<endl;
    cin.ignore();
    string YesNo;
    getline(cin,YesNo);
    if (YesNo == "Yes" || YesNo == "yes")
    {
        NoIt++;
        cout<<"Your total is:"<<price<<endl;

    }

    else 
    {
        cout<<"Your total is: "<<price<<endl;
        flag == 0;
        cout<<"And your token no. is: "<<token<<endl;
        // token, cusIt and prices  will be sent
       // request is send to sk 
    }
   
        //THIS IS WHERE TO END THE WHILE LOOP
    }
    token++;
}

    return 0;

}