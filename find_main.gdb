set breakpoint pending on
tbreak __libc_start_main 
r
set main_addr=$rdi
break *$main_addr
c
x/10i $rip
set breakpoint pending off
