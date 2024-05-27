#include <SFML/Graphics.hpp>

int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

    // Create a circle shape
    sf::CircleShape circle(50); // Radius of 50
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(0, 275); // Start position

    // Velocity of the circle
    float velocity = 100.0f; // Pixels per second

    sf::Clock clock;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Calculate the time elapsed since last frame
        sf::Time deltaTime = clock.restart();

        // Update the position of the circle
        sf::Vector2f position = circle.getPosition();
        position.x += velocity * deltaTime.asSeconds();
        if (position.x > window.getSize().x) {
            position.x = -circle.getRadius() * 2; // Reset position if it goes off screen
        }
        circle.setPosition(position);

        window.clear();
        window.draw(circle);
        window.display();
    }

    return 0;
}
