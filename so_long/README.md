<h3>METODO 👨‍🎓</h3>
<p>Il mio progetto so_long legge una mappa testuale passata come argomento, la scansiona e scansiona ad ogni lettera o cifra trovata una immagine corrispondente. Dopo ogni movimento andrá a rifare la scansione della mappa comn conseguente visualizzazione grafica. Obiettivo del gioco é raccogliere tutti gli oggetti (da ora in poi "collezionabili"), evitare di entrare in contatto con il nemico ed uscire dalla porta.</p>

<h3>ESECUZIONE 🛠️
</h3><p>La lettura della mappa avviene tramite la funzione read(), che andrá ad immagazzinare in una stringa tutta la mappa. Sulla stringa stessa faccio un primo check della mappa, cercando che tutti gli elementi necessari siano presenti (il giocatore (o player - P), l'uscita (o exit - E) ed il Collezionabile (C).  Dopodiché trasformo la stringa in una matrice con la funzione ft_split() andando a dividere la stringa ogni volta che incontra uno "\n".</p>
<p>Altri controlli vengono effettuati sulla mappa: i bordi devono essere composti di soli "1" e la forma della mappa deve essere rettangolare.</p>
<p>Dopodiché gestisco i movimenti del giocatore, ne conto le mosse ed ogni volta che prende un Collezionabile il contatore dei collezionabili diminuisce di uno. Una volta presi tutti i collezionabili, la porta si aprirá e si potrá uscire dal gioco.</p>
<p>Sia che tu vinca o che perda, il gioco mostrerá una schermata finale, diversa per ciascuno dei due casi</p>

![so_long](https://user-images.githubusercontent.com/123883959/228296331-910d258c-c8af-447d-93d7-c0b8bf2d7674.gif)
