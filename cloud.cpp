#include "cloud.h"

Cloud::Cloud(const std::string& texture_path, int x, int y) {
    texture_cloud_.loadFromFile(texture_path);
    sprite_cloud_.setTexture(texture_cloud_);
    sprite_cloud_.setPosition(x, y);
}

float Cloud::GetSpeed() const{
    return cloud_speed_;
}
sf::Sprite Cloud::GetSprite() const{
    return sprite_cloud_;
}
void Cloud::SetSpeed(float* speed){
    cloud_speed_ = *speed;
}