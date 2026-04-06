**FOOTBALL CAREER JOURNEY**

------------------------------------------------------------------------------------------------------------------------------ 

- INTRODUCTION
  
  In this project, I am developing a text-based “choose your own adventure” game
  using C++ language. Name of the game is Football Career Journey. The story is
  about a young football player who wants to become a professional player and
  make a successful career in football .Player makes many important decisions
  during the game these decisions are about training, behaviour, match
  situations, puzzles, and item collection. Some choices help the player continue
  and reach a good ending, while other choices can lead to failure or game over.
  This makes the game interactive for the user. The main purpose of this
  software is create an enjoyable text-based game by using simple logic, user
  input, and object-oriented programming. Program also includes extra features
  such as combat scenes, puzzle scenes, inventory items, a score system, and save/load functions.

------------------------------------------------------------------------------------------------------------------------------

- ANALYSIS & DESIGN
  
  **First Stage**
  
  The program is a text-based adventure game based on a football career story. The
  player starts by entering their name and kit number. After that game begins and
  the player moves through different scenes by making binary choices. Each scene
  gives two options, and the player must choose one option to continue. The
  game contains more than 30 binary choices. Some choices increase the chance of
  successful finish while other choices reduce health, reduce energy or lead to a
  bad ending. The program also includes an inventory system. Player can collect
  items such as boots, energy drink and key. The game also includes player
  statistics such as health, energy, attack, skill, score these values change
  during in the game depending on player choices, puzzle results and combat
  results. If health becomes zero player loses. If energy becomes zero game also
  ends. The program uses object-oriented programming. A base class Scenea and two lower classes called CombatScene and PuzzleScene are created from it. This show inheritance and polymorphism. The main game logic is controlled by the MyGame class, which stores player information, inventory, score and scene progress. The game also allows the player to save progress into a text file and load the game later.
  
  **Second Stage**
  
  In the second stage program was analysed by looking at inputs, outputs and
  processes. The inputs include player name, kit number, menu choice, story
  choices (1 or 2), puzzle answers and save or load option. All inputs are
  entered by the user from the keyboard. The outputs include story messages, menu
  displays, player details, inventory items, combat outcomes, puzzle solutions , error
  notifications and the final ending with score these outputs help the player
  understand what is happening in the game. Processes include reading player data,
  presenting on the menu, starting or loading the game, showing scenes, checking
  user choices, updating the node to move in the story, utilizing inventory
  items, running combat and puzzle systems, updating player statistics and saving
  or loading the game. This Program uses a while loop to keep  the game active and a switch statement to direct the story flow, which makes the code simple and easy to follow.
  
  **Third Stage**
  
  

------------------------------------------------------------------------------------------------------------------------------

- Testing
  
  Test Table 
  
  <style>
  </style>
  
  | Test No | Item to be tested | Test Description          | Expected Result                      | Actual Result           | Comments    |
  | ------- | ----------------- | ------------------------- | ------------------------------------ | ----------------------- | ----------- |
  | 1       | Menu              | Enter 1 New Game          | Game starts and asks player info     | Program worked          | Test passed |
  | 2       | Menu              | Enter 2 without save file | Show "No save file found."           | Message displayed       | Test passed |
  | 3       | Player Input      | Enter name and kit number | Player info stored correctly         | Player info saved       | Test passed |
  | 4       | Choice Function   | Enter 5 then 1            | Program asks again until valid input | Input validation worked | Test passed |
  | 5       | Combat            | Win a combat              | Score increases and game continues   | Combat worked           | Test passed |
  | 6       | Puzzle            | Enter correct answer      | Show "Correct" and increase score    | Puzzle worked           | Test passed |

<style>
</style>

**Annotation Screenchsots**

**Technical Elements**

This program uses object-oriented programming with classes and inheritance.
Functions are used to control combat, puzzles and game logic. Decision making
is implemented using if statements and switch cases. A loop is used for the
game system, and file handling is used to save and load the game. Variables
such as health, energy and score track player progress.

**Evalutaion**

The program works well and includes the main features such as decisionmaking, combat and puzzle systems. Use of classes makes the code more organized
and easier to read and understand. Maybe some parts like input validation can
be improved. Overall the program meets the requirements and works as expected

------------------------------------------------------------------------------------------------------------------------------

**References**



GeeksforGeeks
(n.d.) *Object Oriented Programming in C++*. Available at: [Object Oriented Programming in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/object-oriented-programming-in-cpp/) [Accessed: 18 March 2026].

GeeksforGeeks
(n.d.) *Loops in C++*. Available at: [Loops in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/cpp/cpp-loops/) [Accessed: 18 March 2026].

freeCodeCamp.org.
(2020, April 15). *Object Oriented Programming (OOP) in C++ Course*.
[YouTube video]. Retrieved from: [Object Oriented Programming (OOP) in C++ Course - YouTube](https://www.youtube.com/watch?v=wN0x9eZLix4) [Accessed 15 March 2026].

GeeksforGeeks.
(2025*). rand() and srand() in C++*. Retrieved from: [rand() and srand() in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/) [Accessed 1 April 2026].

GeeksforGeeks.
(2025). *Inheritance in C++.* Retrieved from: [Inheritance in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/inheritance-in-c/) [Accessed 22 March 2026].

GeeksforGeeks.
(2025). File handling in C++. Retrieved from: [File Handling in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/file-handling-c-classes/) [Accessed 22 March 2026].

freeCodeCamp.org.
(2018, August 24). *C++ Tutorial for Beginners – Full Course*. [YouTube
video]. Retrieved from: [C++ Tutorial for Beginners - Full Course - YouTube](https://youtu.be/vLnPwxZdW4Y) [Accessed 22 February 2026].

GitHub
(n.d.) Text Adventure Game Projects. Available at: https://github.com/topics/text-adventure  [Accessed  23 February 2026].



------------------------------------------------------------------------------------------------------------------------------

- APPENDIX CODE LISTING
  
  #include <iostream>  
  #include <string>  
  #include <fstream>  
  #include <ctime>  
  using namespace std;  
  
  class Scenea {  
  public:  
      virtual bool play() = 0;  
      virtual ~Scenea() {}  
  };  
  
  class CombatScene  
      : public Scenea{  
  private:  
      int attack;  
      int skill;  
      int energy;  
      int enemy;  
      bool boots;  
  
  public:  
      CombatScene(int a, int s, int en, int e, bool b) {  
          attack = a;  
          skill = s;  
          energy = en;  
          enemy = e;  
          boots = b;  
      }  
  
      bool play() override{  
          int myPower = attack + skill / 10 + energy / 20 + rand() % 6;  
          int enemyPower = enemy + rand() % 6;  
      
          if (boots) myPower += 3;  
      
          cout << "\nCombat starts." << endl;  
          cout << "Your power: " << myPower << endl;  
          cout << "Enemy power: " << enemyPower << endl;  
      
          if (myPower >= enemyPower) {  
              cout << "You win the combat." << endl;  
              return true;  
          }  
          else {  
              cout << "You lose the combat." << endl;  
              return false;}  
      }  
  
  };  
  
  class PuzzleScene  
      : public Scenea {  
  private:  
      int type;  
  
  public:  
      PuzzleScene(int t) {  
          type = t;  
      }  
  
      bool play() override {  
          if (type == 1) {  
              string x;  
              cout << "\nPuzzle: The footballer who wears the number 45 at Galatasaray: ";  
              cin.ignore();  
              getline(cin, x);  
              return x == "Osimhen" || x == "Victor Osimhen"|| x == "osimhen";  
          }  
          else if (type == 2) {  
              string s;  
              cout << "\nPuzzle: Unscramble this name: IICRAD : ";  
              cin >> s;  
              return s == "ICARDI" || s == "Icardi" || s == "icardi";  
          }  
          else {  
              string x;  
              cout << "\nPuzzle: The team that has won the Champions League the most times ";  
              cin.ignore();  
              getline(cin, x);  
              return x == "Real Madrid" || x== "Real" || x=="Madrid";  
          }  
      
      }  
  
  };  
  
  class MyGame {  
  private:  
      string name;  
      int kit;  
      int health;  
      int energy;  
      int score;  
      int skill;  
      int attack;  
      int node;  
      bool boots;  
      bool drink;  
      bool key;  
  
  public:  
      MyGame() {  
          name = "";  
          kit = 0;  
          health = 100;  
          energy = 100;  
          score = 0;  
          skill = 50;  
          attack = 10;  
          node = 1;  
          boots = false;  
          drink = false;  
          key = false;  
      }  
  
      int choice() {  
          int c;  
          cout << "1 or 2: ";  
          cin >> c;  
          while (c != 1 && c != 2) {  
              cout <<"Please enter 1 or 2: ";  
              cin >> c;  
          }  
          return c;  
      }  
      
      void player() {  
          cin.ignore();  
          cout << "Enter player name: ";  
          getline(cin, name);  
          cout <<"Enter kit number: ";  
          cin >> kit;  
      }  
      
      void addItem(string item) {  
          if (item == "boots") {  
              boots = true;  
              attack += 5;  
          }  
          if (item == "drink") {  
              drink = true;  
          }  
          if (item == "key") {  
              key = true;  
          }  
      }  
      
      void useDrink() {  
          if (drink) {  
              energy += 30;  
              if (energy > 100) energy = 100;  
              drink = false;  
              cout << "You used the energy drink." << endl;  
          }  
          else {  
              cout << "You do not have a drink." << endl;  
          }  
      }  
      
      bool combat(int enemy) {  
          CombatScene c(attack, skill, energy, enemy, boots);  
          bool win = c.play();  
      
          energy -= 10;  
          if (energy < 0) energy = 0;  
      
          if (win) {  
              score += 10;  
              return true;  
          }  
          else {  
              health -= 20;  
              score -= 5;  
              return false;  
          }  
      }  
      
      bool puzzle(int type) {  
          PuzzleScene p(type);  
          bool ok = p.play();  
      
          if (ok) {  
              cout << "Correct." << endl;  
              score += 10;  
              return true;  
          }  
          else {  
              cout << "Wrong." << endl;  
              score -= 5;  
              return false;  
          }  
      }  
      
      void saveGame() {  
          ofstream file("save.txt");  
      
          file << name << endl;  
          file << kit << endl;  
          file << health << endl;  
          file << energy << endl;  
          file << score << endl;  
          file << skill << endl;  
          file << attack << endl;  
          file << node << endl;  
          file << boots << endl;  
          file << drink << endl;  
          file << key << endl;  
      
          file.close();  
          cout << "Game saved." << endl;  
      }  
      
      bool loadGame() {  
          ifstream file("save.txt");  
      
          if (!file)  
              {  
              cout << "No save file found." << endl;  
              return false;}  
      
          getline(file, name);  
          file >> kit;  
          file >> health;  
          file >> energy;  
          file >> score;  
          file >> skill;  
          file >> attack;  
          file >> node;  
          file >> boots;  
          file >> drink;  
          file >> key;  
          file.close();  
          cout << "Game loaded." << endl;  
          return true;  
      }  
      
      void playerInfo() {  
          cout << "\n--- Player Info ---" << endl;  
          cout << "Name: " << name << endl;  
          cout << "Kit: " << kit << endl;  
          cout << "Health: " << health << endl;  
          cout << "Energy: " << energy << endl;  
          cout << "Attack: " << attack << endl;  
          cout << "Score: " << score << endl;  
      }  
      
      void inventory() {  
          cout << "\n--- Inventory ---" << endl;  
          if (boots) cout << "Boots" << endl;  
          if (drink) cout << "Energy Drink" << endl;  
          if (key) cout << "Key" << endl;  
          if (!boots && !drink && !key) cout << "No items" << endl;}  
      
      void finalResults() {  
          cout << "\n===== FINAL RESULT =====" << endl;  
      
          if (node == 41) {  
              cout << name << ", you become a star in the academy. Great ending." << endl;  
              score += 20;}  
          else if (node == 42) {  
              cout << name << ", you win the final match. Great ending." << endl;  
              score += 25;}  
          else if (node == 43) {  
              cout << name << ", you finish the season well. Good ending." << endl;  
              score += 15;}  
          else if (node == 44) {  
              cout << name << ", normal ending." << endl;  
              score += 5;}  
          else if (node == 45) {  
              cout << name << ", bad ending." << endl;  
              score -= 10;}  
          else if(node == 46) {  
              cout << name << ", you needed the key there. Bad ending." << endl;  
              score -= 10;}  
          else if (node == 47) {  
              cout << name << ", you are too tired. Game over." << endl;  
              score -= 15;}  
          else if (node == 48) {  
              cout << name << ", your health is zero. Game over." << endl;  
              score -= 20;}  
      
          playerInfo();  
          inventory();  
          cout << "\nFinal Score: " << score << endl;  
      }  
      
      void game() {  
          while (node >= 1 && node <= 40) {  
              playerInfo();  
      
              cout <<"\n1. Continue" << endl;  
              cout << "2. Save and Exit" << endl;  
              cout << "Choose: ";  
              int m;  
              cin >> m;  
      
              while (m != 1 && m != 2) {  
                  cout << "Please enter 1 or 2: ";  
                  cin >> m;}  
      
              if (m == 2) {  
                  saveGame();  
                  return;  
              }  
      
              switch (node) {  
                  case 1:  
                      cout << "\n" << name << ", your football journey starts now" << endl;  
                      cout << "1. Focus on discipline" << endl;  
                      cout << "2. Focus on talent" << endl;  
                      if (choice() == 1) node = 2; else node = 3;  
                      break;  
      
                  case 2:  
                      cout <<"\nIt is your first training day." << endl;  
                      cout <<"1. Arrive early" << endl;  
                      cout <<"2. Arrive late" << endl;  
                      if (choice() == 1) { score += 10; node = 4; }  
                      else { energy -= 10; node = 5; }  
                      break;  
      
                  case 3:  
                      cout <<"\nYou think about your football style." << endl;  
                      cout << "1. Train physically" << endl;  
                      cout << "2. Train with the ball" << endl;  
                      if (choice() == 1) { attack += 2; node = 6; }  
                      else { skill += 5; node = 7; }  
                      break;  
      
                  case 4:  
                      cout << "\nCoach gives you a reward." << endl;  
                      cout << "1. Take boots" << endl;  
                      cout << "2. Take drink" << endl;  
                      if (choice() == 1) { addItem("boots"); node = 8; }  
                      else { addItem("drink"); node = 9; }  
                      break;  
      
                  case 5:  
                      cout << "\nCoach is not happy with you." << endl;  
                      cout << "1. Say sorry" << endl;  
                      cout << "2. Act rude" << endl;  
                      if (choice() == 1) node = 10; else node = 11;  
                      break;  
      
                  case 6:  
                      cout << "\nToday is a hard physical session." << endl;  
                      cout << "1. Join combat drill" << endl;  
                      cout << "2. Take recovery" << endl;  
                      if (choice() == 1) {  
                          if (combat(12)) node = 12;  
                          else node = 13;  
                      }  
                      else {  
                          energy += 10;  
                          if (energy > 100) energy = 100;  
                          node = 14;  
                      }  
                      break;  
      
                  case 7:  
                      cout << "\nNow you have challenge." << endl;  
                      cout << "1. Solve a puzzle" << endl;  
                      cout << "2. Skip it" << endl;  
                      if (choice() == 1) {  
                          if (puzzle(1)) node = 15;  
                          else node = 16;  
                      }  
                      else node = 17;  
                      break;  
      
                  case 8:  
                      cout << "\nYou now have boots." << endl;  
                      cout << "1. Use them now" << endl;  
                      cout << "2. Save them for later" << endl;  
                      if (choice() == 1) node = 18; else node = 19;  
                      break;  
      
                  case 9:  
                      cout << "\nYou now have a drink." << endl;  
                      cout << "1. Use it now" << endl;  
                      cout << "2. Keep it" << endl;  
                      if (choice() == 1) { useDrink(); node = 20; }  
                      else node = 21;  
                      break;  
      
                  case 10:  
                      cout << "\nCoach gives you another chance." << endl;  
                      cout << "1. Play for the team" << endl;  
                      cout << "2. Play selfishly" << endl;  
                      if (choice() == 1) node = 22; else node = 23;  
                      break;  
      
                  case 11:  
                      cout << "\nPlayers do not like your attitude." << endl;  
                      cout << "1. Change attitude" << endl;  
                      cout << "2. Ignore everyone" << endl;  
                      if (choice() == 1) node = 24; else node = 25;  
                      break;  
      
                  case 12:  
                      cout << "\nYou win the combat drill." << endl;  
                      cout << "1. Take the key" << endl;  
                      cout << "2. Rest" << endl;  
                      if (choice() == 1) { addItem("key"); node = 26; }  
                      else node = 27;  
                      break;  
      
                  case 13:  
                      cout << "\nYou lose the combat." << endl;  
                      cout << "1. Continue" << endl;  
                      cout << "2. Give up" << endl;  
                      if (choice() == 1) node = 28; else node = 45;  
                      break;  
      
                  case 14:  
                      cout << "\nIt is a recovery day." << endl;  
                      cout << "1. Extra training" << endl;  
                      cout << "2. Sleep more" << endl;  
                      if (choice() == 1) node = 29; else node = 30;  
                      break;  
      
                  case 15:  
                      cout << "\nYou solve the puzzle." << endl;  
                      cout << "1. Take the key" << endl;  
                      cout << "2. Move on" << endl;  
                      if (choice() == 1) { addItem("key"); node = 26; }  
                      else node = 27;  
                      break;  
      
                  case 16:  
                      cout << "\nYou fail the puzzle." << endl;  
                      cout << "1. Try one more puzzle" << endl;  
                      cout << "2. Accept bench role" << endl;  
                      if (choice() == 1) {  
                          if (puzzle(2)) node = 28;  
                          else node = 45;}  
                      else node = 44;  
                      break;  
      
                  case 17:  
                      cout << "\nToday is a normal training day." << endl;  
                      cout << "1. Work harder" << endl;  
                      cout << "2. Stay calm" << endl;  
                      if (choice() == 1) node = 29; else node = 30;  
                      break;  
      
                  case 18:  
                      cout << "\nIt is time for shooting drill." << endl;  
                      cout << "1. Shoot with power" << endl;  
                      cout << "2. Shoot with placement" << endl;  
                      if (choice() == 1) { score += 10; node = 26; }  
                      else { score += 5; node = 27; }  
                      break;  
      
                  case 19:  
                      cout << "\nYou save the boots for match day." << endl;  
                      cout << "1. Attack bravely" << endl;  
                      cout << "2. Stay careful" << endl;  
                      if (choice() == 1) node = 31; else node = 33;  
                      break;  
      
                  case 20:  
                      cout << "\nThe drink gives you more energy." << endl;  
                      cout << "1. Press hard" << endl;  
                      cout << "2. Keep balance" << endl;  
                      if (choice() == 1) node = 26; else node = 27;  
                      break;  
      
                  case 21:  
                      cout << "\nYou keep the drink for later." << endl;  
                      cout << "1. Use it before the match" << endl;  
                      cout << "2. Save it for emergency" << endl;  
                      if (choice() == 1) { useDrink(); node = 28; }  
                      else node = 29;  
                      break;  
      
                  case 22:  
                      cout << "\nThe team likes your play." << endl;  
                      cout << "1. Ask for captain role" << endl;  
                      cout << "2. Stay humble" << endl;  
                      if (choice() == 1) node = 30; else node = 26;  
                      break;  
      
                  case 23:  
                      cout << "\nYour selfish play makes problems." << endl;  
                      cout << "1. Fix your play" << endl;  
                      cout << "2. Keep playing same way" << endl;  
                      if (choice() == 1) node = 27; else node = 45;  
                      break;  
      
                  case 24:  
                      cout << "\nCoach sees your change." << endl;  
                      cout << "1. Work harder" << endl;  
                      cout << "2. Relax" << endl;  
                      if (choice() == 1) node = 28; else node = 44;  
                      break;  
      
                  case 25:  
                      cout << "\nMore problems happen in training." << endl;  
                      cout << "1. Make one last apology" << endl;  
                      cout << "2. Leave training" << endl;  
                      if (choice() == 1) node = 29; else node = 47;  
                      break;  
      
                  case 26:  
                      cout << "\nThe semi final starts now." << endl;  
                      cout << "1. Fight for the ball" << endl;  
                      cout << "2. Play smart passing football" << endl;  
                      if (choice() == 1) {  
                          if (combat(14)) node = 30;  
                          else node = 45;}  
                      else node = 30;  
                      break;  
      
                  case 27:  
                      cout << "\nYou reach the last puzzle." << endl;  
                      cout << "1. Solve it" << endl;  
                      cout << "2. Skip it" << endl;  
                      if (choice() == 1) {  
                          if (puzzle(3)) node = 30;  
                          else node = 34;  
                      }  
                      else node = 34;  
                      break;  
      
                  case 28:  
                      cout << "\nIt is match day." << endl;  
                      cout << "1. Attack" << endl;  
                      cout << "2. Defend" << endl;  
                      if (choice() == 1) {  
                          if (boots) node = 31;  
                          else node = 33;  
                      }  
                      else {  
                          if (key) node = 32;  
                          else node = 34;}  
                      break;  
      
                  case 29:  
                      cout << "\nYou find a hidden chance." << endl;  
                      cout << "1. Open the locker" << endl;  
                      cout << "2. Ignore it" << endl;  
                      if (choice() == 1) {  
                          if (key) node = 32;  
                          else node = 46;}  
                      else node = 33;  
                      break;  
      
                  case 30:  
                      cout << "\nThis is the final academy choice." << endl;  
                      cout << "1. Trust hard work" << endl;  
                      cout << "2. Trust only talent" << endl;  
                      if (choice() == 1) node = 31; else node = 35;  
                      break;  
      
                  case 31:  
                      cout << "\nExtra training session." << endl;  
                      cout << "1. Train shooting" << endl;  
                      cout << "2. Train passing" << endl;  
                      if (choice() == 1) { attack += 3; node = 32; }  
                      else { skill += 3; node = 33; }  
                      break;  
      
                  case 32:  
                      cout << "\nYou improved your shooting." << endl;  
                      cout << "1. Try long shots" << endl;  
                      cout << "2. Stay safe" << endl;  
                      if (choice() == 1) node = 34;  
                      else node = 35;  
                      break;  
      
                  case 33:  
                      cout << "\nYour passing improved." << endl;  
                      cout << "1. Playmaker role" << endl;  
                      cout << "2. Support striker" << endl;  
                      if (choice() == 1) node = 36;  
                      else node = 37;  
                      break;  
      
                  case 34:  
                      cout << "\nYou try long shots in training." << endl;  
                      cout << "1. Shoot with full power" << endl;  
                      cout << "2. Shoot carefully" << endl;  
                      if (choice() == 1) {  
                          if (combat(15)) node = 38;  
                          else node = 45;}  
                      else {  
                          score += 5;  
                          node = 35;}  
                      break;  
      
                  case 35:  
                      cout << "\nYou choose a safer style." << endl;  
                      cout << "1. Keep possession" << endl;  
                      cout << "2. Look for a fast counter" << endl;  
                      if (choice() == 1) {  
                          score += 5;  
                          node = 38;}  
                      else {  
                          attack += 2;  
                          node = 38;}  
                      break;  
      
                  case 36:  
                      cout << "\nYou control the game in midfield." << endl;  
                      cout << "1. Play short passes" << endl;  
                      cout << "2. Try risky through balls" << endl;  
                      if (choice() == 1) {  
                          score += 10;  
                          node = 38;}  
                      else {  
                          if (puzzle(2)) node = 38;  
                          else node = 44;}  
                      break;  
      
                  case 37:  
                      cout << "\nYour teammate makes a smart run." << endl;  
                      cout << "1. Pass immediately" << endl;  
                      cout << "2. Dribble first" << endl;  
                      if (choice() == 1) {  
                          score += 5;  
                          node = 38;}  
                      else {  
                          if (combat(13)) node = 38;  
                          else node = 45;}  
                      break;  
      
                  case 38:  
                      cout << "\nThe final match is here." << endl;  
                      cout << "1. Play aggressively" << endl;  
                      cout << "2. Play defensively" << endl;  
                      if (choice() == 1) node = 39;  
                      else node = 40;  
                      break;  
      
                  case 39:  
                      cout << "\nYou choose to play aggressively in the final match." << endl;  
                      cout << "1. Press high" << endl;  
                      cout << "2. Attack from the wings" << endl;  
                      if (choice() == 1) {  
                          if (boots) node = 41;  
                          else node = 42;}  
                      else {  
                          score += 5;  
                          node = 42;}  
                      break;  
      
                  case 40:  
                      cout << "\nYou choose a defensive plan." << endl;  
                      cout << "1. Protect the lead" << endl;  
                      cout << "2. Wait for one counter attack" << endl;  
                      if (choice() == 1) {  
                          if (key) node = 43;  
                          else node = 44;}  
                      else {  
                          if (key) {  
                              score += 5;  
                              node = 43;}  
                          else {  
                              node = 44;}  
                      }  
                      break;}  
      
      
              if (energy <= 0) node = 47;  
              if (health <= 0) node = 48;}  
      
          finalResults();}  
      
      void menu() {  
          int m;  
          cout << "1. New Game" << endl;  
          cout << "2. Load Game" << endl;  
          cout << "3. Exit" << endl;  
          cout << "Enter your choice: ";  
          cin >> m;  
      
          if (m == 1) {  
              player();  
              game();  
          }  
          else if (m == 2) {  
              if (loadGame()) {  
                  game();}  
          }  
          else {  
              cout << "Game closed!" << endl;}  
      }  
  
  };  
  
  int main() {  
      srand(time(0));  
      MyGame s;  
      s.menu();  
      return 0;  
  }
