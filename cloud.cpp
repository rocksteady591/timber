#include "cloud.h"

Cloud::Cloud(const std::string& texture_path, int x, int y) {
    texture_cloud_.loadFromFile(texture_path);
    sprite_cloud_.setTexture(texture_cloud_);
    sprite_cloud_.setPosition(x, y);
}