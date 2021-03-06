#include "heap_spec.h"
#include <assert.h>

int main()
{
    // These constants should match up with the unit test in tests/wasm.rs
    assert(lucet_heap_spec.reserved_size == 4 * 1024 * 1024);
    assert(lucet_heap_spec.guard_size == 4 * 1024 * 1024);
    assert(lucet_heap_spec.initial_size == 5 * 64 * 1024);
    assert(lucet_heap_spec.max_size == 0);
    assert(lucet_heap_spec.max_size_valid == 0);

    return 0;
}
