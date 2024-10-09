#include<stdio.h>

void right(int width, int* ptr_to_path);
void down(int width, int* ptr_to_path);
void left(int width, int* ptr_to_path);
void up(int width, int* ptr_to_path);

typedef void(*Directions[])();
Directions dir = {right, down, left, up};

int main(void)
{
  int path = 0, width = 8;			// Declared 'path' LED should take, 'width' is the spiral the path moves in
  int j = 0;
  while(j != 2)
  {
    for(int i = 0; i < 4; i++)
    {
      dir[i](width, &path);
      printf("%c", '\n');
    }
    width--;
    j++;
    printf("%d %d\n\n", width, path);
  }
  
  return 0;
}

void right(int width, int* ptr_to_path)
{
  printf("%s\n", "Right");
  for(int i = 0; i < width - 1; i++)
  {
    /* leds[*path] = CRGB::Red;
     * (*ptr_to_path)++;
     * */
    printf("%d ", *ptr_to_path);
    (*ptr_to_path)++;
  }
}

void down(int width, int* ptr_to_path)
{
  printf("%s\n", "Down");
  for(int i = 0; i < width - 1; i++)
  {
    printf("%d ", *ptr_to_path);
    (*ptr_to_path) += 8;
  }
}

void left(int width, int* ptr_to_path)
{
  printf("%s\n", "Left");
  for(int i = 0; i < width - 1; i++)
  {
    /* leds[*path] = CRGB::Red;
     * (*ptr_to_path)++;
     * */
    printf("%d ", *ptr_to_path);
    (*ptr_to_path)--;
  }  
}

void up(int width, int* ptr_to_path)
{
  printf("%s\n", "Up");
  for(int i = 0; i < width - 2; i++)
  {
    printf("%d ", *ptr_to_path);
    (*ptr_to_path) -= 8;
  }
}
