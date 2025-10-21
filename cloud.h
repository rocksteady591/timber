#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class Cloud{
public:
    Cloud(const std::string& texture_path, int x, int y);
    float GetSpeed() const{
        return cloud_cpeed_;
    }
    sf::Sprite GetSprite() const{
        return sprite_cloud_;
    }
private:
    sf::Texture texture_cloud_;
    sf::Sprite sprite_cloud_;
    float cloud_cpeed_ = 0.0f;
};