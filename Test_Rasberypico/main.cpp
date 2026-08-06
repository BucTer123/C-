#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/uart.h"

int main() {
	stdio_init_all();
	
	printf("Hi!\n");

	uart_init(uart0, 115200);
	
	gpio_set_function(0, GPIO_FUNC_UART);
	gpio_set_function(1, GPIO_FUNC_UART);

	uart_puts(uart0, "Starting ...");

	while (true) {
		for (int i = 0; i < 1000; i++) {
			printf("%d\n", i);
			sleep_ms(1000);
		}	
	}
}
