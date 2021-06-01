#include<bits/stdc++.h>

using namespace std; 

int main()
{
    string s, name, bday;
    int i=0;
    map<string,string> m;
    ifstream file("data.txt"); //open file
    while(getline(file,s))  // read data from file
    {
        if(i==0)
        {
            i++;
            s=s.substr(0,s.size()-1); //remove linechange from name
            name=s;
        }
        else
        {
            i--;
            bday=s;
            s=s.substr(0,s.size()-1); //remove linechange from name
            m.insert({name, bday});  //store in file
        }
    }
    cout<<"Enter full name to find bday : ";
    getline(cin, name);
    auto itr = m.find(name);
    if(itr==m.end())
    {
        cout<<"Name not found!"<<endl;
    }
    else
    {
        cout<<"The birthday of "<<itr->first<<" is on "<<itr->second<<endl;
    }
}