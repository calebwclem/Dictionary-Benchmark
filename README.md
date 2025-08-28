# Student Information
- Student Name: Caleb Clements
- Student ID: 008878539
- Repository Link: https://github.com/calebwclem/Dictionary-Benchmark

# Collaboration and Sources
I struggled for hours and hours with a Seg Fault in my SortedVec insert method. Finally
I had ChatGPT help me debug it, and after a while, came up with an entirely new attempt.
My final, chatGPT assisted solution is included as well as my original bugged code, commented out.

All other code was entirely written by me with 0 input from anywhere else.

# Implementation Details

I hate my Sorted LL implementation, it very much is a brute force approach. That being said, the SortedVec approach is
relatively elegant, as it leverages Binary Search since it is a sorted list with access anywhere in the list.

# Testing and Status

So far everything works on my machine, unfortunately the 500k data sets take so long to test that I simply have not been able to test it on Blue. I hope it compiles and works but when each tests takes well
over 30 minutes locally, it is a little tough. Not sure how much leniency is going into this lab
given it was EXPECTED to be this slow.

*Note: I wrote this whole thing during the time it took to test JUST my sorted
Vector. It worked, however this test alone took over 15 minutes.*





Please note I was unsure what you wanted us to do with the text already present
so I left it.


# Dictionary Benchmark

## Structure

- `src/`: Contains `Dictionary` interface and `UnsortedVectorDict` implementation.
- `.github/workflows/test.yml`: GitHub Actions CI setup.

## How It Works

1. UnsortedVectorDict.cpp is complete and the main function contains the necessary code to test it. 
2. The output provides the average run-time for the **insert** and **lookup** function. However, only the average run-time values for the unsorted vector variation is meaningful as the other variations have not been implemented yet.    
3. GitHub Actions runs 

## Run Locally

```bash
mkdir build && cd build
cmake ..
make
ctest --output-on-failure
```
