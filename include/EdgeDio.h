/*
 * DioWED.h
 *
 *  Created on: 13.01.2018
 *      Author: AP02
 */

#ifndef DIOWED_H_
#define DIOWED_H_


#include "Dio.h"
#include "Edge/Edge.h"
class EdgeDio : public Dio, public Edge
{
   public:

   /**
    * @brief Dio
    * @param dio
    * @param mode
    * @param edgeRef
    */
   EdgeDio(Dio_t dio, Mode_t mode);

   virtual ~EdgeDio();
 
   /**
    * @brief loop
    */
   void loop(void);


};

#endif /* 05_PERIPERIAL_DIO_DIOWED_H_ */
