gcc -c pbPlots.c -std=c99 -O3 -march=native
gcc -c supportLib.c -std=c99 -O3 -march=native
gcc -c graph.c -std=c99 -O3 -march=native

gcc graph.o pbPlots.o supportLib.o -lm -o i.out