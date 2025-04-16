FROM ubuntu:22.04

# Install required tools
RUN apt-get update && \
    apt-get install -y cmake g++ git

# Set the working directory
WORKDIR /app

# Copy everything from your project folder into the container
COPY . .

# Configure and build using CMake
RUN cmake -S . -B build && \
    cmake --build build

# Run tests using CTest
CMD ["ctest", "--test-dir", "build", "--output-on-failure"]

