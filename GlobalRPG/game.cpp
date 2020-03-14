#include "game.h"

void Game::initWindow(){
    this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "SFML"); //Инииализация динамического окна
}

Game::Game()
{
    this->initWindow(); //вызов функции инициализации
}

Game::~Game(){
    delete this->window; //удаление динамического окна
}

void Game::updateSFMLEvents(){
    while(this->window->pollEvent(this->sfEvent)){//проверка события на закрытие окна
        if(this->sfEvent.type == sf::Event::Closed){
            this->window->close();
        }
    }
}

void Game::update(){
    this->updateSFMLEvents();
}

void Game::render(){
    this->window->clear(); //отчистка окна
    this->window->display(); //отрисовка окна
}

void Game::run(){
    while(this->window->isOpen()){
        this->update();
        this->render();
    }
}
