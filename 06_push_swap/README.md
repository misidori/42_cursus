<h1>🇮🇹 Italian</h1>

Il progetto ```push_swap``` prevede l’ordinamento dei dati su uno stack, con un set limitato di istruzioni, utilizzando il minor numero possibile di azioni1. Il gioco è composto da 2 stack denominati ```a``` e ```b```. L’obiettivo è ordinare in ordine crescente i numeri nello stack ```a```. Per fare ciò, hai a disposizione le seguenti operazioni: ```sa```, ```sb```, ```ss```, ```pa```, ```pb```, ```ra```, ```rb```, ```rr```, ```rra```, ```rrb```, ```rrr```.

<h3>METODO 👨‍🎓</h3>
Il mio progetto push_swap si basa sul motto latino "Divide et impera".
<p>L'obiettivo é scomporre la lista in blocchi ed ordinarli progressivamente, cosí da avere degli spazi di "navigazione" (quando vado a cercare i numeri) piú piccoli, facendo meno mosse.</p>

<h3>ESECUZIONE 🛠️
</h3><p>Una volta riempiti i nodi della mia lista con i valori inseriti da tastiera, mi creo una terza lista "stack_copy" dove vado a copiare tutti i valori disordinati in A e li ordino velocemente senza seguire le mosse date dal progetto.</p>
<p>Cosí facendo mi creo una lista ordinata dove andare a cercare i numeri chiave (che da ora in poi chiameró "pivot"), intorno ai quali creare questi miei blocchi di numeri (io scelto la divisione in 12 blocchi - dopo aver fatto diversi tentativi - ma possono cambiare di codice in codice).</p>
<p>I pivot sono i valori che si trovano in corrispondenza del limite alto di ciascun blocco. Quindi se ad esempio se la mia lista disordinata A fosse di 120 elementi, i miei pivot saranno i valori delle posizioni 10, 20, 30, 40, ..., 110 della mia lista "stack_copy" ordinata. In questo modo andró a cercare i numeri piú piccoli del primo pivot (10) e li manderó in B. Poi cercheró i numeri compresi tra 11 e 20 e li manderó in B, e cosí via fino ad arrivare al blocco dei numeri tra 101 e 110. Quello sará l'ultimo blocco, l'undicesimo, ad essere mandato in B.</p>
<p>Dopodiché ordineró l'unico blocco rimasto in A che conterrá i numeri piú grandi della lista A e che quindi andrá a costituire le fondamenta dell'ordinamento della lista A. Da qui cominceró a lavorare sull'ultimo blocco inviato in B, andando a cercare il suo valore piú grande, per poi mandarlo in A, fino a che quel blocco non verrá mandato (in ordine decrescente) in A e cosí via finché lo stack B non sará esaurito.
<p>Con 100 numeri il sistema ordina lo stack A in circa 800 mosse, mentre 500 numeri in circa 7000 mosse. Sta a voi, se vorrete intraprendere questo metodo, ottimizzarlo ancor di piú.</p>
<p>La sfida é aperta!</p>
  
<p>Di sotto una gif che rappresenta il processo tramite il visualizer di Ilya Kashnitskiy (elijahkash), che potete trovare a questo link: https://github.com/elijahkash/push_swap_gui</p>

<h1>🇬🇧 English</h1>

The “push_swap” project is a project in the 42 school curriculum that involves sorting data on a stack, with a limited set of instructions, using the smallest number of actions. The game is composed of 2 stacks named ```a``` and ```b```. The goal is to sort in ascending order numbers into ```a```. To do so, you can use this set of movements: ```sa```, ```sb```, ```ss```, ```pa```, ```pb```, ```ra```, ```rb```, ```rr```, ```rra```, ```rrb```, ```rrr```.

<h3>METHOD 👨‍🎓</h3>
My push_swap project is based on the Latin motto “Divide and conquer”. The goal is to break down the list into blocks and sort them progressively, so as to have smaller “navigation” spaces (when I go to look for the numbers), making fewer moves.

<h3>EXECUTION 🛠️</h3>
Once the nodes of my list are filled with the values entered from the keyboard, I create a third list “stack_copy” where I go to copy all the disordered values in A and sort them quickly without following the moves given by the project.

In doing so, I create an ordered list where to look for the key numbers (which from now on I will call “pivot”), around which to create these blocks of numbers (I chose the division into 12 blocks - after having made several attempts - but they can change from code to code).

The pivots are the values that are found at the upper limit of each block. So for example if my disordered list A was of 120 elements, my pivots will be the values of the positions 10, 20, 30, 40, …, 110 of my ordered “stack_copy” list. In this way, I will go to look for the smallest numbers of the first pivot (10) and send them to B. Then I will look for the numbers between 11 and 20 and send them to B, and so on until I reach the block of numbers between 101 and 110. That will be the last block, the eleventh, to be sent to B.

Then I will order the only block left in A that will contain the largest numbers in the A list and that will therefore constitute the foundations of the sorting of the A list. From here I will start working on the last block sent to B, going to look for its largest value, then send it to A, until that block is sent (in descending order) to A and so on until stack B is exhausted.

With 100 numbers the system sorts stack A in about 800 moves, while 500 numbers in about 7000 moves. It’s up to you, if you want to undertake this method, to optimize it even more.

The challenge is open!

Below is a gif that represents the process through the visualizer of Ilya Kashnitskiy (elijahkash), which you can find at this link: https://github.com/elijahkash/push_swap_gui

![gif_push_swap](https://github.com/misidori/42_cursus/assets/123883959/4c1ca74f-5c54-480a-9a97-996b80e6a948)
