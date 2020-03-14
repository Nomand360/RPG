#include "game.h"

void Game::initWindow(){
    this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "SFML");
}

Game::Game()
{

}

Game::~Game(){
    delete this->window;
}

void Game::updateSFMLEvents(){

}

void Game::update(){

}

void Game::render(){

}

void Game::run(){

}
