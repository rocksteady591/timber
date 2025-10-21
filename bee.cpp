#include "bee.h"

Bee::Bee(const std::string& texture_path, int x, int y) {
    texture_bee_.loadFromFile(texture_path);
    sprite_bee_.setTexture(texture_bee_);
    sprite_bee_.setPosition(x, y);
}