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

![gif_push_swap](https://github.com/misidori/42_cursus/assets/123883959/4c1ca74f-5c54-480a-9a97-996b80e6a948)

<h3>BONUS ⭐
</h3><p>Il checker che ho programmato puó essere eseguito da solo passandogli i numeri come argomenti come da esempio:
./checker 4079 1445 1722 4672 6944 5962 3167 9373 9675 4442 5279 146 1298 2434 8714 2958 884 8026 7666 2300 7864 5807 764 6333 630 5899 7272 7364 788 425
In questo caso aspetterá che le mosse per ordinare i numeri vengano inserite una alla volta da terminale. Il checker rimane in ascolto fino a che non viene inserito Ctrl + D. A questo punto il checker leggerá le mosse inserite, le eseguirá (senza stamparle) e controllerá se la lista risultante sia effettivamente ordinata o no. In caso positivo stamperá un semplice OK, altrimenti un semplice KO.
<p>Il checker puó anche essere usato con due flags mutualmente esclusive: -m e -v.</p>
<p>La flag -m stamperá sul terminale se le mosse inserite ordinano o meno la lista di numeri tramite comunciazione SORTED o NOT SORTED! e stamperá anche il numero delle mosse eseguite in caso positivo.</p>
<p>La flag -v oltre all'esito dell'ordinamento e il numero delle mosse stampa anche la lista ordinata</p>

<img width="997" alt="Schermata 2023-06-13 alle 11 45 54" src="https://github.com/misidori/42_cursus/assets/123883959/1f29d003-ac1c-42d9-8043-27fde9d82262">
