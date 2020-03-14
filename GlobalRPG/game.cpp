#include "game.h"

void Game::initWindow(){
    std::fstream fst("configurate.ini");
    std::string title = "None";
    sf::VideoMode window_WD(640, 480);
    unsigned frame_limit = 120;
    bool vert_sync_enabled = false;

    if(fst.is_open()){
        std::getline(fst, title);
        fst >> window_WD.width >> window_WD.height;
        fst >> frame_limit;
        fst >> vert_sync_enabled;
    }
    fst.close();
    this->window = new sf::RenderWindow(window_WD, title); //Инииализация динамического окна
    this->window->setFramerateLimit(frame_limit);
    this->window->setVerticalSyncEnabled(vert_sync_enabled);
}

Game::Game()
{
    this->initWindow(); //вызов функции инициализации
}

Game::~Game(){
    delete this->window; //удаление динамического окна
}

void Game::updateDeltaTime(){
    this->deltaTime = this->deltaTimeClock.restart().asSeconds(); //взять время в секундах и обновить для каждого кадра
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
        this->updateDeltaTime();
        this->update();
        this->render();
    }
}
