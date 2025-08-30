#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    float temperature;
    float humidity;
    Date date_reading;
} SensorData;

typedef struct {
    uint8_t pin_number;
    uint8_t mode;
} GPIO_Config;

typedef struct{
    GPIO_Config tx_pin;
    GPIO_Config rx_pin;
    uint32_t baud_rate;
} UART_Config;

int main() {
    SensorData weather = {
        .temperature = 25.3f,
        .humidity = 60.5f,
        .date_reading = {15,06,2023}
    };

        printf("Weather Reading:\n");
    printf("Temp: %.1fC, Humidity: %.1f%%\n", 
           weather.temperature, weather.humidity);
    printf("Date: %02d/%02d/%04d\n\n", 
           weather.date_reading.day, 
           weather.date_reading.month, 
           weather.date_reading.year);

    UART_Config uart1 = {
        .tx_pin = {2,1},
        .rx_pin = {3,0},
        .baud_rate = 9600
    };

     printf("UART Configuration:\n");
    printf("TX: Pin %d (Mode %d)\n", 
           uart1.tx_pin.pin_number, uart1.tx_pin.mode);
    printf("RX: Pin %d (Mode %d)\n", 
           uart1.rx_pin.pin_number, uart1.rx_pin.mode);
    printf("Baud: %ld\n", uart1.baud_rate);

    return 0;
}