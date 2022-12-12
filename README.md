# MyTimer
Small C++ class, that helps to measure time between different points in your code

Just use it like:

> MyTimer timer;
> // Do some stuff
> std::cout << timer.fromStart() << " seconds from timer started\n";
> // Do even more stuff
> std::cout << timer.fromLast() << " secons since last measurement\n";
> std::cout << timer.fromStart() << " complete time since the measurement beginning\n";
