#include "munchkinplayer.h"
#include <iostream>

int main(void) {
    Player newplayer;
    
    std::string nameCopy = newplayer.getName();
    uint32_t idCopy = newplayer.getId();
    uint8_t levelCopy = newplayer.getLevel();

    std::cout << "Printing Values: " << std::endl;
    std::cout << "Name (Getter):   " << nameCopy << std::endl;;
    std::cout << "Name (DebugRef): " << newplayer.debugReference<PlayerField::Name>() << std::endl;
    std::cout << "Name (DebugPtr): " << *newplayer.debugPointer<PlayerField::Name>() << std::endl;

    std::cout << "ID (Getter):     " << idCopy << std::endl;
    std::cout << "ID (DebugRef):   " << newplayer.debugReference<PlayerField::Id>() << std::endl;
    std::cout << "ID (DebugPtr):   " << *newplayer.debugPointer<PlayerField::Id>() << std::endl;

    std::cout << "Printing Pointers:" << std::endl;
    
    std::cout << "[Name]" << std::endl;
    std::cout << "Getter Copy Addr: " << (void*)&nameCopy << std::endl;
    std::cout << "Debug Ref Addr:   " << (void*)&newplayer.debugReference<PlayerField::Name>() << std::endl;
    std::cout << "Debug Ptr Addr:   " << (void*)newplayer.debugPointer<PlayerField::Name>() << std::endl;

    std::cout << "[ID]" << std::endl;
    std::cout << "Getter Copy Addr: " << (void*)&idCopy << std::endl;
    std::cout << "Debug Ref Addr:   " << (void*)&newplayer.debugReference<PlayerField::Id>() << std::endl;
    std::cout << "Debug Ptr Addr:   " << (void*)newplayer.debugPointer<PlayerField::Id>() << std::endl;

    return 0;
}