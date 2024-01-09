curdir := $(shell pwd)
curtime := $(shell date)
curfile ?= $(shell ls)
all:
	@echo $(curdir)
	@echo $(curtime)
	@echo $(curfile)

CFLAG := -c -Wall

#all: eachsort.o
#eachsort.o : main.o $(execsort) 
	#cc  main.o $(execsort) 

#main.o : main.c swap.c sortData.h
	#cc $(CFLAG) main.c swap.c

srcsort :=bulbSort.c insertSort.c selectSort.c shellSort.c mergeSort.c heapSort.c quickSort.c baseSort.c radixSort.c topoSort.c
	@echo "check variable srcsort if have values."
	@echo $(srcsort)

execsort :=bulbSort.o insertSort.o selectSort.o shellSort.o mergeSort.o qickSort.o heap_sort.o countSort.o baseSort.o  

bulbSort.o : bulbSort.c swap.c sortData.h
	cc $(CFLAG) bulbSort.c swap.c

insertSort.o : insertSort.c swap.c sortData.h
	cc $(CFLAG) insertSort.c swap.c

selectSort.o : selectSort.c swap.c sortData.h
	cc $(CFLAG) selectSort.c swap.c

shellSort.o : shellSort.c swap.c sortData.h
	cc $(CFLAG) shellSort.c swap.c

mergeSort.o : mergeSort.c swap.c sortData.h
	cc $(CFLAG) mergeSort.c swap.c

qickSort.o : qickSort.c swap.c sortData.h
	cc $(CFLAG) qickSort.c swap.c

heapSort.o : heapSort.c swap.c sortData.h
	cc $(CFLAG) heapSort.c swap.c

countSort.o : countSort.c swap.c sortData.h
	cc $(CFLAG) countSort.c swap.c

baseSort.o : baseSort.c swap.c sortData.h
	cc $(CFLAG) baseSort.c swap.c

.PHONY: clean
clean:
	rm @.o
