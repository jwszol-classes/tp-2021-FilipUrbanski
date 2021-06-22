#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace std;
using namespace sf;

int main()
{
	RenderWindow win_ele(VideoMode(800, 600, 32), "Elevator");

	Texture elev_tex, shaft_tex, button_tex; 

	elev_tex.loadFromFile("elevator.jpg");
	shaft_tex.loadFromFile("black.jpg");
	button_tex.loadFromFile("red.png");
	
	Sprite elev_img, 
		shaft_1, shaft_2, 
		floor_0, floor_1, floor_2, floor_3, floor_4, 
		button_0, button_1, button_2, button_3, button_4;

	shaft_1.setTexture(shaft_tex);
	shaft_1.setScale(0.001,1);
	shaft_1.setPosition(325,1);

	shaft_2.setTexture(shaft_tex);
	shaft_2.setScale(0.001, 1);
	shaft_2.setPosition(450, 1);

	elev_img.setTexture(elev_tex);
	elev_img.setScale(0.5, 0.5);
	elev_img.setPosition(330, 520);

	floor_0.setTexture(shaft_tex);
	floor_0.setScale(1, 0.005);
	floor_0.setPosition(0, 595);

	floor_1.setTexture(shaft_tex);
	floor_1.setScale(1, 0.005);
	floor_1.setPosition(0, 480);

	floor_2.setTexture(shaft_tex);
	floor_2.setScale(1, 0.005);
	floor_2.setPosition(0, 360);

	floor_3.setTexture(shaft_tex);
	floor_3.setScale(1, 0.005);
	floor_3.setPosition(0, 240);

	floor_4.setTexture(shaft_tex);
	floor_4.setScale(1, 0.005);
	floor_4.setPosition(0, 120);

	button_0.setTexture(button_tex);
	button_0.setScale(0.02, 0.02);
	button_0.setPosition(300, 550);

	button_1.setTexture(button_tex);
	button_1.setScale(0.02, 0.02);
	button_1.setPosition(300, 435);

	button_2.setTexture(button_tex);
	button_2.setScale(0.02, 0.02);
	button_2.setPosition(300, 315);

	button_3.setTexture(button_tex);
	button_3.setScale(0.02, 0.02);
	button_3.setPosition(300, 195);

	button_4.setTexture(button_tex);
	button_4.setScale(0.02, 0.02);
	button_4.setPosition(300, 75);

	while (win_ele.isOpen()) {
		win_ele.clear(sf::Color(255, 255, 255));

		Event event;
		while (win_ele.pollEvent(event))
		{
			if (event.type == Event::Closed)
				win_ele.close();
		}
		




		win_ele.draw(elev_img);
		win_ele.draw(shaft_1);
		win_ele.draw(shaft_2);
		win_ele.draw(floor_0);
		win_ele.draw(floor_1);
		win_ele.draw(floor_2);
		win_ele.draw(floor_3);
		win_ele.draw(floor_4);
		win_ele.draw(button_0);
		win_ele.draw(button_1);
		win_ele.draw(button_2);
		win_ele.draw(button_3);
		win_ele.draw(button_4);
		win_ele.display();	
	}

	return 0;
}
