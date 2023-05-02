#include <iostream>
#include <string>
#include <fstream>
#include "starter.h"
#include "squirtle.h"
#include "bulbasaur.h"
#include "charmander.h"
using namespace std;

void saveStats(starter *player1, starter *player2) {
  string filename;
  cout << "*************************************" << endl;
  cout << "Enter a filename to save progress:" << endl;
  cin >> filename;
  ofstream fout;
  fout.open(filename);
  fout << "PLAYER 1 STATS:" << endl;
  fout << "Starter: " << player1 -> getName() << endl;
  fout << "Current XP: " << player1 -> getXP() << endl;
  fout << "PLAYER 2 STATS: " << endl;
  fout << "Starter: " << player2 -> getName() << endl;
  fout << "Current XP: " << player2 -> getXP() << endl;
  fout.close();
  cout << "Your information has been saved!" << endl;
}
int main() {
  string name;
  int initialchoice;

  cout << "****************************************" << endl;
  cout << "Welcome to Pokémon HeartGold/SoulSilver!" << endl;
  cout << "Would you like to 1.) create & complete a 1v1 Pokemon battle or 2.) continue a saved 1v1 Pokémon battle? Please enter your choice!" << endl;

  cin >> initialchoice;
  while ((initialchoice < 1) || (initialchoice > 2)) {
    cout << "Invalid choice. Please try again." << endl;
  }

  if (initialchoice == 1) {
     
        cout << "Welcome PLAYER1 & PLAYER2! Here are the available starter Pokémon to choose:" << endl;
        cout << "Squirtle is a water-type Pokémon!" << endl;
            cout << "               _,........__                      " << endl;
    cout << "           ,-'            '`-." << endl;
    cout << "          ,'                   `-.              " << endl;
    cout << "       ,'                        \"" << endl;
    cout << "     ,'                           .               " << endl;
    cout << "     .\\               ,\"\".       `               " << endl;
    cout << "    ._.'|             / |  `       \"" << endl;
    cout << "    |   |            `-.'  ||       `.             " << endl;
    cout << "    |   |            '-._,'||       | \"" << endl;
    cout << "   .`,\\'             `..,'.'       , |`-.         " << endl;
    cout << "   l                       .'`.  _/  |   `.       " << endl;
    cout << "   `-.._'-   ,          _ _'   -\" \\  .     `\"" << endl;
    cout << "`.\"\"\"\"\"'-.`-...,---------'','         `. `....__." << endl;
    cout << ".'        `\"-..___      __,'\\          \\  \\     \"" << endl;
    cout << "\\_ .          |   `\"\"\"\"'    `.           . \\     \\" << endl;
    cout << "  `.          |              `.          |  .     L" << endl;
    cout << "    `.        |`--...________.'.        j   |     |" << endl;
    cout << "      `._    .'      |          `.     .|   ,     |" << endl;
    cout << "         `--,\\       .            `7\"\"' |  ,      |" << endl;
    cout << "            ` `      `            /     |  |      |    _,-'\"\"\"`-." << endl;
    cout << "             \\ `.     .          /      |  '      |  ,'          `." << endl;
    cout << "              \\  v.__  .        '       .   \\    /| /              \\"" "<< endl;
    cout << "               \\/    `\"\"\"\"\"`.       \\   \\  /.''                |" << endl;
    cout << "                `        .        `._ ___,j.  `/ .-       ,---.  |" << endl;
    cout << "                ,`-.      \\         .\"     `.  |/        j     `." << endl;
    cout << "               /    `.     \\       /         \\ /         |     /    j" << endl;
    cout << "              |       `-.   7-.._ .          |'          '         /'" << endl;
    cout << "              |          `./_    `|          |            .     _,'" << endl;
    cout << "              `.           / `----|          |-............`---'" << endl;
    cout << "               \\          \\      |          |" << endl;
    cout << "              ,'           )     `.         |" << endl;
    cout << "               7____,,..--'      /          |" << endl;
    cout << "                                 `---.__,--.'" << endl;
    cout << "Charmander is a fire-type Pokémon!" << endl;
    cout << "             _.--\"\"`-.. " << endl;
    cout << "        ,'          `. " << endl;
    cout << "      ,'          __  `. " << endl;
    cout << "     /|          \" __   \\ " << endl;
    cout << "    , |           / |.   . " << endl;
    cout << "    |,'          !_.'|   | " << endl;
    cout << "  ,'             '   |   | " << endl;
    cout << " /              |`--'|   | " << endl;
    cout << "|                `---'   | " << endl;
    cout << " .   ,                   |    " << endl;
    cout << "  ._     '           _'  |                    , ' \\ ` " << endl;
    cout << "`.. `.`-...___,...---\"\"    |       __,.        ,`\"   L,| " << endl;
    cout << "|, `- .`._        _,-,.'   .  __.-'-. /        .   ,    \\ " << endl;
    cout << "-:..     `. `-..--_.,.<       `\"      / `.        `-/ |   . " << endl;
    cout << "  `,         \"\"\"\"'     `.              ,'         |   |  ',, " << endl;
    cout << "  `.      '            '            /          '    |'. |/ " << endl;
    cout << "   `.   |              \\       _,-'           |       '' " << endl;
    cout << "     `._'               \\   '\"\\                .      | " << endl;
    cout << "       |                '     \\                `._  ,' " << endl;
    cout << "       |                 '     \\                 .'| " << endl;
    cout << "       |                 .      \\                | | " << endl;
    cout << "       |                 |       L              ,' | " << endl;
    cout << "         `                 |       |             /   ' " << endl;
    cout << "         \\                |       |           ,'   / " << endl;
    cout << "       ,' \\               |  _.._ ,-..___,..-'    ,'       " << endl;
    cout << "      /     .             .      `!             ,j'          " << endl;
    cout << "     /       `.          /        .           .'/           " << endl;
    cout << "    .          `.       /         |        _.'.'        " << endl;
    cout << "    `.          7`'---'          |------\"'_.'         " << endl;
    cout << "    _,.`,_     _'                ,''-----\"'           " << endl;
    cout << " _,-_    '       `.     .'      ,\\            " << endl;
    cout << "  -\" /`.         _,'     | _  _  _.|            " << endl;
    cout << "    \"\"--'---\"\"\"\"\"'        `' '! |! /               " << endl;
    cout << "                            `\" \" -'                   " << endl;
      
    cout << "Bulbasaur is a grass-type Pokémon!" << endl;
    cout << "                    _,.------....___,.' ',.-.  " << endl;
    cout << "                 ,-'          _,.--\"        |     " << endl;
    cout << "               ,'         _.-'              .     " << endl;
    cout << "             /   ,     ,'                   `      " << endl;
    cout << "             .   /     /                     ``.        " << endl;
    cout << "             |  |     .                       \\.         " << endl;
    cout << "   ____      |___._.  |       __               \\ `.           " << endl;
    cout << " .'    `---\"       ``\"-.--'`  \\               .  \\          " << endl;
    cout << ".  ,            __               `              |   .        " << endl;
    cout << " `,'         ,-\"'  .               \\             |    L        " << endl;
    cout << ",'          '    _.'                -._          /    |        " << endl;
    cout << "\" ,`-.    ,\".   `--'                      >.      ,'     |        " << endl;
    cout << ". .'\\'   `-'       __    ,  ,-.         /  `.__.-      ,'         " << endl;
    cout << "||:, .           ,'  ;  /  / \\ `        `.    .      .'/       " << endl;
    cout << "j|:D  \\          `--'  ' ,'_  . .         `.__, \\   , /        " << endl;
    cout << "/ L:_  |                 .  \"' :_;                `.'.'         " << endl;
    cout << "\"\".    \"\"'                  \"\"\"\"\"'                    V         " << endl;
    cout << "\" `.                                 .    `.   _,..  `         " << endl;
    cout << "\" `,_   .    .                _,-'/    .. `,'   __  `        " << endl;
    cout << "\" ) `\\._        ___....----\"'  ,'   .'  \\ |   '  \\  .         " << endl;
    cout << " /   `. \"`-.--\"'         _,' ,'     `---' |    `./  |         " << endl;
    cout << "\" .   _  `\"\"'--.._____..--\"   ,             '         |        " << endl;
    cout << "\" | .\"`. `-.                /-.           /          ,        " << endl;
    cout << "  | `._.'    `,_            ;  /         ,'          .          " <<   endl;
    cout << ".'          /| `-.        . ,'         ,           ,            " << endl;
    cout << " '-.__ __ _,','    '`-..___;-...__   ,.'\\ ____.___.'           " << endl;
    cout << "`\"^--'..'   '-`-^-'\"--    `-^-'`.''\"\"\"\"`.,^.`.--'              " << endl;
    cout << "*************************************" << endl;
    cout << "Welcome PLAYER1! Please enter the name of the starter Pokémon you'd like to choose: your choices are Squirtle, Charmander, & Bulbasaur (please note this game is case-sensitive :) )" << endl;   
    string player1starter;
    cin >> player1starter;
    if ((player1starter == "Squirtle") || (player1starter == "Charmander") || (player1starter == "Bulbasaur")) {
      cout << "PLAYER1, you chose " << player1starter << endl;
    }
    else if ((player1starter != "Squirtle") || (player1starter != "Charmander") || (player1starter != "Bulbasaur")) {
      cout << "Invalid Pokémon entered. Please try again" << endl;
      cin >> player1starter;
    }
    cout << "*************************************" << endl;
    cout << "Welcome PLAYER2! Please enter the name of the starter Pokémon you'd like to choose: your choices are Squirtle, Charmander, & Bulbasaur (please note this game is case-sensitive :) )" << endl;
    string player2starter;
    cin >> player2starter;
    if ((player2starter == "Squirtle") || (player2starter == "Charmander") || (player2starter == "Bulbasaur")) {
        cout << "PLAYER2, you chose " << player2starter << endl;
      }
    else {
        cout << "Invalid Pokémon entered. Please try again" << endl;
      }
    
    cout << "*************************************" << endl;
    cout << "Let's begin the battle!" << endl;
    int choice = 0;
     starter *player1; 
    starter *player2;
    if (player1starter == "Charmander") {
        player1 = new charmander("Charmander", 100);
      
    }
    else if (player1starter == "Squirtle") {
      player1 = new squirtle("Squirtle", 100);
    }
    else if (player1starter == "Bulbasaur") {
      player1 = new bulbasaur("Bulbasaur", 100);
    }
    else {
      cout << "Error" << endl;
      exit(1);
    }

     if (player2starter == "Charmander") {
      player2 = new charmander("Charmander", 100);
     }
    else if (player2starter == "Squirtle") {
      player2 = new squirtle ("Squirtle", 100);
    }
    else if (player2starter == "Bulbasaur") {
      player2 = new bulbasaur("Bulbasaur", 100);
    }
    else {
      cout << "Error" << endl;
      exit(1);
    }


    
  while ( choice != 2) {
    player1 -> attackMenu();
      int moveNum;
      cin >> moveNum;
      if (moveNum == 1) {
        player1->attackOne();
      }
      else if (moveNum == 2) {
        player1->attackTwo();
      }
      else if (moveNum == 3) {
        player1->attackThree();
      }
      else if (moveNum == 4) {
        player1->attackFour();
      }
      else {
        cout << "Invalid choice entered. Please try again" << endl;
        }
      player1 -> updateXP();
      player1->mainMenu();
      int choice;
       cin >> choice;
       if (choice == 2) {
        saveStats(player1, player2);
         exit(1);
         
       }
       player2 -> attackMenu();
      
      cin >> moveNum;
      if (moveNum == 1) {
        player2->attackOne();
      }
      else if (moveNum == 2) {
        player2->attackTwo();
      }
      else if (moveNum == 3) {
        player2->attackThree();
      }
      else if (moveNum == 4) {
        player2->attackFour();
      }
      else {
        cout << "Invalid choice entered. Please try again" << endl;
        }
      player2 -> updateXP();
      player2->mainMenu();
     
       cin >> choice;
       if (choice == 2) {
         saveStats(player1, player2);
         exit(1);
         
       }
  
    
   
    
    
        
    

      



  }
       
  
  }
 if (initialchoice ==2) {
      cout << "Please enter the filename of the existing Pokémon game: " << endl;
      string filename;
      string info;
      cin >> filename;
      ifstream fin(filename);
      while (!fin.is_open()) {
        cout << "The filename is incorrect. Please try again." << endl;
        cin >> filename;
      }
      if (fin.is_open()) {
        while (getline(fin, info)) {
          cout << info;
          cout << endl;
        }
        fin.close();
      }
      }
    
      












  
  
}
