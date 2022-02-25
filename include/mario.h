#ifndef MARIO_MARIO_H
#define MARIO_MARIO_H

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

class Mario {
private:
    void initMario();
    RectangleShape mario_rect;
public:
    Mario();
    ~Mario();
    void moveMario();
    void update();
    void render(RenderTarget& target);
};


#endif