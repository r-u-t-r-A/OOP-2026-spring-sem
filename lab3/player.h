#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <cstdint>

class Player {
    private:
        std::string name;
        uint32_t id;
        uint8_t level;
    public:
        Player();
        Player(Player &source);
        const void levelUP();
        std::string getName();
        uint8_t getLevel();
        const void setName(std::string name);
        const void setLevel(uint8_t level);
        uint32_t getId();

};

#endif