#include<cassert>
#include"game.h"
bool test(int x, string answ) {
	return is_rigth(x, answ);
}
static void test_game()
{
	assert(test(3, "yes") == false);
	assert(test(10, "yes") == true);
	assert(test(3, "no") == true);
	assert(test(10, "no") == false);
}

