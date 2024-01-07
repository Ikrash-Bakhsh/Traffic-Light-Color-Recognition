#include<iostream>
using namespace std;
int main()
{
    string a,red="red",yellow="yellow",green="green";
    
    cout<<"Enter traffic light color = ";
    getline(cin,a);
    
    if (a==red)
    {
        cout<<"Color of traffic light is red";
    }
    else if(a==yellow)
    {
        cout<<"Color of traffic light is yellow";
    }
    else if(a==green)
    {
        cout<<"Color of traffic light is green";
    }
    else
    {
        cout << "Invalid color";
    }

    return 0;
}

