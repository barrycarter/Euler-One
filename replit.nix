{ pkgs }: {
	deps = [
		pkgs.libgccjit
  pkgs.gnat
  pkgs.libgccjit
  pkgs.more Makefile
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}