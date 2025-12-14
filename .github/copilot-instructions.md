# Copilot / AI Agent Instructions

This repository is a collection of self-contained C++ exercises organized by module and exercise: `modNN/exMM`. Each exercise is an independent mini-project with its own `Makefile`, `main.cpp` and related `*.cpp` / `*.hpp` source files.

Keep instructions short and actionable. Focus on files present in each exercise folder and follow existing project conventions.

**Big Picture**
- Structure: Each exercise lives in `modXX/exYY/` and is standalone. Example: `mod05/ex02/` contains `Bureaucrat.cpp`, `Form.cpp`, `AForm.cpp`, `ShrubberyCreationForm.cpp`, `Bureaucrat.hpp`, etc.
- Build: build is per-exercise via the included `Makefile` (no top-level build orchestration). Expect `NAME`, `SRCS`, `OBJ`, `CFLAGS`, `CC` variables in those `Makefile`s.

**Build & Run Workflow**
- Standard build: run `make` inside the exercise directory or from repo root with `make -C mod05/ex02`.
- Common flags: `CFLAGS = -Wall -Wextra -Werror -std=c++98`. Maintain C++98 compatibility unless a Makefile explicitly changes it.
- Debugging: add `-g` to `CFLAGS` or temporarily override: `make CFLAGS="-Wall -Wextra -Werror -std=c++98 -g"`.
- When adding new `.cpp` files, update the exercise `Makefile` `SRCS` so compilation and `OBJ` creation succeed.

**Project Conventions & Patterns (use these exactly)**
- Language standard: C++98 across exercises (see `mod05/ex02/Makefile`).
- Headers: use `.hpp` for new classes; some older exercises use `.h` (e.g. `Fixed.h`) — follow existing file extension in that exercise.
- Include guards: header files use `#ifndef`/`#define` guards (see `Bureaucrat.hpp`). Prefer matching the existing style rather than converting to `#pragma once`.
- Rule of Three: classes commonly implement copy constructor, assignment operator and destructor — follow existing signatures and style (see `ShrubberyCreationForm.cpp` and `Bureaucrat.hpp`).
- Forward declarations are used for circular dependencies (example: `class Form;` in `Bureaucrat.hpp`). Use them where appropriate instead of including headers to break cycles.
- Error handling: exercises often declare nested exception classes (e.g., `GradeTooHighException`) that inherit `std::exception` and implement `what()`.
- Operator overloads: `operator<<` is defined for printing objects (see `Bureaucrat` stream overload). Maintain that pattern when adding printable classes.

**Code Edits & Tests**
- Small fixes: ensure any compile errors are fixed in the exercise folder only; run `make re` after edits to fully rebuild.
- Don't change `CFLAGS` globally unless necessary; prefer local edits per `Makefile` in the exercise being worked on.
- There are no centralized unit tests — run the exercise binary (e.g., `./Bureaucrat`) after `make` to validate behavior.

**Files to Inspect for Patterns**
- `mod05/ex02/Makefile` — canonical `CFLAGS` and build style.
- `mod05/ex02/Bureaucrat.hpp` — header guards, nested exceptions, forward declaration of `Form`, `operator<<` pattern.
- `mod05/ex02/ShrubberyCreationForm.cpp` — example class methods and copy/assignment patterns (note: some files may be incomplete; verify compilation).

**When Adding New Code**
- Place source and header files in the corresponding `modXX/exYY/` directory.
- Update `SRCS` in that directory's `Makefile` and run `make` to confirm build.
- Follow existing naming and style: class names, `*.hpp` headers, nested exception classes where applicable.

**Integration & External Dependencies**
- This repo uses only the C++ standard library. There are no external package dependencies or linked libraries.

If any section above is unclear or you want more examples (e.g., step-by-step for adding `ShrubberyCreationForm::execute()` implementation), tell me which exercise and I will expand with concrete code edits and commands.
