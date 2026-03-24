#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <cstdint>

enum class PlayerField { Name, Id, Level };

class Player {
    private:
        std::string name;
        uint32_t id;
        uint8_t level;
    public:
        Player();
        Player(Player &source);
        const void levelUp();
        std::string getName();
        uint8_t getLevel();
        const void setName(std::string name);
        const void setLevel(uint8_t level);
        uint32_t getId();
        //Instructions were very ambigous on how to implement the debug functions, Ive chosen to make them as templates  
        template <PlayerField F>
        auto& debugReference() {
            if constexpr (F == PlayerField::Name) return name;
            else if constexpr (F == PlayerField::Id) return id;
            else if constexpr (F == PlayerField::Level) return level;
        }

        template <PlayerField F>
        auto* debugPointer() {
            if constexpr (F == PlayerField::Name) return &name;
            else if constexpr (F == PlayerField::Id) return &id;
            else if constexpr (F == PlayerField::Level) return &level;
        }
};

#endif