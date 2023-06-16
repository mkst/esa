import sys
import struct

CHUNK_SIZE = 32

# 00000000: 5c63 6f6c 6c64 6174 612e 7363 6400 0000  \colldata.scd...
# 00000010: 0000 0000 0000 0000 50c1 0100 0000 0000  ........P.......
# 00000020: 5c6c 6576 656c 3031 2e63 616d 0000 0000  \level01.cam....
# 00000030: 0000 0000 50c1 0100 1c01 0000 0000 0000  ....P...........
# 00000040: 5c6c 6576 656c 3031 2e63 616e 0000 0000  \level01.can....
# 00000050: 0000 0000 6cc2 0100 6400 0000 0000 0000  ....l...d.......

def trim_string(inbytes):
    return ''.join([chr(b) if b else '' for b in inbytes])

def main(filename="sv.wad", outdir="wad"):
    with open(filename, 'rb') as f:
        data = f.read()
    if len(data) < 32:
        sys.exit(1)
    # consume 32 bytes at a time
    i = 0
    files = []
    bytes_read = 0
    while True:
        chunk = data[i*CHUNK_SIZE:i*CHUNK_SIZE+CHUNK_SIZE]
        if chunk[0] == 0:
            # reached the end
            break
        filename = trim_string(chunk[:16]).replace('\\', '')
        offset = struct.unpack('<I', chunk[20:24])[0]
        length = struct.unpack('<I', chunk[24:28])[0]
        file = { 'filename': filename, 'offset': offset, 'length': length }
        files.append(file)
        bytes_read += CHUNK_SIZE
        i += 1

    print(f'Found {i} files.')

    for file in files:
        filename = file['filename']
        offset = file['offset']
        length = file['length']
        with open(f'{outdir}/{filename}', 'wb') as o:
            to_dump = data[offset:offset+length]
            bytes_read += length
            o.write(to_dump)

    print(f'Wrote {i} files, consumed total of {bytes_read:,} of {len(data):,} bytes')

if __name__ == '__main__':
    main()
