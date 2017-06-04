//
//  types.hpp
//  DK
//
//  Created by Joshua Rubin on 02/06/2017.
//  Copyright © 2017 Joshua Rubin. All rights reserved.
//
#pragma once

#include <stdio.h>
#include <vector>
#include <SFML/Graphics.hpp>

typedef std::pair<float, float> location;
typedef sf::Vector2f size;
typedef sf::IntRect locRec;

// This maps specific actions to their no. of Frames and location on the SpriteMap
typedef std::map<std::string, std::pair<int /* No. of frames */, locRec /* first frame location */>> actionToSpriteMap;

const actionToSpriteMap ACTION_MAP =
{
    {"MarioStand", {1, locRec(0,0,16,16)} },
    {"MarioRun", {2, locRec(0,16,16,32)} },
    {"MarioClimb", {2, locRec(0,32,16,48)} },
    {"MarioEndClimb", {2, locRec(0,48,16,64)} },
    {"Girder",{1, locRec(0,64,16,72)} },
    {"Ladder", {1, locRec(0,72,8,80)} }
};

const size BOARD_SIZE = {800,600};
