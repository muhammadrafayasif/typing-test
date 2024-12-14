# Typing Test
This is a console based application that calculates WPM (Words Per Minute) of a user, the program is built-in with ten paragraphs, the program may choose any random paragraph from among it.

![Typing Test](https://lh3.googleusercontent.com/pw/AP1GczMShsuBT5k1eEjOwSz5yOZfQ1nmZcL3uJrmF2bLt7pARFn66GpWNrdVxHHY7UctxfK-5Sp5kY4f4C14bXDLMLOcjbrB7L-BIRuQTvJ45F22u6OgNs7L7KfH9-XcmF8DasGVKCMae7AR-MtooiRIity_=w1092-h342-s-no?authuser=0)
# Functionality
The program uses **ASCII** codes to process color, this is how the program draws green to tell you pressed the right key, and red when you pressed the wrong key.
|ASCII| Color |
|--|--|
| \033[0;32m | Green |
| \033[0;31m | Red |
| \033[0m | Default |

The program used the **CONSOLE_SCREEN_BUFFER_INFO** from the **windows.h** library to calculate the total number of characters that can exist in a single line within a terminal.
> The ASCII code **\033[F** is used to go up a line

We divide the total words of the paragraph with the total lines calculated. Then, using this technique, we bring the cursor to the beginning of the paragraph. Where, we can signify whether a letter is typed correctly or not using color coding.

Furthermore, we use the **clock()** function from **time.h** library to calculate the number of seconds the user has been typing. This is essential for calculating the Words Per Minute for our program.

We subtract the variable we stored **clock()** in with **clock()** once more to get the time in seconds, then divide that number with 60 to get time in minutes which is utilized in the formula.

# Calculating WPM
The program calculates both Gross WPM and NET WPM.
* Gross WPM does not take into account errors, it shows the true speed of your typing regardless of whether it is accurate.

	Gross WPM is calculated by the formula:
$$\frac{Characters}{5 \times minutes} $$

* NET WPM takes into account errors, it reduces your WPM depending of the number of errors you make.

	NET WPM is calculated by the formula:
	$$GrossWPM-\frac{errors}{minutes}$$

# Dependencies
* Standard Input/Output **(stdio.h)**
* Console Input/Output **(conio.h)**
* Time Library **(time.h)**
* Windows Library **(windows.h)**
* Standard Library **(stdlib.h)**
