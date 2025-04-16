# Embedded Sensor Simulation Framework (Learning Project)
![Build With CMake](https://img.shields.io/badge/build%20system-CMake-blue.svg)
![Tested with GoogleTest](https://img.shields.io/badge/tested-GoogleTest-green.svg)
[![CI](https://github.com/MrudulaSatya/sensor-sim-framework/actions/workflows/ci.yml/badge.svg)](https://github.com/MrudulaSatya/sensor-sim-framework/actions)


This is a modular C++ firmware simulation project created to learn and practice:
- CMake (build system)
- GoogleTest and GoogleMock (unit testing and mocking)
- Interface-based design and dependency injection
- Docker (containerized build/test)
- GitHub Actions (Continuous Integration (CI))

## Purpose

There are 3 primary goals of this project:
- To simulate sensor interactions in an embedded-like environment and test them using mocks, fakes, and stubs. 
- Automate builds and tests with a Continuous Integration (CI) pipeline using GitHub Actions.  
- Containerize the environment using Docker to ensure reproducibility and portability.

## Structure

- `include/`: Interface headers and class declarations
- `src/`: Source files (sensor logic, manager)
- `test/`: Unit tests using GoogleTest and GoogleMock
- `main.cpp`: Optional app entry point for local simulation
- `Dockerfile`: File that helps docker create the image of our project and run the resulting container
- `.github/workflows/ci.yml`: YAML file that GitHub Actions runs to build and test the project whenever it is pushed or pulled. 

## Build & Run (local system)

```bash
mkdir build && cd build
cmake ..
make
ctest
```

## Run with Docker (local system)

Run these from root directory of project.

```bash
# Build Docker image
docker build -t sensor-sim-img .
# Create container, attach output logs to container and run the container which runs the tests.
docker run --rm sensor-sim-img 
```

## Note

This is a self-initiated learning project by Mrudula Y to explore software testing, build systems, CI/CD, Docker, and modular C++ design for embedded-style development.
It is not used in production systems.

## License

This project is licensed under the MIT License – see the [LICENSE](./LICENSE) file for details.

