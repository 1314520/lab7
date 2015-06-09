//
//  gneMino.cpp
//  yaya
//
//  Created by apple on 2015/6/9.
//  Copyright (c) 2015年 apple. All rights reserved.
//

#include <cstdlib>
#include "genMino.h"
#define NUM_MINO 3
#define MINO_I 0
#define MINO_J 1
#define MINO_T 2

Mino* genMino()
{
    int mino_type;
    Mino* ptr;
    
    mino_type=random() % NUM_MINO;
    
    switch (mino_type)
    {
        case MINO_I:
            ptr=new MinoI;
            break;
        case MINO_J:
            ptr=new MinoJ;
            break;
        case MINO_T:
            ptr=new MinoT;
            break;
    }
    return ptr;
}
