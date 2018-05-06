#include <iostream>
#include <string>
#include <iomanip> 
#include <fstream>

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
  
  
 cout <<  "~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-" << endl;
 cout << "|         Range Calculator         |" << endl << "~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-" << endl;
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
  myfile.open ("DOPE.txt", ios::out | ios::app | ios::binary);
 
 
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
 cout << endl;
 cout <<  "~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-" << endl;


myfile.close();

 //cout << endl << "Hit or Miss?";
 
 
 return 0;
}
