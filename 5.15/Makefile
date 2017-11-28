all : quicksort3-c++ quicksort3-c11 #quicksort2-c14
	./quicksort3-c++
	./quicksort3-c11
#	./quicksort2-c14

quicksort3-c++ : quicksort3.cpp
	g++ -o quicksort3-c++ quicksort3.cpp
quicksort3-c11 : quicksort3.cpp
	g++ -std=c++11 -o quicksort3-c11 quicksort3.cpp
#quicksort2-c14 : quicksort2.cpp
#	g++ -std=c++14 -o quicksort2-c14 quicksort2.cpp
clean :
	rm quicksort3-c++ quicksort3-c11 #quicksort2-c14



#quicksort2-c++ : quicksort2.cpp
#	g++ -o quicksort3-c++ quicksort2.cpp
#quick_sort-c11 : quick_sort.cpp
#	g++ -std=c++11 -o quick_sort-c11 quick_sort.cpp
#quicksort2-c14 : quicksort2.cpp
#	g++ -std=c++14 -o quicksort2-c14 quicksort2.cpp
#clean :
#	rm quicksort3-c++ quicksort2-c11 #quicksort2-c14
#clean :
#	rm quick_sort-c11
