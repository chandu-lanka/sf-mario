#include "../include/game.h"

Game::Game() {
    initWindow();
}

Game::~Game() {

}

void Game::initWindow() {
    window.create(VideoMode(800,600), "Super Mario Bros", Style::Default);
    window.setFramerateLimit(60);
}

const RenderWindow & Game::getWindow() const {
    return window;
}

void Game::update() {
    while (window.pollEvent(event)) {
        switch (event.type) {
            case Event::Closed:
                window.close();
                break;
            default:
                break;
        }
    }
    mario.update();
}

void Game::render() {
    window.clear();
    mario.render(window);
    window.display();
}