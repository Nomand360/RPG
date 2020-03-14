#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <ctime>
#include <cstdlib>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>


class Game
{
private:
    sf::RenderWindow *window;
    sf::Event sfEvent;
    void initWindow();
public:
    Game();
    ~Game();
    //Функции игры
    void updateSFMLEvents();
    void update();
    void render();
    void run();
};

#endif // GAME_H
