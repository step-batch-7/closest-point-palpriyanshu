#include "point.h"

double get_distance(Point org_location, Point food_location){
   return hypot(org_location.x  - food_location.x, org_location.y - food_location.y);
}

void get_closest_food( Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  double closer_food_distance = get_distance(current_location, food_points[0]);
  for (int count = 0; count < POINT_LENGTH; count++)
  {
    double current_food_distance = get_distance(current_location, food_points[count]);
    if(current_food_distance < closer_food_distance)
    {
      closer_food_distance = current_food_distance;
      *closest_food_location = food_points[count];
    }
  }
}
