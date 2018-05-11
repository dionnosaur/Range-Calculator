/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>


using namespace std;

char player = 'x';

char Matrix[9][16] = {
    
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', '1', ' ', ' ', ' ', ' ',' ',' ',' ',' '},
    { ' ', ' ', ' ', ' ', ' ','_','_','_','_','_', ' ', ' ',' ',' ',' ',' '},
    {' ',' ',' ',' ','(','a','O','b','O','c',')',' ',' ',' ',' ',' '},
   {' ',' ',' ',' ',' ','|','d','e','f','|',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ','2','/','g','h','i','j','k','l','\\','3',' ',' ',' '},
   {' ',' ',' ','/','m','/','|','n','o','|','\\','p','\\',' ',' ',' '},
  {' ',' ','/','q','/',' ','|','r','s','|',' ','\\','t','\\',' ',' '},
   {' ',' ',' ',' ',' ',' ','|','u','v','|',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ','4',' ',' ',' ',' ',' ',' ',' '}
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
    void Input()
    {
        int z;
        cout << "Point to a spot on the grid: " << endl;
        cin >> z;
        
        if (z == 1)
        Matrix[0][7] = player;
        else if (z == 'a')
        Matrix[2][6] = player;
        else if(z == 'b')
        Matrix[2][8] = player;
        else if(z == 'c')
        Matrix[2][10] = player;
        else if(z == 'd')
        Matrix[3][6] = player;
        else if(z == 'e')
        Matrix[3][7] = player;
        else if(z == 'f')
        Matrix[3][8] = player;
        else if(z == 2)
        Matrix[4][3] = player;
        else if(z == 'g')
        Matrix[4][5] = player;
        else if(z == 'h')
        Matrix[4][6] = player;
        else if(z == 'i')
        Matrix[4][8] = player;
        else if(z == 'j')
        Matrix[4][9] = player;
        else if(z == 'k')
        Matrix[4][10] = player;
        else if(z == 'l')
        Matrix[4][11] = player;
        else if(z == 3)
        Matrix[4][13] = player;
        else if(z == 'm')
        Matrix[5][6] = player;
        else if(z == 'n')
        Matrix[5][7] = player;
        else if(z == 'o')
        Matrix[5][8] = player;
        else if(z == 'p')
        Matrix[5][11] = player;
        else if(z == 'q')
        Matrix[6][3] = player;
        else if(z = 'r')
        Matrix[6][7] = player;
        else if(z == 's')
        Matrix[6][8] = player;
        else if(z == 't')
        Matrix[6][12] = player;
        else if(z == 'u')
        Matrix[7][7] = player;
        else if(z == 'v')
        Matrix[7][8] = player;
        else if(z == 4)
        Matrix[8][8] = player;
      
    }
    
    char Hit()
    {
    if (Matrix[0][7] == 'x')
    return 'x';
    if (Matrix[2][6] == 'x')
    return 'x';
    if (Matrix[2][8] == 'x')
    return 'x';
    if (Matrix[2][10] == 'x')
    return 'x';
    if (Matrix[3][6] == 'x')
    return 'x';
    if (Matrix[3][7] == 'x')
    return 'x';
    if (Matrix[3][8] == 'x')
    return 'x';
    if (Matrix[4][3] == 'x')
    return 'x';
    if (Matrix[4][5] == 'x')
    return 'x';
    if (Matrix[4][6] == 'x')
    return 'x';
    if (Matrix[4][8] == 'x')
    return 'x';
    if (Matrix[4][9] == 'x')
    return 'x';
    if (Matrix[4][10] == 'x')
    return 'x';
    if (Matrix[4][11] == 'x')
    return 'x';
    if (Matrix[4][13] == 'x')
    return 'x';
    if (Matrix[5][6] == 'x')
    return 'x';
    if (Matrix[5][7] == 'x')
    return 'x';
    if (Matrix[5][8] == 'x')
    return 'x';
    if (Matrix[5][11] == 'x')
    return 'x';
    if (Matrix[6][3] == 'x')
    return 'x';
    if (Matrix[6][7] == 'x')
    return 'x';
    if (Matrix[6][8] == 'x')
    return 'x';
    if (Matrix[6][12] == 'x')
    return 'x';
    if (Matrix[7][7] == 'x')
    return 'x';
    if (Matrix[7][8] == 'x')
    return 'x';
    if (Matrix[8][8] == 'x')
    return 'x';
    
    
    }
    
  



    
    


int main()
{
    Draw();
    while (1)
    {
        Input();
        Draw();
        Hit();
        
    }

    
    
    
        
        
    
    
    

    return 0;
}











