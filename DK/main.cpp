#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "ResourcePath.hpp"
#include "types.hpp"

int main(int, char const**)
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(BOARD_SIZE.x, BOARD_SIZE.y), "Save Mario");

    // Load map of all sprites
    sf::Texture spriteMap;
    if(!spriteMap.loadFromFile(resourcePath() + "spriteMap.png"))
    {
        return EXIT_FAILURE;
    }
    


//    // Load a music to play
//    sf::Music music;
//    if (!music.openFromFile(resourcePath() + "nice_music.ogg")) {
//        return EXIT_FAILURE;
//    }
//
//    // Play the music
//    music.play();

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // Escape pressed: exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }

        // Clear screen
        window.clear();

        // Draw the sprite
//        window.draw(sprite);

        // Draw the string
//        window.draw(text);

        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}
