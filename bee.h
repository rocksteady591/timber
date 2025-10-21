#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class Bee{
public:
    Bee(const std::string& texture_path, int x, int y);
    float GetSpeed() const;
    sf::Sprite GetSprite() const;
    void SetSpeed(float* speed);
    void SetPosition(float* height);
private:
    sf::Texture texture_bee_;
    sf::Sprite sprite_bee_;
    float bee_speed_ = 0.0f;
    bool is_active_ = false;
};