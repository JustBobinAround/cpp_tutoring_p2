gpa:
	mkdir -p target
	g++ ./gpa.cpp -o target/gpa.out
	./target/gpa.out

date:
	mkdir -p target
	g++ ./date.cpp -o target/date.out
	./target/date.out

heap:
	mkdir -p target
	g++ ./heap.cpp -o target/heap.out
	./target/heap.out


resize_array:
	mkdir -p target
	g++ ./resize_array.cpp -o target/resize_array.out
	./target/resize_array.out

red:
	mkdir -p target
	g++ ./red.cpp -o target/red.out
	./target/red.out

unit_test:
	mkdir -p target
	g++ ./unit_test.cpp -o target/unit_test.out
	./target/unit_test.out

person_class:
	mkdir -p target
	g++ ./person_class.cpp -o target/person_class.out
	./target/person_class.out
