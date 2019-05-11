#pragma once

#include <SFML/Network.hpp>

enum Dir
{
    UP,
    DOWN,
    LEFT,
    RIGHT
};

enum {PLAYER_SPEED = 10};

sf::Packet& operator << (sf::Packet& packet, Dir dir)
{
    return packet << ((sf::Int16) dir);
}

sf::Packet& operator >> (sf::Packet& packet, Dir& dir)
{
    sf::Int8 num;
    packet >> num;
    dir = (Dir) num;
    return packet;
}
