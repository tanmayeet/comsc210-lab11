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
}