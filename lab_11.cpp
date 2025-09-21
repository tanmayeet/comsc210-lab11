// COMSC-210 | Lab 11 | Tanmayee Chalamalasetti
// IDE Used: VS Code

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// This struct represents a Villager in the game Stardew Valley.
struct Villager {
  std::string name;                        // Villager's name
  int friendshipLevel;                     // Friendship level from 0 to 10
  std::vector<std::string> favoriteGifts;  // Dynamic array of favorite gifts
};

// Function prototypes
void addVillager(vector<Villager>& villagers, string name, int friendshipLevel,
                 vector<string> gifts);
void displayVillagers(const vector<Villager>& villagers);

// Function: Adds villager attributes to the vector
// Arguments used: vector<Villager>& villagers, string name, int
// friendshipLevel, vector<string> gifts
//  Returns: nothing
void addVillager(vector<Villager>& villagers, string name, int friendshipLevel,
                 vector<string> gifts) {
  Villager v;
  v.name = name;
  v.friendshipLevel = friendshipLevel;
  v.favoriteGifts = gifts;
  villagers.push_back(
      v);  // Adds a villager to the main list using the push_back iterator
}

void displayVillagers(const vector<Villager>& villagers) {
  // for each Villager given through addVillager, it prints out each attribute
  for (const Villager& v : villagers) {
    cout << "Villager: " << v.name << endl;  // displays the Villager's name
    cout << "Friendship Level: " << v.friendshipLevel
         << endl;  // displays the Villager's friendship level
    cout << "Favorite Gifts: ";
    for (const string& gift :
         v.favoriteGifts) {  // uses a range-based for loop to displays favorite
                             // giftsof each Villager
      cout << gift << ", ";  // puts a comma in between
    }
    cout << endl << endl;  // adds a new line between each villager
  }
}

int main() {
  vector<Villager> villagers;

  // the three villagers we are adding to our vector
  addVillager(villagers, "Jodi", 8,
              {"Chocolate Cake", "Crispy Bass", "Diamond"});
  addVillager(villagers, "Linus", 10,
              {"Blueberry Tart", "Cactus Fruit", "Yam"});
  addVillager(villagers, "Robin", 7, {"Goat Cheese", "Peach", "Spaghetti"});

  // Using the displayVillagers function, we
  displayVillagers(villagers);

  return 0;
}