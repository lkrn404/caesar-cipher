# Caesar Cipher

**WARNING:** this tool is for educational use only, and should **NOT** be used for securing sensitive information. It is **NOT** comparable to a modern encryption algorithm.

This program is a simple implementation of the [Caesar Cipher](https://en.wikipedia.org/wiki/Caesar_cipher) encryption algorithm in C++ for Linux, MacOS, and Windows via WSL. **Pipes** are used to send data to and from the program via the commandline. It includes the ability to encrypt and decrypt with either a default shift of 34 or a specified value. 

Requirements:
- A UNIX or UNIX-like environment
- GCC or Clang

### How-to Install:

1. Clone the repo:

```bash
git clone https://github.com/lkrn404/caesar-cipher.git
```

2. Change into the directory and compile using 'make'
```bash
cd caesar-cipher && make
```

3. To run the example program, run 'make test'
```bash
make test
```

4. To install it onto the system (/usr/local/bin/ccipher by default), run:
```bash
sudo make install
```