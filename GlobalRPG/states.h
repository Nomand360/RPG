#ifndef STATES_H
#define STATES_H

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <sstream>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>

class States
{
private:
    std::vector<sf::Texture> textures;
public:
    States();
    virtual ~States();

    virtual void render() = 0;
    virtual void update() = 0;
};

#endif // STATES_H
