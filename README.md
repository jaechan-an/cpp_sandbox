# C++ Teaching Environment

A Docker-based Ubuntu 24.04 environment for learning C++. Edit files on macOS with any editor, compile and run them inside the container.

## Setup

**Build the Docker image** (first time only, or after changing the Dockerfile):
```bash
docker compose build
```

## Usage

**Access the container bash shell:**
```bash
docker compose run --rm cpp-env bash
```

You'll land in `/projects`, which maps to the `projects/` folder on your Mac.

**Compile and run a C++ file:**
```bash
g++ hello.cpp -o hello && ./hello
```

**Compile and run a C file:**
```bash
gcc hello.c -o hello && ./hello
```

**Exit the container:**
```bash
exit
```

## Verification

Check that the compiler is working:
```bash
docker compose run --rm cpp-env g++ --version
```

## Workflow

1. Create or edit `.cpp` files in the `projects/` folder using any editor on macOS
2. Run `docker compose run --rm cpp-env` to open a shell in the container
3. Compile with `g++` and run the output — changes to `projects/` are reflected immediately
