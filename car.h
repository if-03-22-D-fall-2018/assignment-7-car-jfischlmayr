/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

enum CarType { AIXAM, FIAT_MULTIPLA, JEEP };
enum Color { RED, BLACK, BLUE, ORANGE, SILVER, GREEN};

typedef struct CarImplementation* Car;

int get_speed(Car car);
double get_fill_level(Car car);
double get_acceleration_rate(Car car);
void init();
void set_acceleration_rate(Car car, double acceleration_rate);
void accelerate(Car car);
Car get_car(enum CarType type);
enum CarType get_type(Car car);
enum Color get_color(Car car);
#endif
