#ifndef GAMESTATES_H
#define GAMESTATES_H

#include <states.h>

class GameStates : public States
{
private:

public:
    GameStates(sf::RenderWindow *window);
    virtual ~GameStates();

    void endState();
    void render(sf::RenderTarget *target);
    void update(const float &deltaTime);
};

#endif // GAMESTATES_H
