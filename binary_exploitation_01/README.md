This is a simple buffer overflow example to serve as an introduction to binary exploitation.

Try the password: `MY NAME IS CHAD SPENSKY MY NAME IS`

This was tested on OSX and Ubuntu 22.04.

Build with
```bash
make
```
For bonus points, try to overwrite the return address on the 32 bit binary
```bash
gcc hacking.c -o hacking -fno-stack-protector -Wl,-no_pie -m32
```

