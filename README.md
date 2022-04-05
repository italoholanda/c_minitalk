# MINITALK

```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MINITALK                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
```

## About
This project consists of a way to implement communications between two processes
using unix signals.

We can send the SIGUSR1 and SIGUSR2 signals	as if they were
binary sequences and in this way send a char (8 bits sequence). So, the first
thing to do is to is loop through a string and, for every char, make the bin
conversion.

Like that:

```
CHAR =      10101001
----------------------------
CHAR >> 7 = 00000001 & 1 = 1
CHAR >> 6 = 00000010 & 1 = 0
CHAR >> 5 = 00000101 & 1 = 1
CHAR >> 4 = 00001010 & 1 = 0
CHAR >> 3 = 00010101 & 1 = 1
CHAR >> 2 = 00101010 & 1 = 0
CHAR >> 1 = 01010100 & 1 = 0
CHAR >> 0 = 10101001 & 1 = 1
----------------------------
RESULTS:
1, 0, 1, 0, 1, 0, 0, 1
----------------------------
```
Or

*SIGUSR2, SIGUSR1, SIGUSR2, SIGUSR1, SIGUSR2, SIGUSR1, SIGUSR1, SIGUSR2*

The client will send the signals to the server and the server will do the
(de)conversion every 8 signals and then will print it in the screen.

<img src="https://user-images.githubusercontent.com/76733221/161437405-5c2cfcc3-8ceb-4dda-816e-9100ae2dfcc4.png" alt="Screenshot" />

### Usage:
- use `$ make` to compile all source files.
- use `$ ./server` to start server and get your PID.
- use `$ ./client <SERVER PID> <STRING>` to send a string to the server.

