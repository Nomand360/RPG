#ifndef GAME_H
#define GAME_H

#include <gamestates.h>

class Game
{
private:
    sf::RenderWindow *window; //объект окна
    sf::Event sfEvent; // объект событий
    float deltaTime;
    sf::Clock deltaTimeClock; //время для обновления

    std::stack<States*> states;

    void initWindow();
    void initStates();
public:
    Game();
    virtual ~Game();
    //Функции игры
    void updateDeltaTime();
    void updateSFMLEvents();
    void update();
    void render();
    void run();
};

#endif // GAME_H
