#include "flib.h"

static void local_f(int s) {}

static int local_state;

int state;

void f(void) { local_f(state); }

