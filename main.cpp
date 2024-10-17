#include<iostream>
using namespace std;
int main()
{
    float value;
    cout<<"enter the value"<<endl;
    cin>>value;
    float input=value-(int)value;
    if(input>0 || input<0)
    {
        cout<<"floating point number"<<endl;
    }
    else{
    if(value>=0)
    {
        cout<<"The given value is integer"<<endl;
    }
    else if(value<0)
    {
        cout<<"The given value is signed integer"<<endl;
    }
    else if((value>='A' || value<='Z')||(value>='a' || value<='z'))
    {
            cout<<"The given value is character"<<endl;
    }
    else{
        cout<<"Invalid character"<<endl;
    }
    }
}
