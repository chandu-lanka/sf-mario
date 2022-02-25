#ifndef MARIO_GAME_H
#define MARIO_GAME_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "../include/mario.h"

using namespace std;
using namespace sf;

class Game {
private:
    RenderWindow window;
    Event event;
    Mario mario;

    // Functions
    void initWindow();
public:
    Game();
    ~Game();

    const RenderWindow& getWindow() const;
    void update();
    void render();
};

#endif
