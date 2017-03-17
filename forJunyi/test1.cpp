//
//  main.cpp
//  ProgramTest
//
//  Created by Cindy on 2017/3/15.
//  Copyright © 2017年 Cindy Lu. All rights reserved.
//

#include <iostream>

int outPutNum(int nNum)
{
    int nCount = 0;
    for (int i = 1; i <= nNum; i++)
    {
        if(i%3 == 0 && i%5 ==0)
        {
            nCount ++;
        }
        else if (i%3 == 0)
        {
            continue;
        }
        else if(i%5 == 0)
        {
            continue;
        }
        else
        {
            nCount ++;
        }
    }
    return nCount;
}



int main(int argc, const char * argv[]) {
    // insert code here...
    int nInt;
    std::cout << "Please input a integer:" << std::endl;
    std::cin >> nInt;
    std::cout << outPutNum(nInt) << std::endl;
    return 0;
}
