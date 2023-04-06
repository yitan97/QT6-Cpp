# Search information about:

## Smart Pointers
>Note: #include <memory.h>

### Unique Pointers
```cpp
std::unique_ptr<type> uq_ptr {new <type>};
```
>Example: `std::unique_ptr<int> a {new int };`
### Shared Pointers
```cpp
std::shared_ptr<type> shrd_ptr {new <type>};
```
>Example: `std::shared_ptr<House> shrd_ptr_1 {new House(nullptr,"Fourth")};`

## Lambdas Functions