#include <stdio.h>

#include <kernel/tty.h>

void kernel_main(void) {
	terminal_initialize();
	printf("Hello, this is ThamognyaOS (not really an os). Made by Thamognya Kodi <contact@thamognya.com>\n");
}
