//
//  Tetris.cpp
//  yaya
//
//  Created by apple on 2015/6/9.
//  Copyright (c) 2015年 apple. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "genMino.h"
using namespace std;
int main ()
{
    Mino* mino_ptr;
    
    srandom(time(NULL));
    for (int i=0;i<3;++i)
    {
        mino_ptr=genMino();
        mino_ptr->paint();
        delete mino_ptr;
    }
    return 0;
}

