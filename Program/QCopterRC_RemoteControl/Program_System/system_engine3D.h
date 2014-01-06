/* #include "system_engine3D.h" */

#ifndef __SYSTEM_ENGINE3D_H
#define __SYSTEM_ENGINE3D_H

#include "stm32f4xx.h"
#include "algorithm_quaternion.h"
/*=====================================================================================================*/
/*=====================================================================================================*/
typedef struct {
  float X;
  float Y;
  float Z;
} VECTOR_ST;
/*=====================================================================================================*/
/*=====================================================================================================*/
//void Engine3D_RotateX( s16 Angle, s16 *Coordinate );
//void Engine3D_RotateY( s16 Angle, s16 *Coordinate );
//void Engine3D_RotateZ( s16 Angle, s16 *Coordinate );

void Engine3D_RotateByDCM( VECTOR_ST *Vect, EulerAngle *pAngE );
void Engine3D_Scaling( VECTOR_ST *Vect, VECTOR_ST *VectScal );
void Engine3D_Move( VECTOR_ST *Vect, VECTOR_ST *VectMove );
/*=====================================================================================================*/
/*=====================================================================================================*/
#endif	 
