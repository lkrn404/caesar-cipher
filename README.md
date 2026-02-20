# Caesar Cipher

**WARNING:** this tool is for educational use only, and should **NOT** be used for securing sensitive information. It is **NOT** comparable to a modern encryption algorithm.

This program is a simple implementation of the [Caesar Cipher](https://en.wikipedia.org/wiki/Caesar_cipher) encryption algorithm in C++ for Linux, MacOS, and Windows via WSL. **Pipes** are used to send data to and from the program via the commandline. It includes the ability to encrypt and decrypt (-d/--decrypt) with either a default shift of 34 or a specified value (-s/-shift n). 

Requirements:
- A UNIX or UNIX-like environment
- GCC or Clang

### How-to Install:

1. Clone the repo:
2. Change into the directory and compile using 'make'
3. To run the example program, run 'make test'

```bash
git clone https://github.com/lkrn404/caesar-cipher.git
cd caesar-cipher && make
make test
```

4. To install it onto the system (/usr/local/bin/ccipher by default), run:
```bash
sudo make install
```


### How-to Use:

This program works by using unix-style shell pipes to send the output of another command to it. Example:
```bash
# Encrypt 'Hello World' using the default shift of 34
echo "Hello World" | ./ccipher
# Decrypt the resulting 'Pmttw Ewztl' using the -d or --decrypt flag
echo "Pmttw Ewztl" | ./ccipher -d
```