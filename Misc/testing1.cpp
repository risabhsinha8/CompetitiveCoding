#include<iostream>
#include<stdlib.h>
 
 
 using namespace std; 
 
int main()
{
    int i;          //loop counter
    int num;        //store random number
 
    int randomize();    //call it once to generate random number
    for(i=1;i<=10;i++)
    {
        num=rand()%100; //get random number
        cout << num << "\t";
    }
    return 0;
}
