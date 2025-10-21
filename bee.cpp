#include "bee.h"

Bee::Bee(const std::string& texture_path, int x, int y) {
    texture_bee_.loadFromFile(texture_path);
    sprite_bee_.setTexture(texture_bee_);
    sprite_bee_.setPosition(x, y);
}

float Bee::GetSpeed() const{
    return bee_speed_;
}
sf::Sprite Bee::GetSprite() const{
    return sprite_bee_;
}
void Bee::SetSpeed(float* speed){
    bee_speed_ = *speed;
}
void Bee::SetPosition(float* height){
    sprite_bee_.setPosition(2000, *height);
}