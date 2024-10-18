fn main() {
    let mut number = 1;
    let mut count = 0;

    while number < 1000 {
        number += number % 10;
        if number > 99 && number < 1000 {
            count += 1;
        }
    }

    println!("{}", count);
}
