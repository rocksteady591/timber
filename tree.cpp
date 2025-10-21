#include "tree.h"

Tree::Tree(const std::string& texture_path, int x, int y) {
    texture_tree_.loadFromFile(texture_path);
    sprite_tree_.setTexture(texture_tree_);
    sprite_tree_.setPosition(x, y);
}