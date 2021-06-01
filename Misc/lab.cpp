#include<bits/stdc++.h>

int main()
{
    string s, name, bday;
    int i=0;
    map<string,string> m;
    ifstream file("data.txt");
    while(get_line(file,s))
    {
        if(i==0)
        {
            i++;
            name=s;
        }
        else
        {
            i--;
            bday=s;
            m.insert({name, bday});
        }
    }
    cout<<"Enter name to find bday : ";
    cin>>name;
    auto itr = m.find(name);
    if(itr==m.end())
    {
        cout<<"Name not found!"<<endl;
    }
    else
    {
        cout<<"The birthday of "<<itr.first<<" is on "<<itr.second<<endl;
    }
}