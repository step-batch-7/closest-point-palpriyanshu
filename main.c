#include "point.h"

int main(void)
{
 Point food_points[] =FOOD_LOCATIONS;
 Point organism_locations[] = ORGANISM_LOCATIONS;

 FIVE_TIMES
 {
  Point current_location = organism_locations[count];
  Point closest_food_location = food_points[0];
  get_closest_food(food_points, POINT_LENGTH, current_location, &closest_food_location);
  printf("org_location is  %d, %d and closest_food_location is %d, %d\n", current_location.x, current_location.y, closest_food_location.x, closest_food_location.y);
 }
 return 0;
}