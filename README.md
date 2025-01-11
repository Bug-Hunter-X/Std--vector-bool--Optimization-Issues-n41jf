# std::vector<bool> Optimization Issues

This repository demonstrates a common issue encountered when using `std::vector<bool>` in C++.  `std::vector<bool>` is often optimized to store data more compactly, but this optimization leads to unexpected behavior.  This example shows how this can cause problems with standard algorithms and affect performance.

## Bug Description

The bug is that using `std::vector<bool>` with standard algorithms often leads to suboptimal performance or unexpected results. The underlying implementation sacrifices random access for space efficiency which can lead to performance degradation.

## Solution

The solution is to use a different container that provides better performance and predictable behavior if you need random access and optimized algorithms performance. `std::vector<char>` or other suitable types can act as bitsets and have better performance characteristics. 