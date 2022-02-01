// SFML.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SFML/Graphics.hpp>

int main(int argc, char** argv)
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    sf::CircleShape shape;
    shape.setRadius(40.f);
    shape.setPosition(100.f, 100.f);
    shape.setFillColor(sf::Color::Cyan);

    while (window.isOpen())
    {
        sf::Event event;
        sf::Clock clock;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        std::cout << "Elapsed time since previous frame(microseconds): " << clock.getElapsedTime().asMicroseconds() << std::endl;
        clock.restart();

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}