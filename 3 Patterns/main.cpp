#include<iostream>

using namespace std;

int main()
{
    // Square Pattern
    //    int n = 4;
    //    for (int i = 1; i <= n; i++)
    //    {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    //    }

//   Example 2 in a b c d
    // int n = 4;
    //    for (int i = 1; i <= n; i++)
    //    {
    //     char ch = 'A';
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    //    }

    // Example 3

    // int n = 3;
    // int num = 1;
    //    for (int i = 1; i <= n; i++)
    //    {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<num;
    //         num++;
    //     }
    //     cout<<endl;
    //    }
       
// //   Example 4 in a b c d
//        int n = 3;
//     char ch = 'A';
//        for (int i = 1; i <= n; i++)
//        {
//         for (int j = 1; j <= n; j++)
//         {
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//        }



    //   Example 5
    //    int n = 4;
    //    for (int i = 0; i <n; i++)
    //    {
    //     for (int j = 0; j <i+1; j++)
    //     {
    //         cout<<(i+1);
    //     }
    //     cout<<endl;
    //    }


//  Example 5.5 in charcters
//   int n = 4;
//        for (int i = 0; i <n; i++)
//        {
//         for (int j = 0; j <i+1; j++)
//         {
//             cout<<char('A' + i);
//         }
//         cout<<endl;
//        }


//  Example 6
    // int n = 4;
    //    for (int i = 0; i <n; i++)
    //    {
    //     for (int j=1; j<=i+1; j++)
    //     {
    //         cout<<j;
            
    //     }
    //     cout<<endl;
    //    }


//  Example 6.5 in characters
    //    int n = 4;
    // for (int i = 0; i <=n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 1; j <i+1; j++)
    //     {
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

//   Example 7
//    int n = 4;
//        for (int i = 0; i <n; i++)
//        {
//         for (int j=i+1; j>0; j--)
//         {
//             cout<<j;
            
//         }
//         cout<<endl;
//        }


// Example 7.5 in characters
// int n = 4;
//        for (int i = 0; i <n; i++)
//        {
//         for (int j=i+1; j>0; j--)
//         {
//             cout<<char('A' + j-1);
            
//         }
//         cout<<endl;
//        }


// //   Example 8

//    int n = 4;
//    int num = 1;
//    for (int i = 0; i < n; i++)
//    {
//     for (int j = 0; j < i+1; j++)
//     {
//         cout<<num<<" ";
//         num++;
//     }
//     cout<<endl;
//    }
   

//     //   Example 9 character version

//    int n = 4;
//    char num = 'A';
//    for (int i = 0; i < n; i++)
//    {
//     for (int j = 0; j < i+1; j++)
//     {
//         cout<<num<<" ";
//         num++;
//     }
//     cout<<endl;
//    }



//   Example 10

//    int n = 4;
//    int num = 1;
//    for (int i = 0; i < n; i++)
//    {
//     for (int j = 0; j < i; j++)
//     {
//         cout<<" ";
//     }
//     for (int j = 0; j < n-i; j++)
//     {
//         cout<<(i+1)<<" ";
//     }
//     cout<<endl;
//    }



// Example 10 in characters

//  int n = 4;
//     for (int i = 0; i < n; i++) // outer loop
//     {
//         for (int j = 0; j < i; j++) // space loop
//         {
//             cout<<" ";
//         }

//         for (int j = 0; j < n-i; j++)
//         {
//             cout<<char('A'+i);
//         }
//         cout<<endl;
//     }


// Example 11

// int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         cout<<" ";
    //     }
        
    //     for (int j = 1; j <= i+1; j++)
    //     {
    //         cout<<j;
    //     }
        
    //     for (int j = i; j >0; j--)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    // in characters

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n-i-1; j++) // space
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j <= i+1; j++) // number 1
    //     {
    //         cout<<char('A'+j-1);
    //     }
    //     for (int j = i; j > 0; j--) // number 2
    //     {
    //         cout<<char('A'+j-1);
    //     }
    //     cout<<endl;
    // }

    return 0;
}