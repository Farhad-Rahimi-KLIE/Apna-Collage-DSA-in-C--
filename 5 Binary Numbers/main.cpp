#include<iostream>

using namespace std;
//  Convert Decimal number to Binary Number
int DecimaltoBinary(int decimal){
    int asw = 0, pow = 1;

    while (decimal > 0)
    {
        int rem = decimal %2;
        decimal /= 2;
        asw += (rem * pow);
        pow*=10;
    }
    return asw;
}


//  Convert Binary number to Decimal Number
int BinaryToDecimal(int binary){
    int asw = 0, pow = 1;

    while (binary > 0)
    {
        int rem = binary % 10;
        asw += rem * pow;
        binary /= 10;
        pow*=2;
    }
    return asw;
}

int main()
{
    // int Dec = 10;
    // print 1 to 10 binary number
    // for (int i = 1; i <= 10; i++)
    // {
    //    cout<<DecimaltoBinary(i)<<endl;
    // }

    //    cout<<DecimaltoBinary(Dec)<<endl;
    

    // convert Binary to Decimal
    cout<<BinaryToDecimal(110010)<<endl;
    return 0;
}