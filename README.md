<div align="center">

# VEHICLE TRAFFIC SIMULATOR

### A C++ Object-Oriented Programming Project

A simple traffic simulation project built using C++ and Object-Oriented Programming concepts.

---

</div>

## About the Project

The **Vehicle Traffic Simulator** is a C++ project that simulates vehicle movement and traffic management at an intersection. The project uses classes and objects to represent vehicles, traffic signals, intersections, and the overall simulation.

The main aim of this project is to apply the concepts of Object-Oriented Programming in a practical implementation rather than just using separate functions.

## Features

| Feature | Description |
|:--|:--|
| Vehicle Management | Represents vehicles using a dedicated class. |
| Traffic Signals | Handles traffic signal information and behaviour. |
| Intersection Management | Combines traffic signals and manages the intersection. |
| Traffic Simulation | Coordinates the different components of the simulation. |
| Traffic Reports | Provides functionality for working with simulation reports. |
| Operator Overloading | Uses overloaded operators for specific class operations. |

## Project Structure

The project is organised into header files, implementation files, and a test driver.

| File | Purpose |
|:--|:--|
| `Vehicle.h` | Contains the declaration of the `Vehicle` class. |
| `Vehicle.cpp` | Contains the implementation of `Vehicle` member functions. |
| `TrafficSignal.h` | Contains the declaration of the `TrafficSignal` class. |
| `TrafficSignal.cpp` | Implements the traffic signal functionality. |
| `Intersection.h` | Contains the declaration of the `Intersection` class. |
| `Intersection.cpp` | Implements the intersection functionality. |
| `TrafficSimulator.h` | Contains the declaration of the `TrafficSimulator` class. |
| `TrafficSimulator.cpp` | Implements the main simulation functionality. |
| `TrafficReport.h` | Contains the declaration of the `TrafficReport` class. |
| `TrafficReport.cpp` | Implements the traffic report functionality. |
| `test_drive.cpp` | Contains the main function used to test the project. |

---

## Object-Oriented Programming Concepts Used

### 1. Classes and Objects

The project is divided into classes such as `Vehicle`, `TrafficSignal`, `Intersection`, `TrafficSimulator`, and `TrafficReport`.

Each class represents a specific component of the simulation. Objects of these classes are used to work with the corresponding components.

### 2. Encapsulation

Encapsulation is used to group data and the functions that operate on that data within a class.

For example, the `Vehicle` class contains information related to a vehicle along with the member functions used to work with it. This keeps the vehicle-related implementation organised within one class.

The same approach is followed for the other classes.

### 3. Abstraction

Abstraction is achieved by separating the class declarations from their implementations.

The `.h` files define the class interfaces, while the corresponding `.cpp` files contain the implementations of their member functions.

This allows the classes to be used without requiring the calling code to know every implementation detail.

### 4. Constructors and Destructors

Constructors are used to initialise objects when they are created.

The project uses constructors to initialise class objects with the required data. Destructors can be used to perform cleanup when objects are destroyed.

These functions help manage the lifecycle of objects.

### 5. Composition

Composition is used to represent relationships between objects that work together.

In this project:

- The `TrafficSimulator` contains an `Intersection` object.
- The `Intersection` contains a `TrafficSignal` object.

This allows the simulation to be organised into smaller components, with each class handling its own responsibility.

### 6. Static Data Members and Member Functions

Static members are used for data or functionality shared across objects of a class.

The `Vehicle` class uses `nextId` to generate vehicle IDs and `totalCreated` to track the number of vehicles created. The static member function `getTotalCreated()` provides access to the total count.

Since these members belong to the class rather than an individual object, they can maintain information shared across vehicle objects.

### 7. Friend Functions

Friend functions are used when a non-member function needs access to a class's private or protected members.

The project uses friend functions for operations such as outputting vehicle information. This allows the output operator to access the required vehicle data.

### 8. Operator Overloading

Operator overloading allows existing C++ operators to work with user-defined classes.

The project uses operator overloading in the following ways:

| Operator | Class | Purpose |
|:--|:--|:--|
| `==` | `Vehicle` | Compares vehicle objects. |
| `<<` | `Vehicle` | Outputs vehicle information. |
| `+` | `TrafficReport` | Combines traffic reports. |
| `<<` | `TrafficReport` | Outputs traffic report information. |
| `()` | `TrafficSimulator` | Allows the simulator object to be called using function-call syntax. |

These overloaded operators make the code easier to use and demonstrate how operators can be adapted for user-defined types.

---

## How It Works

The project is divided into multiple classes, with each class responsible for a particular part of the simulation.

1. The `Vehicle` class represents vehicles and manages vehicle-related information.
2. The `TrafficSignal` class represents the traffic signal.
3. The `Intersection` class combines the relevant intersection components.
4. The `TrafficSimulator` class coordinates the simulation.
5. The `TrafficReport` class provides functionality related to traffic reports.
6. The `test_drive.cpp` file creates objects and tests the implemented functionality.

This structure keeps the code modular and makes individual classes easier to understand and maintain.

---

## How to Compile and Run

### Prerequisites

- A C++ compiler such as `g++`
- A terminal or command-line environment

### Step 1: Clone the Repository

```bash
git clone https://github.com/mathivadhanis505/vehicle-traffic-simulator.git
```

### Step 2: Navigate to the Project Directory

```bash
cd vehicle-traffic-simulator
```

### Step 3: Compile the Program

```bash
g++ -std=c++11 Vehicle.cpp TrafficSignal.cpp Intersection.cpp TrafficSimulator.cpp TrafficReport.cpp test_drive.cpp -o traffic_simulator
```

### Step 4: Run the Program

```bash
./traffic_simulator
```

---

## Output Screenshots

Add screenshots of the program output below. These screenshots can show the simulation running and the different functionalities being tested.

### Program Execution

<!-- Add screenshot here -->

### Vehicle and Traffic Signal Output

<!-- Add screenshot here -->

### Traffic Report Output

<!-- Add screenshot here -->

---

## Testing

The project can be tested by running the `test_drive.cpp` file.

The test driver can be used to verify the behaviour of the classes, object creation, operator overloading, and the interaction between the simulation components.

The output should be checked to ensure that the implemented functions behave as expected.

---

## Possible Improvements

Some improvements that could be considered in future versions include:

- Adding a graphical interface to visualise traffic movement.
- Simulating multiple intersections.
- Adding more vehicle types and traffic conditions.
- Implementing more detailed traffic statistics.
- Improving the simulation with additional traffic management rules.

---

<div align="center">

**Vehicle Traffic Simulator**  
*C++ | Object-Oriented Programming*

</div>