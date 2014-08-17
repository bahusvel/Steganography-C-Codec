import codec
import timeit
from random import randint

def byteencode(r, g, b, a, byte):
    byte = ord(byte)
    return (r & 248) ^ (byte & 224) >> 5, (g & 248) ^ (byte & 28) >> 2, (b & 248) ^ (byte & 3) << 1, a

def bytedecode(r, g, b):
    return chr((((r & 7) << 5) ^ ((g & 7) << 2)) ^ ((b & 6) >> 1))

def parity(byte):
    byte = ord(byte)
    c = 0
    while byte:
        c ^= byte & 1
        byte >>= 1
    return c
print(codec.decodebyte(122,125,122))

print(timeit.timeit('decodebyte(122,125,122)', setup='from codec import decodebyte', number=2048*2048))
print(timeit.timeit('bytedecode(122,125,122)', setup='from __main__ import bytedecode', number=2048*2048))

#print(timeit.timeit('parity("U")', setup='from codec import parity', number=2048*2048))
#print(timeit.timeit('parity("U")', setup='from __main__ import parity', number=2048*2048))
