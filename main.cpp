#include <SFML/Graphics.hpp>

int main(){
    sf::VideoMode vm(1920, 1080);
    sf::RenderWindow window(vm, "Timber!", sf::Style::Fullscreen);
    // background
    sf::Texture texture_background;
    texture_background.loadFromFile("graphics/background.png");
    sf::Sprite sprite_background;
    sprite_background.setTexture(texture_background);
    sprite_background.setPosition(0,0);
    // tree
    sf::Texture texture_tree;
    texture_tree.loadFromFile("graphics/tree.png");
    sf::Sprite sprite_tree;
    sprite_tree.setTexture(texture_tree);
    sprite_tree.setPosition(810, 0);
    // bee
    sf::Texture texture_bee;
    texture_bee.loadFromFile("graphics/bee.png");
    sf::Sprite sprite_bee;
    sprite_bee.setTexture(texture_bee);
    sprite_bee.setPosition(0, 800);
    bool bee_is_active = false;
    float bee_speed = 0.0f;
    //clouds
    sf::Texture texture_cloud;
    texture_cloud.loadFromFile("graphics/cloud.png");
    sf::Sprite sprite_cloud_1;
    sf::Sprite sprite_cloud_2;
    sf::Sprite sprite_cloud_3;
    sprite_cloud_1.setTexture(texture_cloud);
    sprite_cloud_2.setTexture(texture_cloud);
    sprite_cloud_3.setTexture(texture_cloud);
    sprite_cloud_1.setPosition(0, 0);
    sprite_cloud_2.setPosition(0, 250);
    sprite_cloud_3.setPosition(0, 500);
    float cloud_speed_1 = 0.0f;
    float cloud_speed_2 = 0.0f;
    float cloud_speed_3 = 0.0f;
    while(window.isOpen()){
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
            window.close();
        }
        window.clear();
        //background
        window.draw(sprite_background);
        //tree
        window.draw(sprite_tree);
        //bee
        window.draw(sprite_bee);
        //clouds
        window.draw(sprite_cloud_1);
        window.draw(sprite_cloud_2);
        window.draw(sprite_cloud_3);

        window.display();
    }

    return 0;
}