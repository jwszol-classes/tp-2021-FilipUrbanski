#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <string>
#include <sstream>

using namespace std;
using namespace sf;



bool button_0_hover(FloatRect button_0, Vector2f mp)
{
	if (button_0.contains(mp)) {
		return true;
	}
	return false;
}

bool button_01_hover(FloatRect button_1, Vector2f mp)
{
	if (button_1.contains(mp)) {
		return true;
	}
	return false;
}

bool button_02_hover(FloatRect button_2, Vector2f mp)
{
	if (button_2.contains(mp)) {
		return true;
	}
	return false;
}

bool button_03_hover(FloatRect button_3, Vector2f mp)
{
	if (button_3.contains(mp)) {
		return true;
	}
	return false;
}

bool button_04_hover(FloatRect button_4, Vector2f mp)
{
	if (button_4.contains(mp)) {
		return true;
	}
	return false;
}

bool one_0_hover(FloatRect one_0, Vector2f mp)
{
	if (one_0.contains(mp)) {
		return true;
	}
	return false;
}

bool one_1_hover(FloatRect one_1, Vector2f mp)
{
	if (one_1.contains(mp)) {
		return true;
	}
	return false;
}

bool one_2_hover(FloatRect one_2, Vector2f mp)
{
	if (one_2.contains(mp)) {
		return true;
	}
	return false;
}

bool one_3_hover(FloatRect one_3, Vector2f mp)
{
	if (one_3.contains(mp)) {
		return true;
	}
	return false;
}

bool one_4_hover(FloatRect one_4, Vector2f mp)
{
	if (one_4.contains(mp)) {
		return true;
	}
	return false;
}

bool mone_0_hover(FloatRect mone_0, Vector2f mp)
{
	if (mone_0.contains(mp)) {
		return true;
	}
	return false;
}

bool mone_1_hover(FloatRect mone_1, Vector2f mp)
{
	if (mone_1.contains(mp)) {
		return true;
	}
	return false;
}

bool mone_2_hover(FloatRect mone_2, Vector2f mp)
{
	if (mone_2.contains(mp)) {
		return true;
	}
	return false;
}

bool mone_3_hover(FloatRect mone_3, Vector2f mp)
{
	if (mone_3.contains(mp)) {
		return true;
	}
	return false;
}

bool mone_4_hover(FloatRect mone_4, Vector2f mp)
{
	if (mone_4.contains(mp)) {
		return true;
	}
	return false;
}


int waga = 0, pass = 0;

int main()
{
	RenderWindow win_ele(VideoMode(800, 600, 32), "Elevator");

	Texture elev_tex, shaft_tex, button_tex, one_tex;

	elev_tex.loadFromFile("elevator.jpg");
	shaft_tex.loadFromFile("black.jpg");
	button_tex.loadFromFile("red.png");
	one_tex.loadFromFile("1.png");

	Sprite elev_img,
		shaft_1, shaft_2,
		floor_0, floor_1, floor_2, floor_3, floor_4,
		button_0, button_1, button_2, button_3, button_4,
		one_0, one_1, one_2, one_3, one_4,
		mone_0, mone_1, mone_2, mone_3, mone_4;

	Font font;
	font.loadFromFile("arial.ttf");

	Vector2f mp;

	Text warning, pass_numb, mapss;

	warning.setFont(font);
	warning.setString("Za duzo pasazerow, pozbadz sie kilku.");
	warning.setPosition(40, 30);
	warning.setCharacterSize(16);
	warning.setFillColor(Color(0, 0, 0));

	mpass.setFont(font);
	mpass.setString("Usunales nieistniejacych pasazerow, \ndodaj ich z powrotem");
	mpass.setPosition(20, 30);
	mpass.setCharacterSize(14);
	mpass.setFillColor(Color(0, 0, 0));

	
	pass_numb.setFont(font);
	pass_numb.setPosition(700, 30);
	pass_numb.setCharacterSize(20);
	pass_numb.setFillColor(Color(0, 0, 0));

	mp.x = Mouse::getPosition(win_ele).x;
	mp.y = Mouse::getPosition(win_ele).y;

	shaft_1.setTexture(shaft_tex);
	shaft_1.setScale(0.001, 1);
	shaft_1.setPosition(325, 1);

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



	one_0.setTexture(one_tex);
	one_0.setScale(0.025, 0.025);
	one_0.setPosition(50, 550);

	one_1.setTexture(one_tex);
	one_1.setScale(0.025, 0.025);
	one_1.setPosition(50, 435);

	one_2.setTexture(one_tex);
	one_2.setScale(0.025, 0.025);
	one_2.setPosition(50, 315);

	one_3.setTexture(one_tex);
	one_3.setScale(0.025, 0.025);
	one_3.setPosition(50, 195);

	one_4.setTexture(one_tex);
	one_4.setScale(0.025, 0.025);
	one_4.setPosition(50, 75);

	mone_0.setTexture(one_tex);
	mone_0.setScale(0.025, 0.025);
	mone_0.setPosition(750, 550);

	mone_1.setTexture(one_tex);
	mone_1.setScale(0.025, 0.025);
	mone_1.setPosition(750, 435);

	mone_2.setTexture(one_tex);
	mone_2.setScale(0.025, 0.025);
	mone_2.setPosition(750, 315);

	mone_3.setTexture(one_tex);
	mone_3.setScale(0.025, 0.025);
	mone_3.setPosition(750, 195);

	mone_4.setTexture(one_tex);
	mone_4.setScale(0.025, 0.025);
	mone_4.setPosition(750, 75);




	while (win_ele.isOpen()) {
		Event event;
		while (win_ele.pollEvent(event))
		{
			if (event.type == Event::Closed)
				win_ele.close();

			if (button_0_hover(button_0.getGlobalBounds(), sf::Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{
				if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
				{
					elev_img.setPosition(330, 520);
				}
			}

			if (button_01_hover(button_1.getGlobalBounds(), sf::Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{
				if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
				{
					elev_img.setPosition(330, 400);
				}
			}

			if (button_02_hover(button_2.getGlobalBounds(), sf::Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{
				if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
				{
					elev_img.setPosition(330, 280);
				}
			}

			if (button_03_hover(button_3.getGlobalBounds(), sf::Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{
				if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
				{
					elev_img.setPosition(330, 160);
				}
			}

			if (button_04_hover(button_4.getGlobalBounds(), sf::Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{
				if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
				{
					elev_img.setPosition(330, 40);
				}
			}

			if (one_0_hover(one_0.getGlobalBounds(), sf::Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{
				if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
				{
					waga += 70;
					pass++;
				}
			}

			if (one_1_hover(one_1.getGlobalBounds(), sf::Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{
				if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
				{
					waga += 70;
					pass++;
				}
			}

			if (one_2_hover(one_2.getGlobalBounds(), sf::Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{
				if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
				{
					waga += 70;
					pass++;
				}
			}

			if (one_3_hover(one_3.getGlobalBounds(), sf::Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{
				if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
				{
					waga += 70;
					pass++;
				}
			}

			if (one_4_hover(one_4.getGlobalBounds(), sf::Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{
				if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
				{
					waga += 70;
					pass++;
				}
			}

			if (mone_0_hover(mone_0.getGlobalBounds(), sf::Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{
				if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
				{
					waga -= 70;
					pass--;
				}
			}

			if (mone_1_hover(mone_1.getGlobalBounds(), sf::Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{
				if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
				{
					waga -= 70;
					pass--;
				}
			}

			if (mone_2_hover(mone_2.getGlobalBounds(), sf::Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{
				if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
				{
					waga -= 70;
					pass--;
				}
			}

			if (mone_3_hover(mone_3.getGlobalBounds(), sf::Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{
				if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
				{
					waga -= 70;
					pass--;
				}
			}

			if (mone_4_hover(mone_4.getGlobalBounds(), sf::Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
			{
				if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
				{
					waga -= 70;
					pass--;
				}
			}

			stringstream ss;
			ss << pass;
			pass_numb.setString(ss.str());

			win_ele.clear(sf::Color(255, 255, 255));
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
			win_ele.draw(one_0);
			win_ele.draw(one_1);
			win_ele.draw(one_2);
			win_ele.draw(one_3);
			win_ele.draw(one_4);
			win_ele.draw(mone_0);
			win_ele.draw(mone_1);
			win_ele.draw(mone_2);
			win_ele.draw(mone_3);
			win_ele.draw(mone_4);
			win_ele.draw(pass_numb);
			if (waga >= 700)
				win_ele.draw(warning);
			if (pass < 0)
				win_ele.draw(mpass);
			win_ele.display();
		}
	}
	return 0;
}
