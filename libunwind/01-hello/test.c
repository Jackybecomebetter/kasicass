#include <stdio.h>
#define UNW_LOCAL_ONLY
#include <libunwind.h>

void show_backtrace(void) {
	unw_cursor_t cursor;
	unw_context_t uc;
	unw_word_t ip, sp;

	unw_getcontext(&uc);
	unw_init_local(&cursor, &uc);
	while (unw_step(&cursor) > 0) {
		unw_get_reg(&cursor, UNW_REG_IP, &ip);
		unw_get_reg(&cursor, UNW_REG_SP, &sp);
		printf("ip = %lx, sp = %lx\n", (long)ip, (long)sp);
	}
}

void depth2(void) {
	show_backtrace();
}

void depth1(void) {
	depth2();
}

int main() {
	depth1();
	return 0;
}

