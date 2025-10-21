#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class Bee{
public:
    Bee(const std::string& texture_path, int x, int y);
    float GetSpeed() const{
        return bee_cpeed_;
    }
    sf::Sprite GetSprite() const{
        return sprite_bee_;
    }
private:
    sf::Texture texture_bee_;
    sf::Sprite sprite_bee_;
    float bee_cpeed_ = 0.0f;
};