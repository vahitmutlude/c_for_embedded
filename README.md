# C for Industrial Automation

Hands-on C programming with industrial automation in mind. PLC-adjacent firmware patterns, fieldbus protocols, control logic, and process state machines.

## About this repo

I'm an Electrical & Information Engineering student at HSD Düsseldorf,
working toward a Werkstudent position in industrial automation
(Automatisierungstechnik) in NRW.

C isn't the dominant language in PLC programming and Structured Text,
Ladder, and vendor IDEs like TIA Portal own that space. But C is
the language of the layer right beneath: PLC firmware itself,
industrial gateways, IIoT edge devices, and the libraries that
implement Modbus, OPC UA, and EtherCAT. Working in C builds the
mindset that makes the rest of the stack readable.

This repo is a focused, restrained learning log and small daily steps,
real industrial framing, no padded projects. The goal isn't C
mastery; it's enough fluency to support coursework, read industrial
codebases, and demonstrate consistent self-directed learning.

## Structure

| Folder | Topic | Status |
|---|---|---|
| `01-basics/` | Variables, types, operators | done |
| `02-control-flow/` | Loops, conditionals | done |
| `03-functions/` | Functions, scope, headers | done |
| `04-pointers-and-arrays/` | Arrays, pointers, strings | done |
| `05-structs-and-memory/` | Composite types, memory model | in progress |
| `06-bitwise-and-flags/` | Bit manipulation, status registers | planned |
| `07-applied-automation-c/` | Modular code, state logic, error handling | planned |

## Tools

GCC (MinGW via MSYS2), VSCode, Git CLI.

