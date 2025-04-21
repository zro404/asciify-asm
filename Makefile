all: create_build_dir assemble

assemble:
	fasm src/main.asm build/asciify-asm
	chmod +x build/asciify-asm

create_build_dir:
	mkdir -p build

clean:
	rm -r build/*
