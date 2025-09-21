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
  for (const Villager& v : villagers) {
    cout << "Villager: " << v.name << endl;
    cout
  }
}

int main() {
  vector<Villager> villagers;

  addVillager(villagers, "Jodi", {})

      // Using the
      displayVillagers(villagers);

  return 0;
}