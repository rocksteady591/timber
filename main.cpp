#include <SFML/Graphics.hpp>
#include "cloud.h"
#include "bee.h"
#include "tree.h"
#include <string>

int main(){
    sf::VideoMode vm(1920, 1080);
    sf::RenderWindow window(vm, "Timber!", sf::Style::Fullscreen);
    // background
    sf::Texture texture_background;
    texture_background.loadFromFile("graphics/background.png");
    sf::Sprite sprite_background;
    sprite_background.setTexture(texture_background);
    sprite_background.setPosition(0,0);
    // tree-----------------------------------------------
    std::string tree_texture_path = "graphics/tree.png";
    Tree tree1(tree_texture_path, 810, 0);
    // bee------------------------------------------------
    std::string bee_texture_path = "graphics/bee.png";
    Bee bee1(bee_texture_path, 0, 800);
    //clouds----------------------------------------------
    std::string cloud_texture_path = "graphics/cloud.png"; 
    Cloud cloud1(cloud_texture_path, 0, 0);
    Cloud cloud2(cloud_texture_path, 0, 250);
    Cloud cloud3(cloud_texture_path, 0, 500);
    //clock
    sf::Clock clock;
    while(window.isOpen()){
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
            window.close();
        }
        window.clear();
        //time
        sf::Time dt = clock.restart();
        //background
        window.draw(sprite_background);
        //tree
        window.draw(tree1.GetSprite());
        //bee
        window.draw(bee1.GetSprite());
        //clouds
        window.draw(cloud1.GetSprite());
        window.draw(cloud2.GetSprite());
        window.draw(cloud3.GetSprite());

        window.display();
    }

    return 0;
}