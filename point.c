#include <math.h>
#include "point.h"

double get_distance(Point *org_location, Point *food_location){
   return hypot (org_location->x  - food_location->x, org_location->y - food_location->y);
}

void get_closest_food( Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  double distance = get_distance(&current_location, &food_points[0]);
  FIVE_TIMES
  {
    double food_distance = get_distance(&current_location, &food_points[count]);
    if (food_distance < distance){
      distance = food_distance;
      closest_food_location->x = food_points[count].x;
      closest_food_location->y = food_points[count].y;
    }
  }
}
