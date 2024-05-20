<h1>🇮🇹 Italian</h1>

<p>Il progetto so_long è il primo gioco che ho realizzato nella 42. È un progetto divertente, poiché ti permette di utilizzare risorse grafiche e animazioni. La parte principale del tuo programma sarà la comunicazione con la libreria MLX, effettuare il parsing della mappa e gestione della memoria.</p>

<h3>METODO 👨‍🎓</h3>
<p>Il mio progetto so_long legge una mappa testuale passata come argomento, la scansiona e scansiona ad ogni lettera o cifra trovata una immagine corrispondente. Dopo ogni movimento andrá a rifare la scansione della mappa comn conseguente visualizzazione grafica. Obiettivo del gioco é raccogliere tutti gli oggetti (da ora in poi "collezionabili"), evitare di entrare in contatto con il nemico ed uscire dalla porta.</p>

<h3>ESECUZIONE 🛠️</h3>
<p>La lettura della mappa avviene tramite la funzione read(), che andrá ad immagazzinare in una stringa tutta la mappa. Sulla stringa stessa faccio un primo check della mappa, cercando che tutti gli elementi necessari siano presenti (il giocatore (o player - P), l'uscita (o exit - E) ed il Collezionabile (C).  Dopodiché trasformo la stringa in una matrice con la funzione ft_split() andando a dividere la stringa ogni volta che incontra uno "\n".</p>
<p>Altri controlli vengono effettuati sulla mappa: i bordi devono essere composti di soli "1" e la forma della mappa deve essere rettangolare.</p>
<p>Dopodiché gestisco i movimenti del giocatore, ne conto le mosse ed ogni volta che prende un Collezionabile il contatore dei collezionabili diminuisce di uno. Una volta presi tutti i collezionabili, la porta si aprirá e si potrá uscire dal gioco.</p>
<p>Sia che tu vinca o che perda, il gioco mostrerá una schermata finale, diversa per ciascuno dei due casi</p>

<h1>🇬🇧 English</h1>

<p>The so_long project is the first game i made in 42. It’s a fun project, as it allows you to use graphical assets and animations. The main part of your program will be communicating with the MLX library, do the parsing of the map and memory handling.</p>

<h3>METHOD 👨‍🎓</h3>
My so_long project reads a text map passed as an argument, scans it and for each letter or digit found, it scans a corresponding image. After each movement, it will rescan the map with the consequent graphic display. The goal of the game is to collect all the objects (from now on “collectibles”), avoid coming into contact with the enemy and exit through the door.

<h3>EXECUTION 🛠️</h3> 
</p>The map reading is done through the read() function, which will store the entire map in a string. On the same string, I do a first check of the map, making sure that all the necessary elements are present (the player (or player - P), the exit (or exit - E) and the Collectible ©. Then I transform the string into a matrix with the ft_split() function, dividing the string every time it encounters a “\n”.</p>

<p>Other checks are performed on the map: the borders must be composed of only “1” and the shape of the map must be rectangular.</p>

<p>Then I manage the player’s movements, I count the moves and every time he takes a Collectible the collectibles counter decreases by one. Once all the collectibles have been taken, the door will open and you can exit the game.</p>

<p>Whether you win or lose, the game will show a final screen, different for each of the two cases.</p>

![so_long](https://user-images.githubusercontent.com/123883959/228296331-910d258c-c8af-447d-93d7-c0b8bf2d7674.gif)
