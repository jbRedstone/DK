//
//  Character.hpp
//  DK
//
//  Created by Joshua Rubin on 02/06/2017.
//  Copyright © 2017 Joshua Rubin. All rights reserved.
//

#ifndef Character_hpp
#define Character_hpp

#include <stdio.h>
#include "Sprite.hpp"
#include "Furniture.hpp"

class Character : public Sprite
{
public:
    Character();
    void walk(location origin, location destination);
    void climb(location origin, location destination);
    void jump();
    bool meet(Character foe);
    bool meet(Furniture piece);
};

#endif /* Character_hpp */
