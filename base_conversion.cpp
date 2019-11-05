/*
    Devin Kenney
    Mid-Term
    COP2220
    10/29/2019
*/
#include <iostream>
#include <string>

using namespace std;

string decToNewBase(int i, int b);
string getHexChar(int d);

int main() 
{
    cout << decToNewBase(10,10) << endl;
    cout << decToNewBase(10,8) << endl;
    cout << decToNewBase(10,2) << endl;
    cout << decToNewBase(10,16) << endl;
    
    return 0;
}

string decToNewBase(int i, int b) 
{
    if (b == 16)
    {
        return getHexChar(i);
    }
    
    int r = 0;
    string c = "";

    while (i > 0) 
    {
        r = i % b;
        i /= b;
        c += to_string(r);
    } 
    int n = c.length(); 

    for (int j = 0; j < n / 2; j++) 
        swap(c[j], c[n - j - 1]); 

    return c;
}

string getHexChar(int d)
{
    string hexStr[6] = {"A", "B", "C", "D", "E", "F"};
    string l = "";

    if (d < 10)
    {
         l = to_string(d);
    }
    else
    {
        d = d - 10;
        l = hexStr[d];   
    }
    
    return l;
}