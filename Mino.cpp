//
//  Mino.cpp
//  yaya
//
//  Created by apple on 2015/6/9.
//  Copyright (c) 2015年 apple. All rights reserved.
//

#include "Mino.h"
Mino::Mino(int mri):max_ri(mri){};
Mino& Mino::turn()
{
    rotate_index = (rotate_index>=max_ri)?0:rotate_index+1;
    return *this;
}

