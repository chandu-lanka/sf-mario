#include "../include/mario.h"

Mario::Mario() {
    initMario();
}

Mario::~Mario() {}

void Mario::initMario() {
    // init variables and stuff here

    // rect
    mario_rect.setSize(Vector2f(50.f,50.f));
    mario_rect.setFillColor(Color::Blue);
}

void Mario::moveMario() {
    if (Keyboard::isKeyPressed(Keyboard::Key::D)) {
        mario_rect.move(Vector2f(5.f, 0.f));
    } else if (Keyboard::isKeyPressed(Keyboard::Key::A)) {
        mario_rect.move(Vector2f(-5.f,0.f));
    }
}

void Mario::update() {
    moveMario();
    cout << "Hello From Mario" << endl;
}

void Mario::render(RenderTarget& target) {
    target.draw(mario_rect);
}