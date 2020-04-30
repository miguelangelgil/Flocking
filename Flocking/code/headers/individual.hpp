#pragma once
#include <SFML/Graphics.hpp>

class Individual 
{
private:
    float max_speed;
    float min_speed;
    float max_distance;
    float min_distance;
    bool lead;
    Individual* lead;
    sf::Vector2f position;
    
public:
    Individual(float max_speed, float min_speed, float max_distance, float min_distance);
    
};
