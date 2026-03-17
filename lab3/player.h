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
    Player() {
        id = 0;
    };

};

#endif