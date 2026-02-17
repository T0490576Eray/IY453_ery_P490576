**FOOTBALL CAREER JOURNEY**

------------------------------------------------------------------------------------------------------------------------------ 

- INTRODUCTION
  
  In this project  I am going to devolop  text-based "choose your own adventure" game using c++.The story is about young football player who wants to become a professional football player. Player will make important decisions about training,personal life and matches.The purpose of this software to creating interactive game with using text,choices and simple logic.

------------------------------------------------------------------------------------------------------------------------------

- ANALYSIS & DESIGN
  
  **First Stage**
  
  Choices: There are at least 30 binary choices some choices lead the victory while others lead to game over.
  
  Inventory system: Player can collect item like "professional football boots"" to increase shoot accuracy,"energy drink"" to restore stamina,"needle" to recovery from injury 
  
  Player Statistics: System tracks energy,attack and score to determine if the player can continue or faces a game over.
  
  **Second Stage**
  
  Inputs: Player name , Players kit number, Player choices
  
  Outputs: Story messages, Result of choices, Game over messages, Inventory List,Error or invalid input messages,Final screen
  
  Processes: Show story text,check player choice,add or remove items from inventory
  
  **Third Stage**

------------------------------------------------------------------------------------------------------------------------------

- REFERENCES

------------------------------------------------------------------------------------------------------------------------------

- APPENDIX CODE LISTING

- #include <iostream>  
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
