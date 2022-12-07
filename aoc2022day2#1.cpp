#include <iostream>
#include <fstream>
#include <sstream>

int main() {
  using namespace std;
  
  int totalscore = 0;
  string choices;

  ifstream strategy("rps.txt");
  while (getline(strategy, choices)){
    stringstream ss(choices);
    string elf, mine;
    getline(ss, elf, ' ');
    getline(ss, mine, ' ');

    
    
    if (choices == "A Y" || choices == "B Z" || choices == "C X" ) { //win
      if (mine == "X")
        totalscore += 1;
      else if (mine == "Y") 
        totalscore += 2;
      else 
        totalscore += 3;
      totalscore += 6;
      }
    else if (choices == "A Z" || choices == "B X" || choices =="C Y") { //lose
      if (mine == "X")
        totalscore += 1;
      else if (mine == "Y")
        totalscore += 2;
      else
        totalscore += 3;
      }
    else {   //draw
      if (mine == "X")
        totalscore += 1;
      else if (mine == "Y")
        totalscore += 2;
      else
        totalscore += 3;
      totalscore += 3;
      }
      
    }
  
  cout << totalscore;
  strategy.close();
  return 0;
  }
  
/* rock -> A, X      1      win  6
   paper -> B, Y     2      lose 0
   sicssors -> C, Z  3      draw 3
*/