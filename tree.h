#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class Tree{
public:
    Tree(const std::string& texture_path, int x, int y);
    sf::Sprite GetSprite() const;
private:
    sf::Texture texture_tree_;
    sf::Sprite sprite_tree_;
};