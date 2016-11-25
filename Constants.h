#ifndef CONSTANTS_H
#define CONSTANTS_H

const int SCREEN_WIDTH = 128;
const int SCREEN_HEIGHT = 32;

const int TOTAL_LEVELS = 8;
const int MAIN_MENU = 0;
const int SELECTION = 1;
const int PARTY = 2;
const int GOOSE_HUNTER = 3;
const int COLLECT_LOVE = 4;
const int LOCK_PICKER = 5;
const int GOOSE_JUMPER = 6;
const int GOOSE_FISHER = 7;
const int ENDING = 8;

const int SWITCH_COUNT = 2;
const uint32_t SWITCHES[] = { PA_6, PA_7 };
const int BUTTON_COUNT = 2;
const uint32_t BUTTONS[] = { PD_2, PE_0 };
const int MAX_POTENTIAL = 4390;
const uint32_t POTENTIOMETER = PE_3;
const int LED_COUNT = 5;
const uint32_t LEDS[] = { GREEN_LED, PB_5, PD_6, PC_7, PC_6 };

const int HYPE_THRESHOLD = 1250;
const char *HYPE[] = { "----", "====", "####" };

const char *LEVEL_NAMES[] = { "PARTY MODE", "GOOSE HUNTER", "COLLECT LOVE", "LOCK PICKER", "GOOSE JUMPER", "GOOSE FISHER" };

const int EPS = 35;
const int COOLDOWN = 125;

const int MAX_LOVE = 20;

#endif
