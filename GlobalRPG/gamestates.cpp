#include "gamestates.h"

GameStates::GameStates(sf::RenderWindow *window) : States(window){

}

GameStates::~GameStates(){

}

void GameStates::endState(){

}

void GameStates::render(sf::RenderTarget *target){

}

void GameStates::update(const float &deltaTime){
    std::cout << "Hello from State" << std::endl;
}
