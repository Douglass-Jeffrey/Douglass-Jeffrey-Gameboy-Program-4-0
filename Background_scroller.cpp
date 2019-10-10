// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: Oct 2019
// This program moves the background of a game

#include <gb/gb.h>
#include "spacetiles.c"
#include "spacemap.c"

void main() {
    set_bkg_data(0, 7, spacetiles);
    set_bkg_tiles(0, 0, 40, 18, spacemap);

    SHOW_BKG;
    DISPLAY_ON;

    while (1) {
        scroll_bkg(1, 0);
        delay(100);
    }
}
