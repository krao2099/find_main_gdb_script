Sets a break point on main in stripped and unstripped x86 linux binaries

## Usage
you can run `gdb ./path_to_your_binary -x find_main.gdb`

or add `source /path_to_script/find_main.gdb` to the beginning of your gdb script

or run line by line in a gdb session (make sure the binary is loaded in)

## Other Arch
You probably just need to change the `break *$rdi` to whatever register represents the first function parameter in your arch
