#include "GameConfig.h"

GameConfig::GameConfig(int size, int walls, Difficulty diff, GameMode mode)
    : boardSize(size),
      wallsPerPlayer(walls),
      difficulty(diff),
      mode(mode) {}
