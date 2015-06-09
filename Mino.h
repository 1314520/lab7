//
//  Mino.h
//  yaya
//
//  Created by apple on 2015/6/9.
//  Copyright (c) 2015年 apple. All rights reserved.
//

#ifndef __yaya__Mino__
#define __yaya__Mino__

#include <iostream>
using namespace std;
class Mino
{
    public:
        Mino(int mri=1);
        Mino& turn();
        virtual void paint()=0;
    protected:
        int rotate_index,max_ri;
     };
#endif
/* defined(__yaya__Mino__) */
