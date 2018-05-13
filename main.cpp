#include <iostream>
#include <string>
#include <iomanip> 
#include <fstream>
#include <sstream>
#include <limits> 
#include <ios> 

using namespace std;

class Weapons {
  protected:
    double distanceFormulaMeter(double length, double &mil) {
      range = (25.4 * length)/mil;
      return range;
    };
    void distanceFormulaYard(double length, double &mil){
      range = (27.7 * length)/mil;
      return;
} double range;
  private:
    double distance;
    int constant=10;
    
    
  public:
    
    double distanceMeter(double leng, double &mil){
      range = distance;
      distanceFormulaMeter(leng, mil);
      return range; }
    double distanceYard(double leng, double &mil){
      range = distance;
      distanceFormulaYard(leng, mil);
      return range;  
    }
    };
class Sniper : public Weapons {
  private:
  int const constant = 10;
  double wind;
  public:
  double windFormula(double windVel){
      while (range > 10){
        range = range/10;
      }
      wind = (range * windVel)/constant;
      return wind;
      
      };
};

class M4 : public Weapons {
  private:
  int const constant = 7;
  double wind;
  
  public:
  double windFormula(double windVel){
      while (range > 10){
        range = range/10;
      }
      wind = (range * windVel)/constant;
      
      return wind;
      };
};

class Blaster : public Weapons {
  private:
  int const constant = 3;
  double wind;
  public:
  
  double windFormula(double windVel){
    while (range > 10){
        range = range/10;
      }
      wind = (range * windVel)/constant;
      return wind;
      
      };
};

class DeathRay : public Weapons {
  private:
  double const constant = 3.0e+10;
  double wind;
  public:
  double windFormula(double windVel){
    while (range > 10){
        range = range/10;
      }
      
      wind = (range * windVel)/constant;
      return wind;
      
      };
};

char MatrixRossWells[9][16] = {
    
    { ' ', ' ', ' ', ' ', ' ', ' ', ' ', '1', ' ', ' ', ' ', ' ',' ',' ',' ',' '},
    { ' ', ' ', ' ', ' ', ' ','_','_','_','_','_', ' ', ' ',' ',' ',' ',' '},
    {' ',' ',' ',' ','(','a','*','b','*','c',')',' ',' ',' ',' ',' '},
   {' ',' ',' ',' ',' ','|','d','e','f','|',' ',' ',' ',' ',' ',' '},
    {' ',' ','2',' ','/','g','h','i','j','k','l','\\',' ','3',' ',' '},
   {' ',' ',' ','/','m','/','|','n','o','|','\\','p','\\',' ',' ',' '},
  {' ',' ','/','q','/',' ','|','r','s','|',' ','\\','t','\\',' ',' '},
   {' ',' ',' ',' ',' ',' ','|','u','v','|',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ','4',' ',' ',' ',' ',' ',' ',' ',' '}
};

void Draw()

{
  cout << endl;
    for (int i = 0; i < 9; i++)
    {
       for (int j = 0; j < 16; j++)
       {
           cout << MatrixRossWells[i][j] << " ";
           
       }
       cout << endl;
       
}
}
    void Input()
    {
        char z;
        char player = 'x';
        cout << "Enter a letter (or number for miss):";
        cin >> z;
        cout << endl;
        
        if (z == '1')
            {MatrixRossWells[0][7] = player;}
        else if (z == 'a'){
            MatrixRossWells[2][5] = player;}
        else if(z == 'b'){
            MatrixRossWells[2][7] = player;}
        else if(z == 'c'){
            MatrixRossWells[2][9] = player;}
        else if(z == 'd'){
            MatrixRossWells[3][6] = player;}
        else if(z == 'e'){
            MatrixRossWells[3][7] = player;}
        else if(z == 'f'){
            MatrixRossWells[3][8] = player;}
        else if(z == '2'){
            MatrixRossWells[4][2] = player;}
        else if(z == 'g'){
            MatrixRossWells[4][5] = player;}
        else if(z == 'h'){
            MatrixRossWells[4][6] = player;}
        else if(z == 'i'){
            MatrixRossWells[4][7] = player;}
        else if(z == 'j'){
            MatrixRossWells[4][8] = player;}
        else if(z == 'k'){
            MatrixRossWells[4][9] = player;}
        else if(z == 'l'){
            MatrixRossWells[4][10] = player;}
        else if(z == '3'){
            MatrixRossWells[4][13] = player;}
        else if(z == 'm'){
            MatrixRossWells[5][4] = player;}
        else if(z == 'n'){
            MatrixRossWells[5][7] = player;}
        else if(z == 'o'){
            MatrixRossWells[5][8] = player;}
        else if(z == 'p'){
            MatrixRossWells[5][11] = player;}
        else if(z == 'q'){
            MatrixRossWells[6][3] = player;}
        else if(z == 'r'){
            MatrixRossWells[6][7] = player;}
        else if(z == 's'){
            MatrixRossWells[6][8] = player;}
        else if(z == 't'){
            MatrixRossWells[6][12] = player;}
        else if(z == 'u'){
            MatrixRossWells[7][7] = player;}
        else if(z == 'v'){
            MatrixRossWells[7][8] = player;}
        else if(z == '4'){
            MatrixRossWells[8][7] = player;}
      
    }
   
    char Hit()
    {
    if (MatrixRossWells[0][7] == 'x')
       {return 'x';}
    else if (MatrixRossWells[2][5] == 'x')
        {return 'x';}
    else if (MatrixRossWells[2][7] == 'x')
        {return 'x';}
    else if (MatrixRossWells[2][9] == 'x')
        {return 'x';}
    else if (MatrixRossWells[3][6] == 'x')
        {return 'x';}
    else if (MatrixRossWells[3][7] == 'x')
        {return 'x';}
    else if (MatrixRossWells[3][8] == 'x')
        {return 'x';}
    else if (MatrixRossWells[4][3] == 'x')
        {return 'x';}
    else if (MatrixRossWells[4][5] == 'x')
        {return 'x';}
    else if (MatrixRossWells[4][6] == 'x')
        {return 'x';}
    else if (MatrixRossWells[4][7] == 'x')
        {return 'x';}
    else if (MatrixRossWells[4][8] == 'x')
        {return 'x';}
    else if (MatrixRossWells[4][9] == 'x')
        {return 'x';}
    else if (MatrixRossWells[4][10] == 'x')
        {return 'x';}
    else if (MatrixRossWells[4][13] == 'x')
        {return 'x';}
    else if (MatrixRossWells[5][4] == 'x')
        {return 'x';}
    else if (MatrixRossWells[5][7] == 'x')
        {return 'x';}
    else if (MatrixRossWells[5][8] == 'x')
        {return 'x';}
    else if (MatrixRossWells[5][11] == 'x')
        {return 'x';}
    else if (MatrixRossWells[6][3] == 'x')
        {return 'x';}
    else if (MatrixRossWells[6][7] == 'x')
        {return 'x';}
    else if (MatrixRossWells[6][8] == 'x')
        {return 'x';}
    else if (MatrixRossWells[6][12] == 'x')
        {return 'x';}
    else if (MatrixRossWells[7][7] == 'x')
        {return 'x';}
    else if (MatrixRossWells[7][8] == 'x')
        {return 'x';}
    else if (MatrixRossWells[8][7] == 'x')
        {return 'x';}
    
    
    }






int main() {
  int weaponChoice;
  int unit;
  int target;
  double mil;
  int wind;
  int windVelocity;
  Weapons w;
  Sniper S;
  M4 M;
  Blaster B;
  DeathRay D;
  char player = 'x';
  string hitOrMiss;
  string comment;
  int shoot = 1;
  
  
 cout <<  "~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-" << endl;
 cout << "|         Range Calculator         |" << endl;
 cout << "~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-" << endl;
 cout << endl << "      Please select your weapon" << endl;
 cout << setw(10) << left << " " << "1. Sniper Rifle" << endl;
 cout << setw(10) << left << " " << "2. M4 Carbine" << endl;
 cout << setw(10) << left << " " << "3. Imperial Blaster" << endl;
 cout << setw(10) << left << " " << "4. Death Ray" << endl << endl;
 
 cout << "Enter a number 1-4: ";
 cin >> weaponChoice;
 while (weaponChoice < 1 || weaponChoice > 4) {
   cout << "Please select between 1 and 4: ";
   cin >> weaponChoice;
 }
  ofstream myfile;
  myfile.open ("DOPE.txt", ios:: in | ios::out | ios::app | ios::binary);
 
 while (shoot == 1){
 if (weaponChoice == 1){
   cout << "Sniper Rifle selected." << endl;
   myfile << setw(17) << left << "Sniper Rifle    ";
 }
 else if (weaponChoice ==2){
   cout << "M4 Carbine selected." << endl;
   myfile << setw(17) << left <<"M4 Carbine      " ;
 }
 else if (weaponChoice == 3){
   cout << "Imperial Blaster selected. (Don't miss) " << endl;
   myfile << setw(17) << "Imperial Blaster ";
 }
 else {
   cout << "Death Ray selected." << endl;
   cout << setw(17) << "Death Ray        ";
 }
 
 
  cout << endl << "Please choose the output for the range: " << endl;
  cout << setw(10) << left << " " << "1. Meters" << endl;
  cout << setw(10) << left << " " << "2. Yards" << endl << endl;
  
  cout << "Please enter 1 or 2: ";
  cin >> unit;
  while (unit < 1 || unit > 2){
    cout << "Please enter 1 or 2: ";
    cin >> unit;
  }
 cout <<  "~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-" << endl;
 
 
 cout << endl << "Please enter the length in inches of your target: ";
 cin >> target;
 
 cout << "Please enter the mil dot reading: ";
 cin >> mil;
 cout << endl;

 myfile << setw(10) << left << "Target(in):" << target <<  "    Mil:" << mil; 
 
 if (unit == 1){
   w.distanceMeter(target,mil);
   cout << "Range: " << w.distanceMeter(target, mil) << " meters." << endl;
   myfile << setw(17) << left << "      Range in meters:" << w.distanceMeter(target, mil);
 }
 else {
   w.distanceYard(target,mil);
   cout << "Range: " << w.distanceYard(target, mil) << " yards." << endl;
   myfile << setw(17) << left << "      Range in yards:" << w.distanceYard(target,mil);
 }
 cout <<  "~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-" << endl;
 
 
 cout << endl << "Is there wind?" << endl;
 cout << setw (10) << left << " " << "1. Yes" << endl;
 cout << setw (10) << left << " " << "2. No" << endl << endl;
 cout << "Please enter 1 or 2: ";
 cin >> wind;
 while (wind < 1 || wind > 2){
   cout << "Please enter 1 or 2: ";
   cin >> wind;
 }
 

 if (wind == 1){
   cout << endl << "Please enter the wind velocity (in MPH): ";
   cin >> windVelocity;
  
  if (weaponChoice == 1){
   S.distanceYard(target, mil);
   cout << "Wind Correction: " << fixed << setprecision(1) << S.windFormula(windVelocity) << " MOA";
   myfile << "     Wind Correction: " << fixed << setprecision(1) << S.windFormula(windVelocity) << " MOA";
   
 }
 else if (weaponChoice ==2){
   M.distanceYard(target,mil);
   cout << "Wind Correction: " << fixed << setprecision(1) << M.windFormula(windVelocity) << " MOA";
   myfile << "     Wind Correction: " << setprecision (1) << M.windFormula(windVelocity) << " MOA";
 }
 else if (weaponChoice == 3){
   B.distanceYard(target,mil);
   cout << "Wind Correction: " << fixed <<  setprecision(1) << B.windFormula(windVelocity) << " MOA";
   myfile << "     Wind Correction: " << fixed <<  setprecision(1) << B.windFormula(windVelocity) << " MOA";
 }
 else {
   D.distanceYard(target,mil);
   cout << "Wind Correction: " << fixed << setprecision(1) << D.windFormula(windVelocity) << " MOA";
   myfile << "     Wind Correction: " << fixed << setprecision(1) << D.windFormula(windVelocity) << " MOA";
 }
 }
 else {
   
 }
  cin.ignore(numeric_limits<streamsize>::max(),'\n');
 
 cout << endl;
 cout <<  "~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-" << endl;
 cout << "Please indicate point of impact:" << endl << endl;
 Draw();
 Input();
 Hit();
 Draw();
   cin.ignore(numeric_limits<streamsize>::max(),'\n');
 cout << endl << "Hit or miss? (Write Hit or Miss):";
 cin >> hitOrMiss;
 myfile << "    " << hitOrMiss;
 cout << "Please write any comments:"; 
 
 getline(cin, comment);
 cin.ignore();
 cout << endl << endl;
 myfile << "     " << comment << endl;
 
  cin.ignore(numeric_limits<streamsize>::max(),'\n');
 cout << "Another reading?" << endl;
 cout << "1. Yes" << endl << "2. No" << endl << endl;
 cout << "Please enter 1 or 2:";
 cin >> shoot;
 cout << endl;
 
 
 while (shoot < 1 || shoot > 2){
   cout << "Please enter 1 or 2:";
   cin >> shoot;
 }

}







myfile << endl;
    for (int i = 0; i < 9; i++)
    {
       for (int j = 0; j < 16; j++)
       {
           myfile << MatrixRossWells[i][j] << " ";
           
       }
      myfile << endl; 
    }

myfile.close();

ifstream output("DOPE.txt");
cout << output.rdbuf();



 
 
 return 0;

}
