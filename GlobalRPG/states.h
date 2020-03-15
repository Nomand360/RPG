#ifndef STATES_H
#define STATES_H

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <vector>
#include <stack>
#include <map>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>

class States
{
private:
    sf::RenderWindow *window;
    std::vector<sf::Texture> textures;
public:
    States(sf::RenderWindow *window);
    virtual ~States();

    virtual void endState() = 0;
    virtual void render(sf::RenderTarget *target = nullptr) = 0;
    virtual void update(const float &deltaTime) = 0;
};

#endif // STATES_H
