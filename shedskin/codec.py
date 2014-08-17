def byteencode(r, g, b, a, byte):
    return (r & 248) ^ (byte & 224) >> 5, (g & 248) ^ (byte & 28) >> 2, 
(b & 248) ^ (byte & 3) << 1, a

def bytedecode(r, g, b):
    return chr((((r & 7) << 5) ^ ((g & 7) << 2)) ^ ((b & 6) >> 1))

if __name__ == '__main__':
	i = 1
	byteencode(i,i,i,i,i)
	bytedecode(i,i,i)
