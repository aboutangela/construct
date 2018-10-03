#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct single{char* artist; char* song;};
//struct single current;

char * artists[] = {
  "smash mouth",
  "blink182",
  "neck deep",
};

char * songs[] = {
  "all star",
  "dysentary gary",
  "in bloom",
};

struct single example(struct single x){
  srand(time(NULL));
  x.artist = artists[rand() % 3];
  x.song = songs[rand() % 3];
  return x;
 }

int print(struct single x){
  printf("artist: %s, ", x.artist);
  printf("song: %s \n", x.song);
  return 0;
}

int modify(struct single x){
  char * art = x.artist;
  char * son = x.song;
  *art = artists[rand() % 3];
  *son = songs[rand() % 3];
  //x.artist = artists[rand() % 3];
  //x.song = songs[rand() % 3];
  return 0;
}

int main(){
  struct single current;
  current = example(current);
  printf("original struct: \n");
  print(current);
  modify(current);
  printf("modified struct: \n");
  print(current);
  return 0;
}
