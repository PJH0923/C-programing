#include <stdio.h>
#include "Am13_square.h"

void print_rect(RECT p)
{
	printf("[RECT(%d, %d)(%d, %d)]", p.top.x, p.top.y, p.bottom.x, p.bottom.y);
}