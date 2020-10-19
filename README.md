This is a simple buffer overflow example to serve as an introduction to binary exploitation.

Try the password: `MY NAME IS CHAD SPENSKY MY NAME IS`

This was only tested on OSX.

Build with
```bash
gcc hacking.c -o hacking -fno-stack-protector -Wl,-no_pie
```

