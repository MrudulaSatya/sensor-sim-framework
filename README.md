# Embedded Sensor Simulation Framework (Learning Project)
![Build With CMake](https://img.shields.io/badge/build%20system-CMake-blue.svg)
![Tested with GoogleTest](https://img.shields.io/badge/tested-GoogleTest-green.svg)

This is a modular C++ firmware simulation project created to learn and practice:
- CMake (build system)
- GoogleTest and GoogleMock (unit testing and mocking)
- Interface-based design and dependency injection

## Purpose

The goal of this project is to simulate sensor interactions in an embedded-like environment and test them using mocks, fakes, and stubs.

## Structure

- `include/`: Interface headers and class declarations
- `src/`: Source files (sensor logic, manager)
- `test/`: Unit tests using GoogleTest and GoogleMock
- `main.cpp`: Optional app entry point for local simulation

## Build & Run

```bash
mkdir build && cd build
cmake ..
make
ctest
```
## Note

This is a self-initiated learning project created by Mrudula Y to explore software testing, build systems, and embedded-style modular design using C++. It is not used in production systems.

## License

This project is licensed under the MIT License – see the [LICENSE](./LICENSE) file for details.

