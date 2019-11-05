/*
    Devin Kenney bond98041@gmail.com
    Convert string to ascii, add one, and bitshift binary by one
    10/02/2019
    Victoria Ramos vickynichol@gmail.com
*/
#include <iostream>
#include <string>


using namespace std;

int main() 
{
    string clear_text;
    string bs;
    string bit_string;

    int binary;

    int a = 0;
    int r = 0;

    int digit;

    cout << "Enter message to be encrypted: ";
    getline(cin, clear_text);
    cout << endl;

    bs = "";

    //converts string to ascii
    for (int i = 0; i < clear_text.length(); i++) 
    {
       a = toascii(clear_text[i] + 1);

       while (a > 0) 
       {
           r = a % 2;
           a /= 2;
           bs.append(to_string(r));
        }

       //add space between the binary
       bs = bs.substr(1, bs.length() - 1) + bs.substr(0,1);
       bs += " ";

    }
    
     cout << "Clear text is: " << clear_text << endl;
     cout << "Encrypted text is: " << bs << endl; 

    return 0;
}
