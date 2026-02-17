#include <iostream>
#include <string>
#include <vector>
 using namespace std;
class Player {
 private:
 string name;
 int kitNumber;
 int stamina;
 int shotPower;
 int lives;
 vector <string> inventory;

public:
 Player(string n int kit): name (n) , kitNumber(kit),stamina (100),shotPower(10),lives(3) {}

 void displayStats() {
  cout<< "\n---Player card---"<< name << ("No:"<<kitNumber<<)--<<endl;
  cout<<"Stamina: "<< stamina << "| Shot Power:" <<shotPower<< "| Lives:"<< lives<<endl;
  cout<<"Inventory: ";
  if (inventory.empty())cout<<"Empty"<<endl;
  cout <<"\n--------------------------------------------"<<endl;
 }
 void addInventory(string item) {inventory.push_back(item);}
 void updateStamina(int val) {stamina += val;}
 void updateShots(int val) {shotPower += val;}
 string getName() {return name;}

 class Scene {
  public:
 virtual void play(Player &p)};

}