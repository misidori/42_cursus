<h1>🇮🇹 Italian</h1>

Il progetto ```pipex``` prevede la comprensione delle redirezioni shell e dei pipe, gestendoli in C. Il programma ```pipex``` prende un file di input, esegue un comando su di esso, invia il risultato a un altro comando che poi scrive il suo risultato su un file di output.

<h3>METODO 👨‍🎓</h3>

Il mio progetto pipex utilizza due processi che comunicano attraverso la funzione ```pipe()```.
<br></br>
Il ```child process``` ha il compito di leggere le informazioni del file in ingresso, eseguire il comando e comunicarne il risultato all'ingresso della pipe.
Il ```parent process``` ha il compito di leggere dall'uscita della pipe il risultato del primo comando, di lavorarlo eseguendo il secondo comando e di stamparlo nel file outfile.

<h1>🇬🇧 English</h1>

The project ```pipex``` involves understanding shell redirections and pipes, by handling them in C1. The ```pipex``` program takes an input file, performs a command on it, pipes the result to another command which then writes its result to an output file.

<h3>METHOD 👨‍🎓</h3>

My ```pipex``` project uses two processes that communicate through the pipe() function.
<br></br>
The ```child process``` is responsible for reading the information from the input file, executing the command, and communicating the result to the pipe’s input.
The ```parent process``` is responsible for reading the result of the first command from the pipe’s output, processing it by executing the second command, and printing it to the outfile.
