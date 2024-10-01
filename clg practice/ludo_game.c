#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_PLAYERS 2ko
#define NUM_PIECES 4
#define NUM_SQUARES 100

struct Piece {
  int player;
  int position;
  int home;
};

int roll_dice() {
  return (rand() % 6) + 1;
}

void move_piece(struct Piece *piece, int roll) {
  piece->position += roll;
  if (piece->position >= NUM_SQUARES) {
    piece->position -= NUM_SQUARES;
    piece->home = 1;
  }
}

int main() {
  srand(time(NULL));
  
  int current_player = 0;
  struct Piece pieces[NUM_PLAYERS][NUM_PIECES];
  
  for (int i = 0; i < NUM_PLAYERS; i++) {
    for (int j = 0; j < NUM_PIECES; j++) {
      pieces[i][j].player = i;
      pieces[i][j].position = 0;
      pieces[i][j].home = 0;
    }
  }
  
  while (1) {
    int roll = roll_dice();
    printf("Player %d rolls a %d\n", current_player + 1, roll);
    
    int piece_to_move = -1;
    while (piece_to_move == -1) {
      printf("Which piece would you like to move (1-%d)? ", NUM_PIECES);
      scanf("%d", &piece_to_move);
      piece_to_move--;
      
      if (pieces[current_player][piece_to_move].home == 1) {
        printf("Piece %d is already home\n", piece_to_move + 1);
        piece_to_move = -1;
      }
    }
    
    move_piece(&pieces[current_player][piece_to_move], roll);
    
    int num_pieces_home = 0;
    for (int i = 0; i < NUM_PIECES; i++) {
      num_pieces_home += pieces[current_player][i].home;
    }
    
    if (num_pieces_home == NUM_PIECES) {
      printf("Player %d wins!\n", current_player + 1);
      break;
    }
    
    current_player = (current_player + 1) % NUM_PLAYERS;
  }
  
  return 0;
}