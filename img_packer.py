from PIL import Image


# textures.png
# TILES   08:08 10
# PACMAN0 13:13 03
# PACMAN1 15:13 11
# GHOST T 14:09 05
# GHOST B 14:05 04
# GHOST E 10:05 04
# CHERRY  12:12 01

sprites = (
    (8, 8, 10),
    (13, 13, 3),
    (15, 13, 11),
    (14, 9, 5),
    (14, 5, 4),
    (10, 5, 4),
    (12, 12, 1)
)

indices = (
    (0, 0, 0, 255),
    (255, 255, 255, 255),
    (255, 0, 0, 255),
    (0, 0, 255, 255)
)

def find_index( color: tuple ):
    for i, i1 in enumerate(indices):
        if color == i1:
            return i
    print('ERROR:', color)

def packdim(a: int, b: int):
    return ((a & 0xF) << 4 | (b & 0xF)).to_bytes(1, 'little')

# Assuming that each value is from 0 to 3
def pack4(pix4: list):
    return (pix4[3] << 6 | pix4[2] << 4 | pix4[1] << 2 | pix4[0]).to_bytes(1, 'little')

def pack_sprite(x, y, w, h):
    data = b''
    p4 = []
    for j in range(h):
        for i in range(w):
            p4.append(find_index(pix[x+i, y+j]))
            if len(p4) == 4:
                data += pack4(p4)
                p4 = []

    return data

# SPRITES FILE
# u8 for sprite dimensions (X 0000 Y 0000)
# Series of 2bit indicies wrapped by dimensions

tex = Image.open('textures.png')

pix = tex.load()
x = 0
y = 0

data = b''

for w, h, l in sprites:
    data += packdim(w, h) + l.to_bytes(1, 'little')
    for s in range(l):
        data += pack_sprite(x, y, w, h)
        x += w
    x = 0
    y += h

with open('tex.bin', 'wb') as f:
    f.write(data)