/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>


using namespace std;

char Matrix[9][16] = {
    { '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*','*','*','*'},
    { '*', '*', '*', '*', '*','_','_','_','_','_', '*', '*','*','*','*','*'},
    {'*','*','*','*','(','a','O','b','O','c',')','*','*','*','*','*'},
    {'*','*','*','*','*','{','d','e','f','}','*','*','*','*','*','*'},
    {'*','*','*','2','[','g','h','i','j','k','l','{','3','*','*','*'},
    {'*','*','*','[','m',']','|','n','o','|','{','p','}','*','*','*'},
    {'*','*','[','q',']','*','|','r','s','|','*','[','t',']','*','*'},
    {'*','*','*','*','*','*','|','u','v','|','*','*','*','*','*','*'},
    {'*','*','*','*','*','*','*','*','4','*','*','*','*','*','*','*'}
};


void Draw()
{
    for (int i = 0; i < 9; i++)
    {
       for (int j = 0; j < 16; j++)
       {
           cout << Matrix[i][j] << " ";
       }
       cout << endl;
    }
}
int main()
{
    Draw();
    
    

    return 0;
}

