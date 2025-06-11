# Example for using GenAI Interfaces

A dummy backend to demonstrate the utilization of the GenAI interfaces

## Instructions for building the example

```
git clone https://github.com/ynimmaga/dummy_interface_example.git
cd dummy_interface_example
cmake -B build -S . -DCMAKE_PREFIX_PATH=<path_for_genai_interfaces_installation>/genai_interfaces_install
cmake --build build

```

This will build the dummy_backend executable in build/ folder

Run the executable using ```./dummy_backend```
