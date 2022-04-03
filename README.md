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
This project consists of a way to implement communications between two processes using unix signals. We can use *SIGUSR1* and *SIGUSR2* to send binary signals simulating bits to another process and then turn it into a char or string.

<img src="https://user-images.githubusercontent.com/76733221/161437405-5c2cfcc3-8ceb-4dda-816e-9100ae2dfcc4.png" alt="Screenshot" />

### Usage:
- use `$ make` to compile all source files.
- use `$ ./server` to start server and get your PID.
- use `$ ./client <SERVER PID> <STRING>` to send a string to the server.

