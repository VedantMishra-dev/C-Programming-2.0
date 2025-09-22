#include<stdio.h>
#include<stdint.h>

uint8_t GPIO_Port = 0x00;

#define led_pin  3
#define set_bit(reg,bit) (reg |= (1<<bit))
#define clear_bit(reg,bit) (reg &= ~(1<<bit))

int main() {
    printf("Initial GPIO_Port = 0x%02X\n", GPIO_Port);

    set_bit(GPIO_Port, led_pin);
    printf("LED ON  -> GPIO_Port = 0x%02X (LED state = %d)\n",GPIO_Port, READ_BIT(GPIO_Port, led_pin));

    clear_bit(GPIO_Port, led_pin);
    printf("LED OFF -> GPIO_Port = 0x%02X (LED state = %d)\n",GPIO_Port, READ_BIT(GPIO_Port, led_pin));
}