#ifndef LEVEL_HPP
#define LEVEL_HPP

#include "ResourceManager.hpp"
#include "GameObject.hpp"
#include "Scene.hpp"
#include "Block.hpp"
#include "Player.hpp"
#include "Debug.hpp"
#include "EnergyBar.hpp"
#include <string>
#include <string.h>
#include <iostream>
#include <fstream>

#define TILE_WIDTH 50
#define TILE_HEIGHT 50
#define LEVEL_WIDTH 50 * TILE_WIDTH
#define LEVEL_HEIGHT 14 * TILE_HEIGHT
#define NUM_OF_DIF_TILES 40

class Block;

using namespace std;

class Player;

class Level : public Scene
{
private:

    void loadFromFile(string tilesetFile, string tileMapFile);
    Texture *tileTextures;
    string name;
    vector<int> tiles;

    void onUpdate(float dt);

public:
    float cameraSpeed;
    static float c;
    static float maxDistance;

    Player *player1, *player2;
    vector<Block*> blocks;

    Level(int levelNum);
    ~Level();

    void Reset();
    void Complete();
    virtual void onKeyDown(PEvent &e);
};

#endif // LEVEL_HPP
