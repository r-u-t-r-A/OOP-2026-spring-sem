#include "player.h"
#include <random>
#define max_uint32 4294967295

Player::Player() : name("NoName"), level(1) {
    auto randomID = []() -> uint32_t {
        std::random_device rd;  
        std::mt19937 gen(rd()); 
        std::uniform_int_distribution<uint32_t> dist(1, max_uint32); 
        return dist(gen);
    };
    id = randomID(); 
}

Player::Player(Player &source) : name(source.name), id(source.id), level(source.level) {}

const void Player::levelUp() {
    level++;
}
std::string Player::getName() {
    return name;
}

uint8_t Player::getLevel() {
    return level;
}

const void Player::setName(std::string input_name) {
    name = input_name;
}

const void Player::setLevel(uint8_t input_level) {
    level = input_level;
}

uint32_t Player::getId() {
    return id;
}