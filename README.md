# Caesar Cipher

**!!WARNING!!:** this tool is for educational use only, and should **NOT** be used for securing sensitive information. It is **NOT** comparable to a modern encryption algorithm. This tool may potentially provide a false sense of security for a user who believes it to be a more sophisiticated encryption algorithm.

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
echo "Pmttw Ewztl" | ./ccipher --decrypt
```

You can also specify a custom shift value using the -s or --shift flags:
```bash
echo "Hello World" | ./ccipher --shift 3
echo "Khoor Zruog" | ./ccipher -d -s 3
```

### Working with Files:

Because this program writes and reads stdin/stdout, you can also use it to encrypt and decrypt text files.

Create a file and send some text to it.
```bash
echo "Hello World, this is a text file." >> file.txt  
```

Get the contents of a text file and encrypt it:
```bash
cat file.txt | ./ccipher > encrypted_file.txt
```

Read the contents of an encrypted file:
```bash
cat encrypted_file.txt | ./ccipher -d
```