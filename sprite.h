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

// textures.png
// TILES   08:08 10
// PACMAN0 13:13 03
// PACMAN1 15:13 11
// GHOST T 14:09 05
// GHOST B 14:05 04
// GHOST E 10:05 04
// CHERRY  12:12 01

// SPRITES FILE
// 2 u8s for sprite dimensions and length (X 0000 Y 0000 L 00000000)
// Series of 2bit indicies wrapped by dimensions

#endif