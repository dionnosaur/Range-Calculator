#include <iostream>
#include <string>
#include <iomanip> 

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
  void windFormula(double windVel){
      while (range > 10){
        range = range/10;
      }
      wind = (range * windVel)/constant;
      cout << "Wind Correction: " << setprecision(1) << wind << " MOA";
      };
};

class M4 : public Weapons {
  private:
  int const constant = 7;
  double wind;
  
  public:
  void windFormula(double windVel){
      while (range > 10){
        range = range/10;
      }
      wind = (range * windVel)/constant;
      cout << "Wind Correction: " << setprecision(1) << wind << " MOA";
      };
};

class Blaster : public Weapons {
  private:
  int const constant = 3;
  double wind;
  public:
  
  void windFormula(double windVel){
    while (range > 10){
        range = range/10;
      }
      wind = (range * windVel)/constant;
      cout << "Wind Correction: " << setprecision(1) << wind << " MOA";
      };
};

class DeathRay : public Weapons {
  private:
  double const constant = 3.0e+10;
  double wind;
  public:
  void windFormula(double windVel){
    while (range > 10){
        range = range/10;
      }
      
      wind = (range * windVel)/constant;
      cout << "Wind Correction: " << setprecision(1) << wind << " MOA";
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
 
 
 
 if (weaponChoice == 1){
   cout << "Sniper Rifle selected." << endl;
 }
 else if (weaponChoice ==2){
   cout << "M4 Carbine selected." << endl;
 }
 else if (weaponChoice == 3){
   cout << "Imperial Blaster selected. (Don't miss) " << endl;
 }
 else {
   cout << "Death Ray selected." << endl;
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
 
 
 if (unit == 1){
   w.distanceMeter(target,mil);
   cout << "Range: " << w.distanceMeter(target, mil) << " meters." << endl;
 }
 else {
   w.distanceYard(target,mil);
   cout << "Range: " << w.distanceYard(target, mil) << " yards." << endl;
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
   S.windFormula(windVelocity);
 }
 else if (weaponChoice ==2){
   M.distanceYard(target,mil);
   M.windFormula(windVelocity);
 }
 else if (weaponChoice == 3){
   B.distanceYard(target,mil);
   B.windFormula(windVelocity);
 }
 else {
   D.distanceYard(target,mil);
   D.windFormula(windVelocity);
 }
 }
 cout << endl;
 cout <<  "~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-" << endl;
 
 
 
 return 0;
}
