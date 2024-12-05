/*
 * DioWED.cpp
 *
 *  Created on: 13.01.2018
 *      Author: AP02
 */

#include "EdgeDio.h"

EdgeDio::EdgeDio(Dio_t dio, Mode_t mode) : Dio(dio, mode)
{
}

EdgeDio::~EdgeDio()
{
   // TODO Auto-generated destructor stub
}

void EdgeDio::loop(void)
{
   Level_t io;
   io = Dio::get();
   this->setStatus((uint8_t)io);
   this->checkEdges();
   return;
}
