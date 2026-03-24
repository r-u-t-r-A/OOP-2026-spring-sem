#include "munchkinplayer.h"
#include <random>

MunchkinPlayer::MunchkinPlayer() : Player(), armour(0), weapon(0) {
    setLevel(1);
    auto randomClass = []() -> munchkinClass {
        std::random_device rd;  
        std::mt19937 gen(rd()); 
        std::uniform_int_distribution<munchkinClass> dist(munchkinClass::wizard, munchkinClass::ranger); 
        return dist(gen);
    };
    auto randomRace = []() -> munchkinRace {
        std::random_device rd;  
        std::mt19937 gen(rd()); 
        std::uniform_int_distribution<munchkinRace> dist(munchkinRace::elf, munchkinRace::gnome); 
        return dist(gen);
    };
    playerClass = randomClass();
    playerRace = randomRace();
};

const void MunchkinPlayer::setPlayerClass(munchkinClass inputClass) {
    playerClass = inputClass;
}

MunchkinPlayer::munchkinClass MunchkinPlayer::getPlayerClass() {
    return playerClass;
}

const void MunchkinPlayer::setPlayerRace(munchkinRace inputRace) {
    playerRace = inputRace;
}

MunchkinPlayer::munchkinRace MunchkinPlayer::getPlayerRace() {
    return playerRace;
}
const void MunchkinPlayer::setArmour(uint8_t inputArmour) {
    armour = inputArmour; 
}

uint8_t MunchkinPlayer::getArmour() { 
    return armour; 
}

const void MunchkinPlayer::setWeapon(uint8_t inputWeapon) { 
    weapon = inputWeapon; 
}

uint8_t MunchkinPlayer::getWeapon() { 
    return weapon; 
}

const void MunchkinPlayer::levelUp() {
    Player::setLevel(getLevel() + 2);
}