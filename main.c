#include "point.h"

int main(void)
{
 Point food_points[] =FOOD_LOCATIONS;
int points_length = sizeof(food_points) / sizeof(Point);

  Point current_location = {18, 86};
  Point closest_food_location = food_points[0];
  get_closest_food(food_points, points_length, current_location, &closest_food_location);
  printf("org_location is  %d,  %d and closest_food_location is %d, %d\n", current_location.x, current_location.y, closest_food_location.x, closest_food_location.y);
 return 0;
}