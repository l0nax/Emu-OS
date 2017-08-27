#define SYSCALL_EXIT 1
#define SYSCALL_WRITE 4

char hello[] = "Hello, World!\n";

void _start(void) {
        // sys_write(1, hello, sizeof(hello))
        asm("int $0x80" : : "a" (SYSCALL_WRITE), "b" (1), "c" (hello), "d"
                (sizeof(hello)));
        // sys_exit(0)
        asm("int $0x80" : : "a" (SYSCALL_EXIT), "b" (0));
}
// This is a Commit
// And now it's ME!!
// This is my 2. Comment
