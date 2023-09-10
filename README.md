# Zen Engine
[![license](https://badgen.net/github/license/stradek/ZenEngine?color=blue)](https://github.com/Stradek/ZenEngine/blob/main/LICENSE)
[![commits](https://badgen.net/github/commits/stradek/ZenEngine?color=238636&icon=git)](https://github.com/Stradek/ZenEngine/commits/main)
[![last commit](https://badgen.net/github/last-commit/stradek/ZenEngine?color=238636&icon=github)](https://github.com/Stradek/ZenEngine/commits/main)
[![Build Status](https://badgen.net/github/checks/stradek/ZenEngine/main/build-windows)](https://github.com/stradek/ZenEngine/actions/workflows/build-windows.yml)

# Description
Zen Engine is my hobbyist long-term C++ game engine project, a testament to my passion for creating exceptional high-performance, real-time game engines. In this iteration, I'm focused on building a robust foundation for my future, more advanced iterations on this game engine.

All systems are subject to change in the future.

# Key Features
  - custom memory allocation management
  - decoupled game, editor, and engine projects and systems
  - custom, in-engine runtime performance measurement system
  - simple cmake setup
  - tracy integration
  - spdlog integration

# Project Objectives
  - (In Progress) Memory Management: Implement memory management with custom memory allocators: GeneralAllocator, SlabAllocator, PoolAllocator...
  - Multithreading: Develop a sophisticated multithreaded job system.
  - Game Genre: Create a 2D platformer game.
  - Core Game Mechanics: Implement jumping, running at constant speed, and collecting points.
  - Game Level Design: Design levels with straightforward platform layouts, combining horizontal and vertical segments. Emulate classic arcade gaming simplicity.

# Prerequisities
1. Visual Studio 2022
2. CMake (look for proper version in CMakeLists.txt)

# Configuration
1. $ git clone https://github.com/Stradek/ZenEngine.git
2. $ cd .\ZenEngine\
3. $ .\BuildSolution-VS2022.bat
4. $ .\OpenSolution-VS2022.bat
5. Build & Run **Game** project
6. Enjoy!

# Repositiory Directory Structure
* Binaries/ - compilation artifacts(libraries and symbolos) and executables
* Build/CMake-*/ - project build directory
* Development/ - Zen Engine and Game development related directory
* Development/External - external libraries
* Development/Internal - internal libraries and tools
* Development/Include - Zen Engine and Game headers code
* Development/Scripts - automation scripts supporting development process
* Development/Source - Zen Engine and Game source code

# License
MIT License

Copyright (c) 2023 Piotr Stradowski

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
