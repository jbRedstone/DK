//
//  Sprite.cpp
//  DK
//
//  Created by Joshua Rubin on 02/06/2017.
//  Copyright © 2017 Joshua Rubin. All rights reserved.
//

#include "Sprite.hpp"

Sprite::Sprite(sf::Texture spriteMap)
{
//    m_rect.setSize(m_frameSize);
//    m_rect.setPosition(m_position.first, m_position.second);
    m_sprite.setPosition(m_position.first, m_position.second);
    m_sprite.setTextureRect(ACTION_MAP(m_type));
//    (sf::IntRect () );
}
