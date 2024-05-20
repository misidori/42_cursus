<h1>🇮🇹 Italian</h1>

Questo progetto prevede la comprensione dei fondamenti della programmazione concorrente.
Il progetto ```philosophers``` coinvolge la creazione di un programma che simula il ```problema dei filosofi a cena```:
<br></br>
```Il problema dei filosofi a cena è un classico esempio di problema di sincronizzazione in informatica. Immagina di avere cinque filosofi seduti attorno a un tavolo rotondo. Ogni filosofo ha una forchetta tra lui e il filosofo accanto. Al centro del tavolo c’è un piatto di spaghetti. Ogni filosofo può fare solo una delle tre cose: pensare, avere fame o mangiare. Tuttavia, c’è un problema. Anche se ogni filosofo ha due forchette vicino a lui, non può mangiare a meno che non abbia entrambe le forchette. Quindi, se tutti i filosofi prendono la forchetta alla loro destra nello stesso momento, nessuno di loro può mangiare perché non hanno la seconda forchetta di cui hanno bisogno. Questa situazione è chiamata “stallo” o “deadlock”. Il problema dei filosofi a cena è quindi un problema di come progettare un algoritmo in modo che i filosofi non muoiano di fame (cioè, possono eventualmente mangiare) e non ci sia stallo.```
<br></br>
Il programma deve gestire diversi ```threads``` (i filosofi) che condividono le stesse risorse (le forchette) e devono coordinare l’accesso a queste risorse per evitare condizioni di stallo o la morte prematura dei filosofi.

<h1>🇬🇧 English</h1>

This project involves understanding the fundamentals of concurrent programming.
The ```philosophers``` project involves creating a program that simulates the ```dining philosophers problem```:
<br></br>
```The dining philosophers problem is a classic example of a synchronization problem in computer science. Imagine you have five philosophers sitting around a round table. Each philosopher has a fork between him and the philosopher next to him. In the center of the table is a plate of spaghetti. Each philosopher can only do one of three things: think, be hungry, or eat. However, there’s a catch. Even though each philosopher has two forks next to him, he can’t eat unless he has both forks. So, if all philosophers pick up the fork to their right at the same time, none of them can eat because they don’t have the second fork they need. This situation is called a “deadlock”. The dining philosophers problem is therefore a problem of how to design an algorithm so that the philosophers don’t starve (i.e., they can eventually eat) and there is no deadlock```.
<br></br>
The program must manage several ```threads``` (the philosophers) that share the same resources (the forks) and must coordinate access to these resources to avoid deadlock and starvation conditions.
