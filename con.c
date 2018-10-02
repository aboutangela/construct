#include <stdio.h>

struct single{ char* artist; char* song;};

char * artists[] = {
  "smash mouth",
  "blink182",
  "neck deep",
};

char * songs[] = {
  "all star",
  "dysentary gary",
  "in bloom,"
};

struct single example(){
  struct single x;
  x.artist = artists[0];
  x.song = songs[0];
  return x;
 }

int print(){
  printf("artist: %s, ",example().artist);
  printf("song: %s \n", example().song);
  return 0;
}

int modify(){
  example();
  return 0;
}

int main(){
  print();
  return 0;
}
