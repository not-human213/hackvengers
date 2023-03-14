#include <bits/stdc++.h>
using namespace std;

int main()
{
    int prices[] = {49,99,59,99,99,75,75,49,25,45,30,10,40,5,99};
    string names[] = {"burger","pizza","paubhaji","paneer","biryani","noodles","manchuriyan","egg pulav","omlet","fry rice","daal chaval","naan","aloo sabji","Chapati","pasta"};
    int cusIt[2][8]={{1,4,3,6,4,1,7,2},{2,3,1,1,2,4,1,2}};
    int size = sizeof(prices)/sizeof(prices[0]);
    int token;
    int i,price;
    for(i = 0; i < size; i++)
    {
        cout<<names[cusIt[0][i] - 1];
        cout<<"\t";
        cout<<cusIt[1][i];
        cout<<"\t";
        cout<< prices[0];
        cout<<"\n";
        price += prices[i];
    }
    cout<< token + "\n";
    cout<< "\t" + price;
}