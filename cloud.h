#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class Cloud{
public:
    Cloud(const std::string& texture_path, int x, int y);
    float GetSpeed() const;
    sf::Sprite GetSprite() const;
    void SetSpeed(float* speed);
private:
    sf::Texture texture_cloud_;
    sf::Sprite sprite_cloud_;
    float cloud_speed_ = 0.0f;
};