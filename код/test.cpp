// This code defines a function that can be used to perform various tasks
void myFunction() {
    // Example 1: Add two numbers
    int a = 5, b = 10;
    int result = a + b;
    std::cout << "Result of adding " << a << " and " << b << " is " << result << std::endl;

    // Example 2: Calculate the area of a rectangle
    int length = 10, width = 5;
    int area = length * width;
    std::cout << "Area of a rectangle with length " << length << " and width " << width << " is " << area << std::endl;

    // Example 3: Check if a number is prime
    int num = 17;
    bool isPrime = true;
    for (int i = 2; i <= std::sqrt(num); i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        std::cout << num << " is a prime number" << std::endl;
    } else {
        std::cout << num << " is not a prime number" << std::endl;
    }

    // Example 4: Calculate the Fibonacci sequence
    int n = 10;
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    std::cout << "Fibonacci sequence up to " << n << " is: ";
    for (int i = 0; i < n; i++) {
        std::cout << fib[i] << " ";
    }
    std::cout << std::endl;
}