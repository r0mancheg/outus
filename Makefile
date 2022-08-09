SHELL := /bin/bash

runHW1:
	cmake -S ./cpp_basic/hw-1 -B ./cpp_basic/hw-1/build && \
	cmake --build ./cpp_basic/hw-1/build && \
	./cpp_basic/hw-1/build/hello_world

lect3build:
	cmake -S ./cpp_basic/lect_3 -B ./cpp_basic/lect_3/build && \
	cmake --build ./cpp_basic/lect_3/build

runHW3:
	cmake -S ./cpp_basic/hw-3 -B ./cpp_basic/hw-3/build && \
	cmake --build ./cpp_basic/hw-3/build && \
	./cpp_basic/hw-3/build/game

runHW4:
	cmake -S ./cpp_basic/hw-4 -B ./cpp_basic/hw-4/build && \
	cmake --build ./cpp_basic/hw-4/build

runHW5:
	cmake -S ./cpp_basic/hw-5 -B ./cpp_basic/hw-5/build && \
	cmake --build ./cpp_basic/hw-5/build

runHW6:
	cmake -S ./cpp_basic/hw-6 -B ./cpp_basic/hw-6/build && \
	cmake --build ./cpp_basic/hw-6/build && \
	./cpp_basic/hw-6/build/container