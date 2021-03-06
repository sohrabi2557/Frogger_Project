#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "GameDefinitions.hpp"
#include "Window.hpp"
#include "Frog.hpp"
#include "Car.hpp"
#include "Log.hpp"

class Game {
public:
	Game();
	void Update();
	void Draw();
	bool IsRunning() const;
	void CalculateDeltaTime();
	void MoveFrog();
private:
	sf::Font font;
	sf::Text Score;
	sf::Text gameOver;

	sf::Sprite HeartPathSprite[Heart_Number];
	sf::Texture HeartPathTexture;

	sf::Sprite StreetPathSprite;
	sf::Texture StreetPathTexture;

	sf::Sprite FootPathSprite;
	sf::Texture FootPathTexture;

	sf::Sprite MiddlePathSprite;
	sf::Texture MiddlePathTexture;

	sf::Sprite TopPathSprite;
	sf::Texture TopPathTexture;

	Window GameWindow;
	std::vector<Car*> CarsSet;
	std::vector<Log*> LogsSet;
	Frog* FrogObject;
	//car
	int CarsSpeedSet[Car_Lanes_Number];
	std::string CarsLaneNameSet[Car_Lanes_Number];
	int CarsLaneRandDistance[Car_Lanes_Number];
	//log
	int LogsSpeedSet[Log_Lanes_Number];
	std::string LogsLaneNameSet[Log_Lanes_Number];
	int LogsLaneRandDistance[Log_Lanes_Number];

	sf::SoundBuffer MusicBuffer;
	sf::Sound MusicSound;


	int TempXDistance = Game_Cell_Size;
	float WindowWidth = 0;
	float WindowHeight = 0;

	bool isPlaying = true;
	sf::Clock GameClock;
	float DeltaTime = 0;
	float y = 25.0f;
	int CarsNumber = 0;
	int LogsNumber = 0;
	int XDistance = 0;
	int XExCar = 0;
	int XExLog = 0;
	
	friend class Frog;
};
