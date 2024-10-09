#include<stdio.h>

void right(int width, int path);
void down(int width, int path);
void left(int width, int path);
void up(int width, int path);

typedef void(*Directions[])();
Directions dir = {right, down, left, up};

int path = 0, width = 8;			// Declared 'path' LED should take, 'width' is the spiral the path moves in
int main(void)
{
  for(int i = 0; i < 4; i++)
  {
    dir[i](width, path);
    printf("%c", '\n');
  }
  width--;
  printf("%d %d", width, path);
  // for(int i = 0; i < 4; i++)
  // {
  //   dir[i](width, &path);
  //   printf("%c", '\n');
  // }
  // width--;
  
  return 0;
}

void right(int width, int path)
{
  printf("%s\n", "Right");
  for(int i = 0; i < width - 1; i++)
  {
    /* leds[*path] = CRGB::Red;
     * (*ptr_to_path)++;
     * */
    printf("%d ", path);
    path++;
  }
}

void down(int width, int path)
{
  printf("%s\n", "Down");
  for(int i = 0; i < width - 1; i++)
  {
    printf("%d ", path);
    path += 8;
  }
}

void left(int width, int path)
{
  printf("%s\n", "Left");
  for(int i = 0; i < width - 1; i++)
  {
    /* leds[*path] = CRGB::Red;
     * (*ptr_to_path)++;
     * */
    printf("%d ", path);
    path--;
  }  
}

void up(int width, int path)
{
  printf("%s\n", "Up");
  for(int i = 0; i < width - 1; i++)
  {
    printf("%d ", path);
    path -= 8;
  }
}
