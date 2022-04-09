SHELL := /bin/bash

runHW1:
	cmake -S ./cpp_basic/hw-1 -B ./cpp_basic/hw-1/build && \
	cmake --build ./cpp_basic/hw-1/build && \
	./cpp_basic/hw-1/build/hello_world
