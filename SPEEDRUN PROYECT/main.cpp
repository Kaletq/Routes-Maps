#include <fstream>
#include "routeList.h"






int main(){

	sf::RenderWindow window(sf::VideoMode(400, 459),"Costa Rican Turistic Map");
	sf::Texture texture;
	if (!texture.loadFromFile("costa_rica_map.png")) {
		cerr << "The image doesn`t charge property";
		return -1;
	}

	sf::Sprite sprite;
	sprite.setTexture(texture);
	
	sf::RectangleShape button(sf::Vector2f(80,14));
	button.setFillColor(sf::Color::Cyan);
	button.setPosition(48, 48);

	sf::Font font;
	if (!font.loadFromFile("Hartsfolk.otf")) {
		cerr << "The text doesn`t charge property";
		return -1;
	}

	sf::Text buttonText;
	buttonText.setFont(font);
	buttonText.setString("Create new route");
	buttonText.setCharacterSize(5);
	buttonText.setFillColor(sf::Color::Black);
	buttonText.setPosition(button.getPosition().x+(button.getSize().x/2)-buttonText.getGlobalBounds().width/2, button.getPosition().y+(button.getSize().y/2)-buttonText.getGlobalBounds().height/2);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear();
		window.draw(sprite);
		window.draw(button);
		window.draw(buttonText);
		window.display();
	}

	return 0;
}
