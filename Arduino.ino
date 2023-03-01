// Copyright (c) 2023 Andi Cucka All rights reserved
//
// Created by: Andi Cucka
// Created on: March 2023
// This module stimulates the LED connected to Arduino on pin 5

int pin5 = 5;

void setup()
{
    pinMode(pin5, OUTPUT);
}

void loop()
{
    digitalWrite(pin5, HIGH);
    delay(1000);
    digitalWrite(pin5, LOW);
    delay(1000);
}
