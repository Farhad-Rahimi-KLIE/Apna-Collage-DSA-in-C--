#include<iostream>

using namespace std;

// void printNums(int n){
//     if (n == 1)
//     {
//             cout<<"1\n";
//             return;
//     }
    
//     cout<<n<<" ";
//     printNums(n-1);
// }

int Factorial(int n){
    if (n == 0)
    {
            return 1;
    }
    
    return n * Factorial(n-1);
}

int main()
{
    cout<<Factorial(5)<<endl;
    return 0;
}