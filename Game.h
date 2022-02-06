#ifndef GAME_H
#define GAME_H

class Game {
public:
	Game();
	void run();

private:
	void processEvents();
	void update(sf::Time elapsedTime);
	void render();
	void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);

private:
	sf::RenderWindow mWindow;
	sf::CircleShape mPlayer;

	bool mIsMovingUp, mIsMovingDown, mIsMovingRight, mIsMovingLeft;
		

	static const float PlayerSpeed;
	static const sf::Time TimePerFrame;
};


#endif
