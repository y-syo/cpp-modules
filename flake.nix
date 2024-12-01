{
  description = "a development environment for the c++ modules";

  inputs = {
    nixpkgs = {
      url = "nixpkgs/nixos-24.11";
      flake = false;
	};

    pogit = {
      url = "github:y-syo/pogit";
      inputs.nixpkgs.follows = "nixpkgs";
    };
  };

  outputs = inputs@{ nixpkgs, ... }:
    let
      supportedSystems = [ "x86_64-linux" "aarch64-linux" "x86_64-darwin" "aarch64-darwin" ];
      forEachSupportedSystem = f: nixpkgs.lib.genAttrs supportedSystems (system: f {
        pkgs = import nixpkgs { inherit system; };
      });
    in
	{
    devShells = forEachSupportedSystem ({ pkgs }: {
      default = pkgs.mkShell {
        packages = with pkgs; [
          clang gcc norminette valgrind gdb gnumake cmake clang-tools git
		  inputs.pogit.packages.${pkgs.system}.default
        ];
        hardeningDisable = [ "all" ];
        shellHook = ''
          export CC=gcc
          export CXX=g++
          echo -e "\x1B[0;33mentering c++ development environment...\x1B[0m"
        '';
      };
    });
  };
}
