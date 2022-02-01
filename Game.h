#ifndef GAME_H
#define GAME_H

class Game {
public:
	Game();
	void run();

private:
	void processEvents();
	void update();
	void render();

private:
	sf::RenderWindow mWindow;
	sf::CircleShape mPlayer;
};


#endif
