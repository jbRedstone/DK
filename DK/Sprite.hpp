//
//  Sprite.hpp
//  DK
//
//  Created by Joshua Rubin on 02/06/2017.
//  Copyright © 2017 Joshua Rubin. All rights reserved.
//

#ifndef Sprite_hpp
#define Sprite_hpp

#include <stdio.h>
#include "types.hpp"

class Sprite
{
public:
    Sprite();
    Sprite(sf::Texture spriteMap);
protected:
    location m_spriteMapLoadPosition;
    size m_frameSize;
    sf::Sprite m_sprite;
    std::string m_type;
    
    location m_position;
};

#endif /* Sprite_hpp */
