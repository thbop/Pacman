#ifndef SPRITE_H
#define SPRITE_H

const u32 SPRITECOLORS[] = {
    0xFFFF00FF, // PACMAN       / READY!
    0xFF0000FF, // RED GHOST    / CHERRY          / PANIC1 EYES
    0xFFB7FFFF, // PINK GHOST   / GHOST GATE
    0x00FFFFFF, // BLUE GHOST
    0xFFB751FF, // ORANGE GHOST
    0xDEDEFFFF, // EYES         / PANIC1
    0x2121FFFF, // EYE BLUE     / WALL            / PANIC0
    0x000000FF, // BLACK
    0xFFB7AEFF, // ORB          / PANIC0 EYES
    0xDEDEDEFF, // TEXT         / CHERRY SPECULAR
    0xDE9747FF, // CHERRY STEM
};

// PACMAN 13:13 (generally)
// GHOST 14:14
// TILE 8:8

// SPRITES FILE
// u8 for sprite dimensions (X 0000 Y 0000)
// Series of 4bit pixels wrapped by dimensions

#endif