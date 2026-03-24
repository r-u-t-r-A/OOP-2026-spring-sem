#ifndef MUNCHKINPLAYER_H
#define MUNCHKINPLAYER_H

#include "player.h"

class MunchkinPlayer: public Player { 
    public:
        MunchkinPlayer();
        enum class munchkinClass { wizard, warrior, thief, cleric, bard, ranger };
        enum class munchkinRace { elf, dwarf, halfling, orc, gnome };
        const void setPlayerClass(munchkinClass inputClass);
        munchkinClass getPlayerClass();
        const void setPlayerRace(munchkinRace inputRace);
        munchkinRace getPlayerRace();
        const void setArmour(uint8_t inputArmour);
        uint8_t getArmour();
        const void setWeapon(uint8_t inputWeapon);
        uint8_t getWeapon();
        virtual const void levelUp();
    private:
        uint8_t armour;
        uint8_t weapon;
        munchkinClass playerClass;
        munchkinRace playerRace;
};  

#endif