#include "../include/game.h"

using namespace sf;

int main() {
    Game game;

    while (game.getWindow().isOpen()) {
        game.update();
        game.render();
    }

    return 0;
}
