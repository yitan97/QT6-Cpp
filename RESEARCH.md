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


## QT connect

```cpp
/* String Notation */
connect(
        ui->pushButton,    // Source object
        SIGNAL(clicked()), // Signal from source object
		this,              // Receiver
		SLOT(changeText()) // The responder
		);
		
/* Functor Notation: Regular Slots */
connect(
        ui->pushButton,
		&QPushButton::clicked,
		this,
		&Widget::changeText
		);
		
/* Functor Notation: Lambdas */
connect(
        ui->pushButton,
		&QPushButton::clicked,
		[=](){ui->label->setText("Lambda");}
		);
```