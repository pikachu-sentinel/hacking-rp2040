#include <stdio.h>
#include "pico/stdlib.h"

int main() {
  stdio_init_all();
  const uint LED_PIN = 25;
  gpio_init(LED_PIN);
  gpio_set_dir(LED_PIN, GPIO_OUT);
  gpio_put(LED_PIN, 1);
  while (true) {
    printf("Hello, Wokwi!\n");
    sleep_ms(250);
  }
}
