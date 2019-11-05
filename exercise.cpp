#include <iostream>
#include <string>

std::string shiftRight(std::string bits);

using namespace std;

int main() 
{
    string bit_string;

    cout << "Enter Bits: ";
    getline(cin, bit_string);
    cout << endl; 
    
    cout << "Shift Right: " << shiftRight(bit_string) << endl;

    return 0;
}

string shiftRight(std::string bits) 
{
    bits = bits.substr(bits.length() - 1, bits.length()) + bits.substr(0, bits.length() - 1);
    return bits;
}